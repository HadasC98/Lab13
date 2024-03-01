//this is lab 13 fist exercise

//include header file
#include <iostream>
#include <ctime>
// Member function to set the date
    void Date::setDate(int year, int month, int day) {
        storedDate.tm_year = year - 1900;  // Year is the number of years since 1900
        storedDate.tm_mon = month - 1;     // Month is 0-based
        storedDate.tm_mday = day;
    }

    // Member function to display the stored date
    void Date::displayDate(){
        std::cout << "Stored Date: " << storedDate.tm_year + 1900 << "-"
                  << storedDate.tm_mon + 1 << "-" << storedDate.tm_mday << std::endl;
    }

    int main() {
    // Create an instance of the Date class
    Date myDate;

    // Set a specified date
    myDate.setDate(2022, 1, 15);

    // Display the stored date
    myDate.displayDate();

    return 0;
}