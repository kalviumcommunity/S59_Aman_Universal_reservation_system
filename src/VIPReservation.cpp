#include "VIPReservation.h"
#include <iostream>

using namespace std;

VIPReservation::VIPReservation(int seatNumber, double price, bool complimentaryDrinks)
    : PremiumReservation(seatNumber, price), complimentaryDrinks(complimentaryDrinks) {}

void VIPReservation::confirmReservation() const
{
    PremiumReservation::confirmReservation();  // Call base class function
    cout << "Complimentary Drinks: " << (complimentaryDrinks ? "Yes" : "No") << endl;
}
