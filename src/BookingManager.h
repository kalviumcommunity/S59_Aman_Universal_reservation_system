#pragma once
#include <memory>
#include <vector>
#include <string>
#include "IPlace.h"
#include "IReservation.h"
#include "IPricing.h"
#include "INotification.h"
#include "Customer.h"

/*
 * BookingManager Class
 * --------------------
 * Demonstrates SOLID principles:
 * - Single Responsibility: Handles only booking-related operations.
 * - Open-Closed: Can extend functionality with new pricing strategies, notification systems, etc.
 * - Dependency Inversion: Depends on abstractions (interfaces) for flexibility.
 */

class BookingManager {
private:
    std::vector<std::shared_ptr<IPlace>> places;       // List of available places
    std::vector<std::shared_ptr<IReservation>> reservations; // List of reservations
    std::vector<std::shared_ptr<Customer>> customers;  // List of customers
    std::shared_ptr<IPricing> pricingStrategy;         // Pricing strategy (via dependency injection)
    std::shared_ptr<INotification> notificationService; // Notification service (via dependency injection)

public:
    // Constructor - Injects dependencies for pricing and notifications
    BookingManager(std::shared_ptr<IPricing> pricing, std::shared_ptr<INotification> notification)
        : pricingStrategy(pricing), notificationService(notification) {}

    // Adds a place to the system
    void addPlace(std::shared_ptr<IPlace> place) {
        places.push_back(place);
    }

    // Adds a customer to the system
    void addCustomer(std::shared_ptr<Customer> customer) {
        customers.push_back(customer);
    }

    // Returns a list of available places for a given date and time slot
    std::vector<std::shared_ptr<IPlace>> getAvailablePlaces(const std::string& date, int timeSlot) {
        std::vector<std::shared_ptr<IPlace>> available;
        for (const auto& place : places) {
            if (place->isAvailable(date, timeSlot)) {
                available.push_back(place);
            }
        }
        return available;
    }

    // Creates a booking and sends confirmation
    bool createBooking(std::shared_ptr<IPlace> place, std::shared_ptr<Customer> customer,
                        const std::string& date, int timeSlot, int duration) {
        if (!place->isAvailable(date, timeSlot)) {
            return false; // Booking cannot be created as the place is not available
        }

        // Calculate price using the pricing strategy
        double price = pricingStrategy->calculatePrice(place->getBasePrice(), duration);

        // Simulate booking creation (e.g., create a reservation entry)
        // In a real system, you might create and store a reservation object here.
        place->setAvailability(date, timeSlot, false); // Mark the slot as booked

        // Send a confirmation notification
        std::string message = "Booking confirmed for " + place->getName() +
                              " on " + date + " for " + std::to_string(duration) + " hours. Total price: $" +
                              std::to_string(price);
        notificationService->sendConfirmation(customer->getEmail(), message);

        // Update customer's booking history
        customer->addBooking("Booking ID Placeholder"); // Use an actual booking ID in a real system

        return true;
    }
};
