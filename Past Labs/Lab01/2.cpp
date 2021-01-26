#include <iostream>

using namespace std;

int main()
{
    int num = 10;
    int sum = 0;
    if (num < 0)
    {
        return false;
    }
    for (int i = 1; i <= num; i++)
    {

        sum = sum + i;
        if (sum == num)
        {
            cout << "The number is traingular\n";
        }
    }
    return 0;
}