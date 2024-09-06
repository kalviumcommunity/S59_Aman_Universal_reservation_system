#include <iostream>
#include "Place.h"
#include "Reservation.h"

using namespace std;

int main()
{
    // Using default constructor for Place
    Place defaultPlace;
    defaultPlace.displayInfo();

    // Using parameterized constructor for Place
    Place cineplex("Cineplex", 150);
    cineplex.displayInfo();

    // Using copy constructor for Place
    Place copiedPlace(cineplex);
    copiedPlace.displayInfo();

    // Display total number of places
    cout << "Total number of places registered: " << Place::getTotalPlaces() << endl;

    // Using default constructor for Reservation
    Reservation defaultReservation;
    defaultReservation.confirmReservation();

    // Using parameterized constructor for Reservation
    Reservation specificReservation(42);
    specificReservation.confirmReservation();

    // Display total number of seats reserved
    cout << "Total number of seats reserved: " << Reservation::NumOfSeatReserved << endl;

    return 0;
}
