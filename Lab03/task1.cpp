#include <iostream>
#include <iomanip>
using namespace std;

class Marks
{
private:
    double english, urdu, math, science, history;

public:
    //constructor
    Marks(double en, double ur, double ma, double sc, double hi)
    {
        english = en;
        urdu = ur;
        math = ma;
        science = sc;
        history = hi;
    }
    //Input member function
    void input()
    {
        cout << "Enter English marks: ";
        cin >> english;
        cout << "Enter Urdu marks: ";
        cin >> urdu;
        cout << "Enter Math marks: ";
        cin >> math;
        cout << "Enter Science marks: ";
        cin >> science;
        cout << "Enter History marks: ";
        cin >> history;
    }

    void calculatePercentage()
    {
        double percentage = ((english + urdu + math + science + history) / 500) * 100;
        cout << "The percentage is " << fixed << setprecision(2) << percentage << endl;
    }

    void display()
    {
        cout << "English: " << english << "\n";
        cout << "Urdu: " << urdu << "\n";
        cout << "Math: " << math << "\n";
        cout << "Science: " << science << "\n";
        cout << "History: " << history << "\n";
    }
};

int main()
{
    Marks m1(54, 67, 23, 55, 23);
    m1.display();

    cout << "\nEnter your marks\n";
    m1.input();
    m1.display();
    m1.calculatePercentage();
    return 0;
}