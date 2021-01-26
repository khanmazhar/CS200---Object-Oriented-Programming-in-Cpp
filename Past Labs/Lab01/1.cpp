#include <iostream>

using namespace std;

int main()
{
    int num_count = 0;
    bool is_five_entered = false;
    int five_amount = 0;
    int sum_of_nums = 0;

    int current_num;
    while (num_count < 10 || is_five_entered == false || sum_of_nums < 100)
    {
        num_count++;

        cout << "Enter a number: ";
        cin >> current_num;
        if (current_num == 5)
        {
            five_amount++;
            is_five_entered = true;
        }

        sum_of_nums += current_num;
    }

    cout << "Total number of inputs: " << num_count << "\n";
    cout << "Sum of numbers: " << sum_of_nums << "\n";
    cout << "No.of times 5 was entered: " << five_amount << "\n";
    return 0;
}