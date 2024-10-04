#ifndef RESERVATIONBOOKING_H
#define RESERVATIONBOOKING_H

#include "Booking.h"
#include "Reservation.h"
#include <iostream>

class ReservationBooking : public Booking
{
private:
    Reservation reservation;

public:
    ReservationBooking(int seatNumber) : reservation(seatNumber) {}

    // Override the virtual function from the base class
    void confirmBooking() const override
    {
        reservation.confirmReservation();
    }
};

#endif
