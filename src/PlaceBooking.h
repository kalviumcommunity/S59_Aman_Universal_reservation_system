#ifndef PLACEBOOKING_H
#define PLACEBOOKING_H

#include "Booking.h"
#include "Place.h"
#include <iostream>

using namespace std;

// Booking for a specific place (DIP)
class PlaceBooking : public Booking {
private:
    Place *place; // Dependency Injection for flexibility

public:
    PlaceBooking(Place *place) : place(place) {}

    void confirmBooking() const override {
        if (place->checkAvailability()) {
            cout << "Booking confirmed for place: " << place->getName() << endl;
            place->reserveSeat();
        } else {
            cout << "No seats available at place: " << place->getName() << endl;
        }
    }

    ~PlaceBooking() {
        // No ownership assumed; cleanup if needed
        // delete place;
    }
};

#endif
