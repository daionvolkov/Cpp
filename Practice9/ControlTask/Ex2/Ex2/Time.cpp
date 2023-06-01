#include <iostream>
using std::cout;
using std::endl;

class Time {


public:

    Time() :
        hours(0),
        minutes(0),
        seconds(0)
    {}


    Time(int h, int m, int s) {
        try {
            if (h < 0 || m < 0 || s < 0 || m >= 60 || s >= 60) {
                throw std::invalid_argument("Invalid time!");
            }
            hours = h + (m / 60) + (s / 3600);
            minutes = (m % 60) + ((s % 3600) / 60);
            seconds = s % 60;
        }
        catch (const std::invalid_argument& ex) {
            std::cout << "Exception: " << ex.what() << std::endl;
            hours = 0;
            minutes = 0;
            seconds = 0;
        }
    }


    void displayTime() const {
        cout << hours << ":"
            << minutes << ":"
            << seconds << endl;
    }


    Time addTime(const Time& t) const {
        Time result;
        result.seconds = seconds + t.seconds;
        result.minutes = minutes + t.minutes + (result.seconds / 60);
        result.hours = hours + t.hours + (result.minutes / 60);
        result.seconds %= 60;
        result.minutes %= 60;
        return result;
    }

private:
    int hours;
    int minutes;
    int seconds;
};