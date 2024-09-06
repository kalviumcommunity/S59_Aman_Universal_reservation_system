#include "Reservation.h"

// Initialize static member
int Reservation::NumOfSeatReserved = 0;

// Default constructor
Reservation::Reservation() : seatNumber(0)
{
    cout << "Default Constructor Called for Reservation with seat number: " << seatNumber << endl;
    NumOfSeatReserved++;
}

// Parameterized constructor
Reservation::Reservation(int seatNumber) : seatNumber(seatNumber)
{
    cout << "Parameterized Constructor Called for Reservation with seat number: " << seatNumber << endl;
    NumOfSeatReserved++;
}

// Destructor
Reservation::~Reservation()
{
    cout << "Destructor Called for Reservation with seat number: " << seatNumber << endl;
    NumOfSeatReserved--;
}

// Getters and Setters (Encapsulation)
int Reservation::getSeatNumber() const
{
    return seatNumber;
}

void Reservation::setSeatNumber(int seatNumber)
{
    this->seatNumber = seatNumber;
}

// Confirm the reservation
void Reservation::confirmReservation() const
{
    cout << "Reservation confirmed for seat number: " << seatNumber << endl;
}
