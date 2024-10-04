#include <iostream>
#include "Place.h"
#include "Reservation.h"
#include "PremiumReservation.h"
#include "SpecialPlace.h"
#include "VIPReservation.h"

using namespace std;

int main()
{
    // Demonstrating single inheritance with SpecialPlace
    SpecialPlace special("Luxury Cinema", 50, true);
    special.displayInfo();

    // Demonstrating multilevel inheritance with VIPReservation
    VIPReservation vipRes(1, 100.0, true);
    cout << "\nVIP Reservation Details:\n";
    vipRes.confirmReservation();

    return 0;
}
