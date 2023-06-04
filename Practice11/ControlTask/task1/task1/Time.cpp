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
      
        hours = h + (m / 60) + (s / 3600);
        minutes = (m % 60) + ((s % 3600) / 60);
        seconds = s % 60;
    }

   
    void displayTime() const {
        cout << hours << ":" 
            << minutes << ":" 
            << seconds << endl;
    }

   
    Time operator+(const Time& t) const {
        Time result;
        result.seconds = seconds + t.seconds;
        result.minutes = minutes + t.minutes + (result.seconds / 60);
        result.hours = hours + t.hours + (result.minutes / 60);
        result.seconds %= 60;
        result.minutes %= 60;
        return result;
    }
    Time operator-(const Time& t) const {
        int totalSeconds1 = hours * 3600 + minutes * 60 + seconds;
        int totalSeconds2 = t.hours * 3600 + t.minutes * 60 + t.seconds;
        int diffSeconds = totalSeconds1 - totalSeconds2;

        Time result;
        result.hours = diffSeconds / 3600;
        result.minutes = (diffSeconds % 3600) / 60;
        result.seconds = diffSeconds % 60;
        return result;
    }

    Time operator+(double seconds) const {
        Time result;
        int totalSeconds = hours * 3600 + minutes * 60 + this->seconds + static_cast<int>(seconds);
        result.hours = totalSeconds / 3600;
        result.minutes = (totalSeconds % 3600) / 60;
        result.seconds = totalSeconds % 60;
        return result;
    }

    friend Time operator+(double seconds, const Time& t) {
        return t + seconds;
    }

    bool operator==(const Time& t) const {
        return hours == t.hours && minutes == t.minutes && seconds == t.seconds;
    }

private:
    int hours;
    int minutes;
    int seconds;
};