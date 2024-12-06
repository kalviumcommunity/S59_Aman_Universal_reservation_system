// Booking.h
#pragma once
#include <string>
#include <memory>
#include "Place.h"
#include "Reservation.h"

/*
* SOLID Principles Applied:
* - Single Responsibility: Booking class handles only booking-related operations
* - Open/Closed: New booking types can be added without modifying existing code
* - Liskov Substitution: All booking types can be used interchangeably
* - Interface Segregation: Booking interfaces are specific to their use cases
* - Dependency Inversion: Depends on abstractions (Place, Reservation) not concrete implementations
*/
class Booking {
protected:
    std::shared_ptr<Place> place;
    std::shared_ptr<Reservation> reservation;
    std::string bookingId;
    double totalPrice;

public:
    Booking(std::shared_ptr<Place> p, std::shared_ptr<Reservation> r)
        : place(p), reservation(r) {
        bookingId = generateBookingId();
        calculateTotalPrice();
    }

    virtual ~Booking() = default;
    
    virtual void calculateTotalPrice() {
        totalPrice = place->getPrice() * reservation->getDuration();
    }

    virtual std::string getBookingDetails() const {
        return "Booking ID: " + bookingId + "\n" +
               "Place: " + place->getName() + "\n" +
               "Duration: " + std::to_string(reservation->getDuration()) + " hours\n" +
               "Total Price: $" + std::to_string(totalPrice);
    }

    virtual bool modifyBooking(const std::string& newDate, int newDuration) {
        return reservation->modify(newDate, newDuration);
    }

private:
    std::string generateBookingId() {
        static int counter = 1000;
        return "BK" + std::to_string(++counter);
    }
};