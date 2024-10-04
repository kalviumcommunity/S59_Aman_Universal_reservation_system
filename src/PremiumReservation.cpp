#include "PremiumReservation.h"
#include <iostream>
using namespace std;

PremiumReservation::PremiumReservation(int seatNumber, double price)
    : Reservation(seatNumber), price(price) {}

void PremiumReservation::confirmReservation() const
{
    cout << "Premium reservation confirmed for seat number: " << seatNumber
         << " at a price of $" << price << endl;
}
