#pragma once
#include "INotification.h"
#include <iostream>

/*
 * EmailNotification Class
 * ------------------------
 * Implements an email-based notification system.
 * 
 * SOLID Principles:
 * - Dependency Inversion Principle: Notification depends on the abstraction (INotification).
 */

class EmailNotification : public INotification {
public:
    // Sends a confirmation email
    void sendConfirmation(const std::string& recipient, const std::string& message) override {
        std::cout << "Email sent to " << recipient << ": [Confirmation]\n" << message << "\n";
    }

    // Sends a reminder email
    void sendReminder(const std::string& recipient, const std::string& message) override {
        std::cout << "Email sent to " << recipient << ": [Reminder]\n" << message << "\n";
    }

    // Sends a cancellation email
    void sendCancellation(const std::string& recipient, const std::string& message) override {
        std::cout << "Email sent to " << recipient << ": [Cancellation]\n" << message << "\n";
    }
};
