#ifndef PLACEBOOKING_H
#define PLACEBOOKING_H

#include "Booking.h"
#include "Place.h"
#include <iostream>

class PlaceBooking : public Booking
{
private:
    Place place;

public:
    PlaceBooking(const string &name, int totalSeats) : place(name, totalSeats) {}

    // Override the virtual function from the base class
    void confirmBooking() const override
    {
        if (place.checkAvailability())
        {
            cout << "Booking confirmed for place: " << place.getName() << endl;
        }
        else
        {
            cout << "No seats available at place: " << place.getName() << endl;
        }
    }
};

#endif
