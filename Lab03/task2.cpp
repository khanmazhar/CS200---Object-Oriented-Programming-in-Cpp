#include <iostream>

using namespace std;

class Student
{
private:
    string name, school, major, roll_number;
    double gpa;

public:
    //Constructors
    Student()
    {
        name = "";
        school = "";
        major = "";
        roll_number = "";
        gpa = 0.0;
    }

    //Setters
    void setName(string n)
    {

        name = n;
    }
    void setSchool(string s)
    {

        school = s;
    }
    void setMajor(string m)
    {

        major = m;
    }
    void setRollNum(string r)
    {

        roll_number = r;
    }
    void setGpa(double g)
    {

        gpa = g;
    }

    //getters
    string getName()
    {
        return name;
    }
    string getSchool()
    {
        return school;
    }
    string getMajor()
    {
        return major;
    }
    string getRollNum()
    {
        return roll_number;
    }
    double getGpa()
    {
        return gpa;
    }
};

void checkUser(Student *arr)
{
    string name;
    cout << "\nEnter the name of the student you want to search: ";
    cin >> name;

    bool is_found = false;

    for (int i = 0; i < 5; i++)
    {
        string existing_name = arr[i].getName();
        if (name == existing_name)
        {
            is_found = true;
            cout << "Name: " << existing_name << endl;
            cout << "School: " << arr[i].getSchool() << endl;
            cout << "Major: " << arr[i].getMajor() << endl;
            cout << "Roll Number: " << arr[i].getRollNum() << endl;
            cout << "GPA: " << arr[i].getGpa() << endl;
        }
        break;
    }
}

int main()
{
    Student arr[5];
    string name, school, major, roll_num;
    double gpa;
    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter information for student " << i + 1 << endl;
        cout << "Enter your name: ";
        cin >> name;
        arr[i].setName(name);
        cout << "Enter your school: ";
        cin >> school;
        arr[i].setSchool(school);
        cout << "Enter you major: ";
        cin >> major;
        arr[i].setMajor(major);
        cout << "Enter you roll number: ";
        cin >> roll_num;
        arr[i].setRollNum(roll_num);
        cout << "Enter your gpa: ";
        cin >> gpa;
        arr[i].setGpa(gpa);
    }

    checkUser(arr);
    return 0;
}