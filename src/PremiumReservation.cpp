#include "PremiumReservation.h"
#include <iostream>
using namespace std;

PremiumReservation::PremiumReservation(int seatNumber, double price)
    : Reservation(seatNumber), price(price) {}

void PremiumReservation::confirmReservation() const
{
    Reservation::confirmReservation(); // Call base class function
    cout << "Premium Reservation Price: $" << price << endl;
}
