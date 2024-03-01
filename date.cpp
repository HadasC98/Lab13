#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Constructor to initialize the Date object
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Member functions to retrieve parts of the date
    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    // Member function to compare dates
    bool isEqual(const Date& other) const {
        return (day == other.day) && (month == other.month) && (year == other.year);
    }

    // Member function to print the date
    void printDate() const {
        std::cout << day << "/" << month << "/" << year;
    }
};

int main() {
    // Create two Date objects
    Date date1(10, 2, 2022);
    Date date2(15, 2, 2022);

    // Print the dates
    std::cout << "Date 1: ";
    date1.printDate();
    std::cout << std::endl;

    std::cout << "Date 2: ";
    date2.printDate();
    std::cout << std::endl;

    // Compare the dates
    if (date1.isEqual(date2)) {
        std::cout << "Date 1 is equal to Date 2.\n";
    } else {
        std::cout << "Date 1 is not equal to Date 2.\n";
    }

    return 0;
}
