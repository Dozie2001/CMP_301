#include "iostream"
using namespace std;

struct Time {
    int seconds;
    int minutes;
    int hours;
};

void updateTime(Time& time) {
    time.seconds++;

    if (time.seconds == 60) {
        time.seconds = 0;
        time.minutes++;
        if (time.minutes == 60) {
            time.minutes = 0;
            time.hours++;
            if (time.hours == 24) {
                time.hours = 0;
            }
        }
    }
}

int main() {
    Time currentTime;
    cout << " Enter the current Time: ";
    cin >> currentTime.seconds >> currentTime.minutes >> currentTime.hours;

    updateTime(currentTime);

    cout << "Updated time: " << currentTime.hours << " hours, " << currentTime.minutes << " minutes, " << currentTime.seconds << " seconds.\n";


    return 0;
}