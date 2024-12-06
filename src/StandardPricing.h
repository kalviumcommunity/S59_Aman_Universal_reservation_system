#pragma once
#include "IPricing.h"
#include <algorithm>

/*
 * StandardPricing Class
 * ----------------------
 * Implements a basic pricing strategy.
 * 
 * SOLID Principles:
 * - Open/Closed Principle: Open for extensions (e.g., different pricing logic).
 */

class StandardPricing : public IPricing {
private:
    double hourlyRate;      // Rate per hour
    double minimumHours;    // Minimum billable hours

public:
    // Constructor
    StandardPricing(double hourlyRate, double minimumHours)
        : hourlyRate(hourlyRate), minimumHours(minimumHours) {}

    // Calculates the price based on duration
    double calculatePrice(double basePrice, int duration) const override {
        int billableHours = std::max(duration, static_cast<int>(minimumHours));
        return basePrice * hourlyRate * billableHours;
    }

    // Returns details of the pricing strategy
    std::string getPricingDetails() const override {
        return "Standard Pricing Strategy\nHourly Rate: $" + std::to_string(hourlyRate) +
               "\nMinimum Hours: " + std::to_string(minimumHours);
    }
};
