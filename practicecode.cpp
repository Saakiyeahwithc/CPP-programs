/* Create a class called time that has separate int member data for hours, minutes, and seconds. One constructor should initialize this data to 0, and another should initialize it to fixed values. Another member function should display it, in 11:59:59 format. The final member function should add two objects of type time passed as arguments. A main () program should create two initialized time objects (should they be const?) and one that isn't initialized. Then it should add the two initialized values together, leaving the result in the third time variable. Finally, it should display the value of this third variable Make appropriate member functions const. */

#include <iostream>
using namespace std;
class Time
{
    int hours;
    int minutes;
    int seconds;

public:
    Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    Time(int hrs, int mins, int secs)
    {
        hours = hrs;
        minutes = mins;
        seconds = secs;
    }
    void displayTime()
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
    Time addTotalTime(Time t1, Time t2)
    {
        Time t3;
        t3.hours = t1.hours + t2.hours;
        t3.minutes = t1.minutes + t2.minutes;
        if (t3.minutes >= 60)
        {
            t3.minutes -= 60;
            t3.hours += 1;
        }
        t3.seconds = t1.seconds + t2.seconds;
        if (t3.seconds >= 60)
        {
            t3.seconds -= 60;
            t3.minutes += 1;
        }
        return t3;
    }
};
int main()
{
    Time t1(5, 20, 32);
    Time t2(7, 42, 52);
    Time t3;
    cout << "Taken Times are:" << endl;
    t1.displayTime();
    t2.displayTime();
    t3 = t3.addTotalTime(t1, t2);
    cout << "The sum of the times is:" << endl;
    t3.displayTime();
}