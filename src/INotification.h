#pragma once
#include <string>

/*
 * SOLID Principles:
 * - ISP: Notification-related functions are separated, allowing the addition of different notification types.
 * - DIP: Abstracts notification delivery for flexibility.
 */
class INotification {
public:
    virtual ~INotification() = default;

    virtual void sendConfirmation(const std::string& recipient, const std::string& message) = 0;
    virtual void sendReminder(const std::string& recipient, const std::string& message) = 0;
    virtual void sendCancellation(const std::string& recipient, const std::string& message) = 0;
};