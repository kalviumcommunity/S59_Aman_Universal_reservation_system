#include <iostream>
#include "Place.h"
#include "Reservation.h"

using namespace std;

int main()
{
    // Array of Place objects
    const int numPlaces = 3;
    Place places[numPlaces] = {
        Place("Cineplex", 150),
        Place("Grand Cinema", 200),
        Place("Downtown Theater", 100)};

    // Displaying information for all Place objects
    cout << "Places Information:" << endl;
    for (int i = 0; i < numPlaces; ++i)
    {
        places[i].displayInfo();
    }

    // Array of Reservation objects
    const int numReservations = 3;
    Reservation reservations[numReservations] = {
        Reservation(42),
        Reservation(35),
        Reservation(18)};

    // Confirming reservations for all Reservation objects
    cout << "\nReservations Confirmation:" << endl;
    for (int i = 0; i < numReservations; ++i)
    {
        reservations[i].confirmReservation();
    }

    return 0;
}
