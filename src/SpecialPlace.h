#pragma once
#include "Place.h"
#include <vector>
#include <map>

/*
 * SOLID Principles:
 * - OCP: Extends Place functionality without modifying the base class.
 * - SRP: Adds special features and restrictions to places.
 */
class SpecialPlace : public Place {
private:
    std::map<std::string, double> specialFeatures;
    double peakHourRate;
    std::vector<std::string> restrictions;

public:
    SpecialPlace(const std::string& n, const std::string& desc, double price, int cap,
                 const std::vector<std::string>& am, const std::map<std::string, double>& features,
                 double peakRate, const std::vector<std::string>& restrict)
        : Place(n, desc, price, cap, am), specialFeatures(features), peakHourRate(peakRate), restrictions(restrict) {}

    double getPeakHourRate() const { return peakHourRate; }
    std::map<std::string, double> getSpecialFeatures() const { return specialFeatures; }

    std::string getDetails() const override {
        std::string details = Place::getDetails();
        details += "\nSpecial Features:";
        for (const auto& feature : specialFeatures)
            details += "\n- " + feature.first + " ($" + std::to_string(feature.second) + ")";
        details += "\nPeak Hour Rate: $" + std::to_string(peakHourRate);
        details += "\nRestrictions:";
        for (const auto& restriction : restrictions)
            details += "\n- " + restriction;
        return details;
    }
};