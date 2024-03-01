#ifndef DATE_H
#define DATE_H


class Date {
private:
    std::tm storedDate;  // std::tm structure to store the date

public:
    // Constructor to initialize the date to a default value
    Date() {
        std::time_t now = std::time(nullptr);
        storedDate = *std::localtime(&now);
    }
};

#endif