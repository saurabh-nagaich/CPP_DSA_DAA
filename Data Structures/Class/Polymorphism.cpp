#include "iostream"

using namespace std;

// ////////////////////
// compile time
// ////////////////////

// function overloading
class FunOverloading
{
public:
    void fun()
    {
        cout << "function without argument : " << endl;
    }
    void fun(int x)
    {
        cout << "function with int type argument : " << endl;
    }
    void fun(float x)
    {
        cout << "function with float type argument : " << endl;
    }
};

// oprater overloading
class Numbers
{
private:
    int real, imag;

public:
    Numbers(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    Numbers operator+(Numbers const &obj)
    {
        Numbers res;
        res.imag = imag + obj.imag;
        res.real = real + obj.real;
        return res;
    }
    void display()
    {
        cout << "real : " << real << endl;
        cout << "imag : " << imag << endl;
    }
};

// ////////////////////
// run time
// ////////////////////

int main()
{
    Numbers a1(10, 4), a2(20, 6);
    Numbers a3 = a1 + a2;
    a3.display();
}