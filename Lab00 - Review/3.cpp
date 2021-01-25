#include <iostream>

using namespace std;

void displayArr(string arr[], string arr1[], int len)
{
    cout << "Usernames: ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Passwords: ";
    for (int i = 0; i < len; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
}
int main()
{
    int size_arr = 0;
    cout << "Enter the number of users: ";
    cin >> size_arr;

    string usernames[size_arr];
    string passwords[size_arr];

    for (int i = 0; i < size_arr; i++)
    {
        cout << "Enter username " << i + 1 << ": ";
        cin >> usernames[i];
        cout << "Enter password " << i + 1 << ": ";
        cin >> passwords[i];
    }
    cout << "User Accounts created successfully.\n";
    cout << "You may now login by entering username and password.\n";

    string u_name, u_pass;
    cout << "Enter your username: ";
    cin >> u_name;
    cout << "Enter your password: ";
    cin >> u_pass;

    int user_choice;
    int index;
    bool is_found = false;

    for (int i = 0; i < size_arr; i++)
    {
        if (usernames[i] == u_name && passwords[i] == u_pass)
        {
            index = i;
            is_found = true;

            // while (user_choice < 1 || user_choice > 2)
            // {
            //     cout << "Invalid entries.\n";
            //     cout << "Enter 1 to delete this user.\n";
            //     cout << "Enter 2 to log out.\n";
            //     cin >> user_choice;
            // }
            break;
        }
    }

    if (is_found)
    {
        cout << "Logged in successful\n\n";
        cout << "Enter 1 to delete this user.\n";
        cout << "Enter 2 to log out.\n";
        cin >> user_choice;

        if (user_choice == 1)
        {
            cout << "hello\n";
            size_arr--;
            for (int j = index; j < size_arr; j++)
            {
                usernames[j] = usernames[j + 1];
                passwords[j] = passwords[j + 1];
            }
        }
    }

    displayArr(usernames, passwords, size_arr);
    return 0;
}