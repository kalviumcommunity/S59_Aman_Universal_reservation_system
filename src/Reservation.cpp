#include "Reservation.h"
#include <iostream>
using namespace std;

Reservation::Reservation(int seatNumber) : seatNumber(seatNumber) {}

void Reservation::confirmReservation() const
{
    cout << "Reservation confirmed for seat number: " << seatNumber << endl;
}

void Reservation::setSeatNumber(int seatNumber)
{
    this->seatNumber = seatNumber;
}
