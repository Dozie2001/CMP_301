#include "iostream"

using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

bool isleapYear(int year);

bool isValidDate(const Date& currentDate);

Date getPreviousDate(const Date& currentDate);

int main() {
    Date today;

    cout << "Enter today's date (DD MM YYYY): ";
    cin >> today.day >> today.month >> today.year;

    // Validate input date
    if (!isValidDate(today)) {
        cerr << "Invalid date entered. Please provide a valid date.\n";
        return 1; // Exit with error code
    }

    // Get and display the previous date
    Date previousDate = getPreviousDate(today);
    cout << "Previous date: " << previousDate.day << " " << previousDate.month << " " << previousDate.year << std::endl;

    return 0;

}

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(const Date& currentDate) {
    if (currentDate.year < 1 || currentDate.month < 1 || currentDate.month > 12 || currentDate.day < 1) {
        return false;
    }

    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (currentDate.month == 2 && isLeapYear(currentDate.year)) {
        daysInMonth[2] = 29;
    }

    return currentDate.day <= daysInMonth[currentDate.month];
}

Date getPreviousDate(const Date& currentDate) {
    Date previousDate = currentDate;

    if (previousDate.day > 1) {
        previousDate.day--;
    } else {
        if (previousDate.month > 1) {
            previousDate.month--;
            previousDate.day = isLeapYear(previousDate.year) ? 29 : 28;
        } else {
            previousDate.year--;
            previousDate.month = 12;
            previousDate.day = 31;
        }
    }

    return previousDate;
}
