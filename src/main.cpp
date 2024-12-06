#include <iostream>
#include <memory>
#include "BookingManager.h"
#include "StandardPricing.h"
#include "EmailNotification.h"
#include "SpecialPlace.h"

// Main function
int main() {
    // Initialize services
    auto pricingStrategy = std::make_shared<StandardPricing>(100.0, 2.0); // Standard pricing with hourly rate
    auto notificationService = std::make_shared<EmailNotification>(); // Email notification system
    auto bookingManager = std::make_unique<BookingManager>(pricingStrategy, notificationService);

    // Create some places
    std::vector<std::string> basicAmenities = {"WiFi", "Projector", "Chairs"};
    auto standardPlace = std::make_shared<Place>("Standard Room", "Basic meeting room",
                                               100.0, 20, basicAmenities);

    std::vector<std::string> specialAmenities = {"WiFi", "4K Projector", "Catering", "Sound System"};
    std::map<std::string, double> specialFeatures = {
        {"Catering Service", 200.0},
        {"Technical Support", 150.0}
    };
    std::vector<std::string> restrictions = {"No outside food", "No smoking"};
    auto specialPlace = std::make_shared<SpecialPlace>("Executive Suite",
                                                      "Luxury meeting space",
                                                      300.0, 50, specialAmenities,
                                                      specialFeatures, 1.5, restrictions);

    bookingManager->addPlace(standardPlace); // Adding a standard place
    bookingManager->addPlace(specialPlace);  // Adding a special place

    // Create a customer
    auto customer = std::make_shared<Customer>("C001", "John Doe", "john@example.com", "123-456-7890");

    bookingManager->addCustomer(customer); // Adding the customer

    // Interactive menu system
    int choice;
    do {
        std::cout << "\n=== Booking System ===\n"
                  << "1. View Available Places\n"
                  << "2. Make Booking\n"
                  << "3. View Customer Details\n"
                  << "4. Exit\n"
                  << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                // View available places
                std::string date;
                int timeSlot;
                std::cout << "Enter date (DD/MM/YYYY): ";
                std::cin >> date;
                std::cout << "Enter time slot (0-23): ";
                std::cin >> timeSlot;

                auto available = bookingManager->getAvailablePlaces(date, timeSlot);
                if (available.empty()) {
                    std::cout << "No places available for the selected date and time slot.\n";
                } else {
                    std::cout << "\nAvailable Places:\n";
                    for (const auto& place : available) {
                        std::cout << "\n" << place->getDetails() << "\n";
                    }
                }
                break;
            }
            case 2: {
                // Make a booking
                std::string date;
                int timeSlot, duration;
                std::cout << "Enter date (DD/MM/YYYY): ";
                std::cin >> date;
                std::cout << "Enter time slot (0-23): ";
                std::cin >> timeSlot;
                std::cout << "Enter duration (in hours): ";
                std::cin >> duration;

                // Display available places for booking
                auto available = bookingManager->getAvailablePlaces(date, timeSlot);
                if (available.empty()) {
                    std::cout << "No places available for the selected date and time slot.\n";
                } else {
                    std::cout << "\nAvailable Places:\n";
                    for (size_t i = 0; i < available.size(); ++i) {
                        std::cout << i + 1 << ". " << available[i]->getName() << "\n";
                    }

                    // Select a place for booking
                    int placeChoice;
                    std::cout << "Select a place to book (1-" << available.size() << "): ";
                    std::cin >> placeChoice;
                    if (placeChoice < 1 || placeChoice > available.size()) {
                        std::cout << "Invalid selection.\n";
                    } else {
                        auto selectedPlace = available[placeChoice - 1];
                        if (bookingManager->createBooking(selectedPlace, customer, date, timeSlot, duration)) {
                            std::cout << "Booking successful!\n";
                        } else {
                            std::cout << "Failed to create booking. The place might already be booked.\n";
                        }
                    }
                }
                break;
            }
            case 3: {
                // View customer details
                std::cout << "Customer: " << customer->getName() << "\n"
                         << "Loyalty Points: " << customer->getLoyaltyPoints() << "\n"
                         << "Booking History:\n";
                for (const auto& history : customer->getBookingHistory()) {
                    std::cout << "- " << history << "\n";
                }
                break;
            }
            case 4:
                std::cout << "Thank you for using our system!\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
