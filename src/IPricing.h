#pragma once

/*
 * SOLID Principles:
 * - OCP: Pricing logic can be extended by adding new implementations without modifying this interface.
 * - DIP: Abstracts pricing logic for high-level modules like BookingManager.
 */
class IPricing {
public:
    virtual ~IPricing() = default;

    virtual double calculatePrice(double basePrice, int duration) const = 0;
    virtual std::string getPricingDetails() const = 0;
};