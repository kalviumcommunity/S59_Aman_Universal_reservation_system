#ifndef RESERVATION_H
#define RESERVATION_H

#include <string>
using namespace std;

class Reservation
{
private:
    int seatNumber;

public:
    Reservation(int seatNumber);
    virtual void confirmReservation() const; // Made virtual
    void setSeatNumber(int seatNumber);
    virtual ~Reservation() {} // Virtual destructor
};

#endif
