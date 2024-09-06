#ifndef RESERVATION_H
#define RESERVATION_H

using namespace std;

class Reservation
{
private:
    // Private data member
    int seatNumber;

public:
    // Static member
    static int NumOfSeatReserved;

    // Constructor
    Reservation(int seatNumber);

    // Public accessors and mutators
    int getSeatNumber() const;
    void setSeatNumber(int seatNumber);

    // Public interface
    void confirmReservation() const;
};

#endif
