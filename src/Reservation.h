#pragma once
#include <string>
#include <chrono>

class Reservation {
protected:
    std::string date;
    int duration; // in hours
    std::string customerName;
    std::string contactInfo;

public:
    Reservation(const std::string& d, int dur, const std::string& name, const std::string& contact)
        : date(d), duration(dur), customerName(name), contactInfo(contact) {}
    
    virtual ~Reservation() = default;

    virtual int getDuration() const { return duration; }
    virtual bool modify(const std::string& newDate, int newDuration) {
        date = newDate;
        duration = newDuration;
        return true;
    }

    virtual std::string getDetails() const {
        return "Customer: " + customerName + "\nDate: " + date +
               "\nDuration: " + std::to_string(duration) + " hours";
    }
};