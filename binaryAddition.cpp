#include <iostream>

using namespace std;

int BinaryAddition(int a, int b)
{
    int ans = 0, carry = 0, multiPow = 1;

    while (a > 0 && b > 0)
    {
        if (a % 2 == 1 && b % 2 == 1)
        {
            if (carry == 1)
            {
                ans += 1 * multiPow;
            }
            carry = 1;
        }
        else if (a % 2 == 1 || b % 2 == 1)
        {
            if (carry == 0)
            {
                ans += 1 * multiPow;
            }
        }
        else
        {
            if (carry == 1)
            {
                ans += 1 * multiPow;
                carry = 0;
            }
        }
        multiPow *= 10;
        a /= 10;
        b /= 10;
    }

    while (a > 0 || b > 0)
    {
        if (carry == 0)
        {
            ans += 1 * multiPow;
        }
        multiPow *= 10;
        a /= 10;
        b /= 10;
    }

    if (carry == 1)
    {
        ans += multiPow;
    }

    return ans;
}

int main()
{
    int num1, num2;
    cout << "enter two binary number : ";
    cin >> num1 >> num2;

    cout << BinaryAddition(num1, num2) << endl;
}
