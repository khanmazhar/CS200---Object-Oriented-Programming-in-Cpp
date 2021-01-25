#include <iostream>

using namespace std;

void sum(int num_of_int, int &total_sum)
{
    int individual_value = 0;
    for (int i = 1; i <= num_of_int; i++)
    {
        cout << "Enter number " << i << ": ";
        cin >> individual_value;
        total_sum += individual_value;
    }
}

int main()
{
    int num_of_int;
    cout << "How many integers would you like to add: ";
    cin >> num_of_int;

    int total_sum = 0;
    sum(num_of_int, total_sum);

    cout << "The sum of " << num_of_int << " is " << total_sum << endl;

    return 0;
}
