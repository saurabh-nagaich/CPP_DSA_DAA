#include "bits/stdc++.h"
#include "./../Array opertaion/arrayOperation.cpp"

using namespace std;

void wave_sort(int arr[], int n)
{
    for (int i = 1; i < n; i += 2)
    {
        if (arr[i] > arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
        }
        if (arr[i] > arr[i + 1] && i <= n - 2)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void wavePatternPrint(int arr[], int n)
{
    cout << "////////////////////////////////////////" << endl
         << endl;
    cout << "/// ****** WAVE PATTERN PRINT ****** ///" << endl
         << endl;
    cout << "////////////////////////////////////////" << endl
         << endl;

    for (int i = 0; i < n; i += 2)
    {
        cout << arr[i] << "     ";
    }

    cout << endl
         << endl
         << " ";

    for (int i = 1; i < n; i += 2)
    {
        cout << "  " << arr[i] << "   ";
    }
}

int main()
{
    int arr[] = {1, 3, 4, 7, 5, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "array before sorting : " << endl;
    printArr(arr, n);

    wave_sort(arr, n);

    cout << "array after sorting : " << endl;
    printArr(arr, n);

    wavePatternPrint(arr, n);
}