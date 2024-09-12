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

    // Default constructor
    Reservation() : seatNumber(0)
    {
        cout << "Default Constructor Called for Reservation with seat number: " << seatNumber << endl;
        NumOfSeatReserved++;
    }

    // Parameterized constructor
    Reservation(int seatNumber) : seatNumber(seatNumber)
    {
        cout << "Parameterized Constructor Called for Reservation with seat number: " << seatNumber << endl;
        NumOfSeatReserved++;
    }

    // Destructor
    ~Reservation()
    {
        cout << "Destructor Called for Reservation with seat number: " << seatNumber << endl;
        NumOfSeatReserved--;
    }

    // Accessors and Mutators
    int getSeatNumber() const { return seatNumber; }
    void setSeatNumber(int seatNumber) { this->seatNumber = seatNumber; }

    void confirmReservation() const
    {
        cout << "Reservation confirmed for seat number: " << seatNumber << endl;
    }
};

int Reservation::NumOfSeatReserved = 0;

#endif
