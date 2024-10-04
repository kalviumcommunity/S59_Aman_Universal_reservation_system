#ifndef BOOKING_H
#define BOOKING_H

class Booking
{
public:
    virtual void confirmBooking() const = 0; // Pure virtual function
    virtual ~Booking() {}  // Virtual destructor
};

#endif
