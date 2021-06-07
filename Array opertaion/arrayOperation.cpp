#include "iostream"
using namespace std;

void arrTakeInput(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element of an array : ";
        cin >> arr[i];
    }
}

int arrCreation()
{
    int n;
    cout << "enter the size of an array : ";
    cin >> n;
    int arr[n];
    arrTakeInput(arr, n);
}

void printArr(int arr[], int n)
{
    cout << "Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}