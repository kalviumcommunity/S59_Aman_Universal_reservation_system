#pragma once
#include <string>
#include <vector>

class Customer {
private:
    std::string id;
    std::string name;
    std::string email;
    std::string phone;
    std::vector<std::string> bookingHistory; // To store booking IDs

public:
    // Constructor
    Customer(const std::string& id, const std::string& name, const std::string& email, const std::string& phone)
        : id(id), name(name), email(email), phone(phone) {}

    // Getters
    std::string getId() const { return id; }
    std::string getName() const { return name; }
    std::string getEmail() const { return email; }
    std::string getPhone() const { return phone; }

    // Add a booking to the customer's history
    void addBooking(const std::string& bookingId) {
        bookingHistory.push_back(bookingId);
    }

    // Retrieve booking history
    std::vector<std::string> getBookingHistory() const {
        return bookingHistory;
    }

    // Dummy loyalty points method for main.cpp
    int getLoyaltyPoints() const { return 0; }
};
