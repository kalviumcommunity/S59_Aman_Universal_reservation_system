#include <iostream>
#include "Place.h"
#include "Reservation.h"

using namespace std;

int main()
{
    // Dynamic allocation of Place objects array
    const int numPlaces = 3;
    Place *places = new Place[numPlaces]{
        Place("Cineplex", 150),
        Place("Grand Cinema", 200),
        Place("Downtown Theater", 100)};

    // Displaying information for all Place objects
    cout << "Places Information:" << endl;
    for (int i = 0; i < numPlaces; ++i)
    {
        places[i].displayInfo();
    }

    // Dynamic allocation of Reservation objects array
    const int numReservations = 3;
    Reservation *reservations = new Reservation[numReservations]{
        Reservation(42),
        Reservation(35),
        Reservation(18)};

    // Confirming reservations for all Reservation objects
    cout << "\nReservations Confirmation:" << endl;
    for (int i = 0; i < numReservations; ++i)
    {
        reservations[i].confirmReservation();
    }


    // Printing static variables to console
    cout << "Total number of places registered: " << Place::placeCount << endl;
    cout << "Total number of seats reserved: " << Reservation::NumOfSeatReserved << endl;

    // Freeing allocated memory
    delete[] places;
    delete[] reservations;

    return 0;
}
