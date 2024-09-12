#ifndef RESERVATION_H
#define RESERVATION_H

using namespace std;

class Reservation
{
private:
    int seatNumber;

public:
    static int NumOfSeatReserved;

    // Constructor
    Reservation(int seatNumber);

    // Accessors (Getters)
    int getSeatNumber() const { return seatNumber; }

    // Mutators (Setters)
    void setSeatNumber(int seatNumber) { this->seatNumber = seatNumber; }

    void confirmReservation() const;
};

#endif
