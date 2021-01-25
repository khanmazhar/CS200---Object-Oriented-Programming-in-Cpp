#include <iostream>
using namespace std;

int *findMinMax(int *ptr, int size)
{

    int max = ptr[0];
    int min = ptr[0];

    for (int i = 1; i < size; i++)
    {

        if (ptr[i] > max)
        {
            max = ptr[i];
        }

        if (ptr[i] < min)
        {
            min = ptr[i];
        }
    }
    int *result = new int[2];

    result[0] = min;
    result[1] = max;
    return result;
}

int main()
{
    int nums, sum = 0, n = 0;

    cout << "\nEnter the total number of integers you want to add\n";
    cin >> nums;
    while (nums < 2)
    {
        cout << "\nTotal integers can not be less than two\nEnter Again\n";
        cin >> nums;
    }
    int numArray[nums];

    for (int i = 0; i < nums; i++)
    {
        cout << "\nEnter the integer number " << i + 1 << endl;
        cin >> n;
        numArray[i] = n;
    }

    int *res = findMinMax(numArray, nums);
    cout << "\nThe Minimum In The Array Is	" << res[0] << endl;
    cout << "\nThe Maximum In The Array Is	" << res[1] << endl;

    return 0;
}
