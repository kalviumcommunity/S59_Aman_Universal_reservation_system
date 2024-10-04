#include <iostream>
#include "Place.h"
#include "SpecialPlace.h"
#include "Reservation.h"
#include "PremiumReservation.h"
#include "VIPReservation.h"

using namespace std;

int main()
{
    // Dynamic allocation of Place objects array
    const int numPlaces = 3;
    Place *places = new Place[numPlaces]{
        Place("Cineplex", 150),
        Place("Grand Cinema", 200),
        SpecialPlace("Downtown Theater", 100)};  // Using derived class SpecialPlace

    // Displaying information for all Place objects
    cout << "Places Information:" << endl;
    for (int i = 0; i < numPlaces; ++i)
    {
        places[i].displayInfo();
    }

    // Dynamic allocation of Reservation objects array
    const int numReservations = 3;
    Reservation *reservations = new Reservation[numReservations]{
        PremiumReservation(42),
        PremiumReservation(35),
        VIPReservation(18, 100.0, true)};  // Using derived class VIPReservation

    // Confirming reservations for all Reservation objects
    cout << "\nReservations Confirmation:" << endl;
    for (int i = 0; i < numReservations; ++i)
    {
        reservations[i].confirmReservation();
    }

    // Freeing allocated memory
    delete[] places;
    delete[] reservations;

    return 0;
}
