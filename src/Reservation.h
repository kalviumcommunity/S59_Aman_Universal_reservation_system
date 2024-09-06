#ifndef RESERVATION_H
#define RESERVATION_H

#include <iostream>
using namespace std;

class Reservation
{
private:
    int seatNumber;

public:
    static int NumOfSeatReserved;

    // Constructors
    Reservation();
    Reservation(int seatNumber);

    // Destructor
    ~Reservation();

    // Getters and Setters (Encapsulation)
    int getSeatNumber() const;
    void setSeatNumber(int seatNumber);

    // Other member functions
    void confirmReservation() const;
};

#endif
