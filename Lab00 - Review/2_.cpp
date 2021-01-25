#include <iostream>

using namespace std;

int *findMinMax(int *arr, int len)
{
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < len; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    int *result = new int[2];
    result[0] = min;
    result[1] = max;

    return result;
}

void takeInput(int *arr, int len)
{
    cout << "Enter " << len << " integers:\n";
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int num_of_int = 0;
    cout << "Enter the number of integers: ";
    cin >> num_of_int;
    while (num_of_int < 2)
    {
        cout << "Number of integers cannot be less than 2: ";
        cin >> num_of_int;
    }

    int numArr[num_of_int];

    takeInput(numArr, num_of_int);
    int *ptrArr = findMinMax(numArr, num_of_int);
    cout << "Minimum: " << ptrArr[0] << endl;
    cout << "Maximum: " << ptrArr[1] << endl;
    return 0;
}