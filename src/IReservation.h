#pragma once
#include <string>

/*
 * SOLID Principles:
 * - ISP: Allows different types of reservations by providing a general interface.
 * - DIP: Enables dependency on abstractions, decoupling reservation logic from specific implementations.
 */
class IReservation {
public:
    virtual ~IReservation() = default;

    virtual bool isValidForDate(const std::string& date) const = 0;
    virtual double calculatePrice(double basePrice) const = 0;
    virtual std::string getCustomerDetails() const = 0;
    virtual bool modify(const std::string& newDate, int newDuration) = 0;
    virtual std::string getDetails() const = 0;
    virtual int getDuration() const = 0;
    virtual std::string getDate() const = 0;
};