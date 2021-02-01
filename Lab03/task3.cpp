#include <iostream>

using namespace std;

class DateTime
{
private:
    int date;
    int month;
    int year;
    int hours;
    int minutes;
    int seconds;

public:
    //constructors
    DateTime()
    {
        date = 0;
        month = 0;
        year = 0;
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    DateTime(int d, int m, int y, int h, int mi, int s)
    {
        date = d;
        month = m;
        year = y;
        hours = h;
        minutes = mi;
        seconds = s;
    }
    //Setters
    void setDate(int d)
    {
        date = d;
    }
    void setMonth(int m)
    {
        month = m;
    }
    void setYear(int y)
    {
        year = y;
    }
    void setHours(int h)
    {
        hours = h;
    }
    void setMinutes(int m)
    {
        minutes = m;
    }
    void setSeconds(int s)
    {
        seconds = s;
    }

    //Getters
    int getDate()
    {
        return date;
    }
    int getMonth()
    {
        return month;
    }
    int getYear()
    {
        return year;
    }
    int getHours()
    {
        return hours;
    }
    int getSeconds()
    {
        return seconds;
    }

    //Operator
    bool operator>(const DateTime &rhs)
    {
        if (year > rhs.year)
        {
            return true;
        }
        else if (year == rhs.year)
        {
            if (month > rhs.month)
            {
                return true;
            }
        }
        else if (year == rhs.year)
        {
            if (month == rhs.month)
            {
                if (date > rhs.date)
                {
                    return true;
                }
            }
        }
        else if (year == rhs.year)
        {
            if (month == rhs.month)
            {
                if (date == rhs.date)
                {
                    if (hours > rhs.hours)
                    {
                        return true;
                    }
                }
            }
        }
        else if (year == rhs.year)
        {
            if (month == rhs.month)
            {
                if (date == rhs.date)
                {
                    if (hours == rhs.hours)
                    {
                        if (minutes == rhs.minutes)
                        {
                            return true;
                        }
                    }
                }
            }
        }
        else
        {
            return false;
        }
    }
};

void calcDiff(int x, int y, string z)
{
    cout << z << ": " << y - x << endl;
}

int main()
{

    //This is how one can talk user user input. But due to time constraint, I have taken default input
    // int date;
    // int month;
    // int year;
    // int hours;
    // int minutes;
    // int seconds;
    // cout << "Enter credentials: ";
    // cin >> date;
    // cin >> month;
    // cin >> year;
    // cin >> hours;
    // cin >> minutes;
    // cin >> seconds;
    // t1.setDate(date);
    // t1.setHours(hours);
    // t1.setMinutes(minutes);
    // t1.setMonth(month);
    // t1.setSeconds(seconds);
    // t1.setYear(year);
    DateTime t1(5, 3, 2002, 12, 4, 6);
    DateTime t2(6, 4, 2003, 13, 5, 7);
    if (t1 > t2)
    {
        cout << "Time 1 is greate that time 2" << endl;
    }
    else
    {
        cout << "Time 2 is greater that time 1" << endl;
    }

    cout << "Difference between dates: " << endl;
    calcDiff(t1.getYear(), t2.getYear(), "Year");
    calcDiff(t1.getMonth(), t2.getMonth(), "Month");
    calcDiff(t1.getDate(), t2.getDate(), "Day");
    return 0;
}