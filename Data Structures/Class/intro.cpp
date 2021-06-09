#include "bits/stdc++.h"

using namespace std;

class student
{
    //Private data members of class
    //They cannot be accessed directly from the class
    string name;
    int n;
    int age;

public:
    //Public data members of class
    //They can be accessed directly from the class
    bool gender;
    int arr[];

    // default Constructor
    student()
    {
        cout << "Default Constructor " << endl;
    }

    // Parameterised constructor
    student(string na, int ag, bool ge, int n2)
    {
        cout << "Parameterised constructor" << endl;
        name = na;
        age = ag;
        gender = ge;
        n = n2;
        arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = 10;
        }
    }

    // Copy Constructor
    student(student &a)
    {
        cout << "Copy constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
        n = a.n;
        arr[n];
    }

    // Destructor
    ~student()
    {
        cout << "Destructor Called " << endl;
    }

    // Member functions
    void printInfo()
    {

        cout << "Name : ";
        cout << name << endl;
        cout << "Age : ";
        cout << age << endl;
        cout << "gender : ";
        cout << gender << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr[i] << " .." << endl;
        // }
    }

    // Operator Overloading
    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender && n == a.n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    student b("saurabh", 32, 1, 10);

    cout << "///////////////////////////////" << endl;
    cout << "///// Data member details /////" << endl;
    cout << "///////////////////////////////" << endl;

    b.printInfo();

    cout << "///////////////////////////////" << endl;
    cout << "///// ------------------- /////" << endl;
    cout << "///////////////////////////////" << endl;

    // it call default constructor
    student c;

    // it will call copy constructor
    student a = b;

    // Operator Overloading
    if (a == b)
    {
        cout << "Same " << endl;
    }
    else
    {
        cout << "Not Same " << endl;
    }
}