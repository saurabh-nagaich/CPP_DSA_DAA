#include "iostream"
using namespace std;

// base class
class Base
{
public:
    string name = "Base";
    void funcA()
    {
        cout << "funct A" << endl;
    }
};

//Deraive classes

// single inheritance
//         Base
//           |
//           |
//        Derive
class Derive : public Base
{
public:
    string name = "Derive";
    void funcB()
    {
        cout << "Single inheritance " << endl;
    }
};

// multiple inheritance
// Base      Derive
//   \         /
//    \       /
//      Multi
class Multi : public Base, public Derive
{
public:
    string name = "multiple inhertitance ";
    void funcC()
    {
        cout << "Multiple inheritance";
    }
};

// multi-leve inheritance
//         Base
//           |
//           |
//        Derive
//           |
//           |
//       Multi-level
class Multi_level : public Derive
{
public:
    string name = "Multi-level inheritance";
    void funcD()
    {
        cout << "Multi level inheritance " << endl;
    }
};

// Hybrid inheitance
// combination of two or more type inheritance
//

// hieararchical inheritance
// tree like stucter
//

int main()
{
    Base base;
    Derive derive;
    derive.funcA();
    cout << derive.name;
}