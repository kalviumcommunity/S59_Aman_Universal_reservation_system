#ifndef RESERVATION_H
#define RESERVATION_H

class Reservation
{
protected:
    int seatNumber;

public:
    Reservation(int seatNumber);
    virtual void confirmReservation() const;  // Virtual function for overriding
};

#endif
