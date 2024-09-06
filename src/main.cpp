#include <iostream>
#include "Place.h"
#include "Reservation.h"

using namespace std;

int main()
{
    // Default constructor for Place
    Place defaultPlace;
    defaultPlace.displayInfo();

    // Parameterized constructor for Place
    Place cineplex("Cineplex", 150);
    cineplex.displayInfo();

    // Copy constructor for Place
    Place copiedPlace(cineplex);
    copiedPlace.displayInfo();

    // Display total places
    cout << "Total number of places registered: " << Place::getTotalPlaces() << endl;

    // Using setter to modify Place details (Encapsulation)
    defaultPlace.setName("Grand Cinema");
    defaultPlace.setTotalSeats(200);
    cout << "Updated Place Information (Encapsulation):" << endl;
    defaultPlace.displayInfo();

    // Default constructor for Reservation
    Reservation defaultReservation;
    defaultReservation.confirmReservation();

    // Parameterized constructor for Reservation
    Reservation specificReservation(42);
    specificReservation.confirmReservation();

    // Using setter to modify Reservation details (Encapsulation)
    specificReservation.setSeatNumber(35);
    cout << "Updated Reservation Information (Encapsulation):" << endl;
    specificReservation.confirmReservation();

    // Display total number of seats reserved
    cout << "Total number of seats reserved: " << Reservation::NumOfSeatReserved << endl;

    return 0;
}
