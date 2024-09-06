#include <iostream>
#include "Place.h"
#include "Reservation.h"

using namespace std;

int main()
{
    // Dynamic allocation of Place objects
    const int numPlaces = 3;
    Place *places = new Place[numPlaces]{
        Place("Cineplex", 150),
        Place("Grand Cinema", 200),
        Place("Downtown Theater", 100)};

    // Displaying places' info using the public interface
    cout << "Places Information (Abstraction in action):" << endl;
    for (int i = 0; i < numPlaces; ++i)
    {
        places[i].displayInfo(); // Only exposes essential details
    }

    // Modifying and accessing data using public interface
    places[0].setName("Updated Cineplex");
    places[0].setTotalSeats(120);
    cout << "\nUpdated Place Info (Abstraction through accessors/mutators):" << endl;
    places[0].displayInfo();

    // Dynamic allocation of Reservation objects
    const int numReservations = 3;
    Reservation *reservations = new Reservation[numReservations]{
        Reservation(42),
        Reservation(35),
        Reservation(18)};

    // Confirming reservations using the public interface
    cout << "\nReservations Confirmation (Abstraction in action):" << endl;
    for (int i = 0; i < numReservations; ++i)
    {
        reservations[i].confirmReservation(); // Hides the internal workings
    }

    // Free allocated memory
    delete[] places;
    delete[] reservations;

    return 0;
}
