#include <iostream>

using namespace std;

class Fraction
{
private:
    double numerator, denominator;

public:
    Fraction(int n, int d)
    {
        denominator = d;
        numerator = n;
    }

    //getters
    double getNumerator()
    {
        return numerator;
    }
    double getDenominator()
    {
        return denominator;
    }
};

void add(double x, double y)
{
    cout << "The addition is " << x + y << endl;
}

void subtract(double x, double y)
{
    cout << "The addition is " << x - y << endl;
}

void divide(double x, double y)
{
    if (y != 0)
    {
        cout << "The addition is " << x / y << endl;
    }
    else
    {
        cout << "Division not possible." << endl;
    }
}
void multiply(double x, double y)
{
    cout << "The multiplication is " << x * y << endl;
}
int main()
{
    Fraction num1(12, 24);
    Fraction num2(24, 36);

    double frac1 = num1.getNumerator() / num1.getDenominator();
    double frac2 = num2.getNumerator() / num2.getDenominator();

    //User can call the desired func
    multiply(frac1, frac2);

    return 0;
}