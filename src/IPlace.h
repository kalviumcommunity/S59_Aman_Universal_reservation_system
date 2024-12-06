#pragma once
#include <string>
#include <vector>

/*
 * SOLID Principles:
 * - Interface Segregation Principle (ISP): This interface defines separate contracts for Place-related features, allowing flexibility for different types of places.
 * - Dependency Inversion Principle (DIP): High-level modules like BookingManager depend on this abstraction instead of concrete implementations.
 */
class IPlace {
public:
    virtual ~IPlace() = default;

    // SRP: Each function has a single purpose, ensuring modularity.
    virtual double getBasePrice() const = 0; 
    virtual std::string getName() const = 0; 
    virtual std::string getDescription() const = 0; 
    virtual bool isAvailable(const std::string& date, int timeSlot) const = 0; 
    virtual void setAvailability(const std::string& date, int timeSlot, bool status) = 0; 
    virtual std::string getDetails() const = 0; 
    virtual int getCapacity() const = 0; 
    virtual std::vector<std::string> getAmenities() const = 0; 
};
