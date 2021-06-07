
#include <bits/stdc++.h>

using namespace std;

int binaryToDecimal(int num)
{
    // 1010
    cout << "Binary to DECIMAL convertion" << endl;
    int decimalNum = 0;
    int multiPow = 1;
    while (num > 0)
    {
        int last = num % 10;
        decimalNum += last * multiPow;
        num /= 10;
        multiPow *= 2;
    }
    cout << "your decimal number is " << decimalNum;

    return 0;
};

int octalToDecimal(int num)
{
    // 777
    cout << "OCTAL to DECIMAL convertion" << endl;
    int ans = 0;
    int multiPow = 1;
    while (num > 0)
    {
        int last = num % 10;
        ans += last * multiPow;
        num /= 10;
        multiPow *= 8;
    }
    cout << "Ocatal to DECIMAL number : " << ans;
}
int HexadecimalToDecimal(string num)
{
    //"55FF"
    int ans = 0;
    int multiPow = 1;
    int size = num.size();
    for (int i = size - 1; i >= 0; i--)
    {

        if (num[i] >= 'A' && num[i] <= 'F')
        {
            ans += (num[i] - 'A' + 10) * multiPow;
        }
        else if (num[i] >= '0' && num[i] <= '9')
        {
            ans += (num[i] - '0') * multiPow;
        }
        multiPow *= 16;
    }
    cout << "Hex to decimal " << ans;
}

int decimalToBinary(int num)
{
    int ans = 0;
    int place = 1;

    while (num > 0)
    {
        int digte = (num % 2) * place;
        ans += digte;
        num /= 2;
        place *= 10;
    }

    cout << "decimal to Binary : " << ans;
}
int decimalToOctal(int num)
{
    int ans = 0;
    int place = 1;

    while (num > 0)
    {
        int digte = (num % 8) * place;
        ans += digte;
        num /= 8;
        place *= 10;
    }

    cout << "decimal to octa : " << ans;
}
int decimalToHexadecimal(int num)
{
    string ans = "";
    int place = 1;

    while (num > 0)
    {
        int digte = (num % 16);
        if (digte >= 10 && digte <= 15)
        {
            ans += char(digte + 55);
        }
        else
        {
            ans += to_string(digte);
        }
        num /= 16;
        place *= 10;
    }

    cout << "decimal to hex : " << ans;
}

void allConvertion(int num) {}

int main()
{
    int convertion, num;
    string hexNum;
    cout << "1 for binaryToDecimal \n"
         << "2 for octalToDecimal \n"
         << "3 for HexadecimalToDecimal \n";
    cout << "4 for decimalToBinary \n"
         << "5 for decimalToOctal \n"
         << "6 for decimalToHexadecimal \n";
    cin >> convertion;
    if (convertion == 3)
    {
        cout << "enter the hex num : ";
        cin >> hexNum;
    }
    else
    {
        cout << "enter number :";
        cin >> num;
    }

    switch (convertion)
    {
    case 1:
        binaryToDecimal(num);
        break;
    case 2:
        octalToDecimal(num);
        break;
    case 3:
        HexadecimalToDecimal(hexNum);
        break;
    case 4:
        decimalToBinary(num);
        break;
    case 5:
        decimalToOctal(num);
        break;
    case 6:
        decimalToHexadecimal(num);
        break;
    case 7:
        allConvertion(num);
        break;
    }

    return 0;
}
