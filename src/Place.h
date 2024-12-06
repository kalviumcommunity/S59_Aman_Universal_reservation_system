#pragma once
#include "IPlace.h"
#include <map>
#include <set>

/*
 * SOLID Principles:
 * - LSP: Place adheres to IPlace's interface, allowing substitution without affecting correctness.
 * - SRP: This class manages attributes and availability of places.
 */
class Place : public IPlace {
protected:
    std::string name;
    std::string description;
    double basePrice;
    int capacity;
    std::vector<std::string> amenities;
    std::map<std::string, std::set<int>> bookings; // Tracks booked time slots for each date.

public:
    Place(const std::string& n, const std::string& desc, double price, int cap, const std::vector<std::string>& am)
        : name(n), description(desc), basePrice(price), capacity(cap), amenities(am) {}

    // Implementation of IPlace functions
    double getBasePrice() const override { return basePrice; }
    std::string getName() const override { return name; }
    std::string getDescription() const override { return description; }
    int getCapacity() const override { return capacity; }
    std::vector<std::string> getAmenities() const override { return amenities; }

    bool isAvailable(const std::string& date, int timeSlot) const override {
        auto it = bookings.find(date);
        return it == bookings.end() || it->second.find(timeSlot) == it->second.end();
    }

    void setAvailability(const std::string& date, int timeSlot, bool status) override {
        if (status)
            bookings[date].erase(timeSlot);
        else
            bookings[date].insert(timeSlot);
    }

    std::string getDetails() const override {
        std::string details = "Name: " + name + "\nDescription: " + description +
                              "\nBase Price: $" + std::to_string(basePrice) +
                              "\nCapacity: " + std::to_string(capacity) + "\nAmenities:";
        for (const auto& amenity : amenities)
            details += "\n- " + amenity;
        return details;
    }
};