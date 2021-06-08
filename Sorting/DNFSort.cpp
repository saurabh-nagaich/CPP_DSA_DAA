#include "bits/stdc++.h"
#include "./../Array opertaion/arrayOperation.cpp"

using namespace std;

void DNF_sort(int arr[], int n)
{
    int mid = 0, low = 0, high = n - 1;
    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 1:
            mid++;
            break;
        case 0:
            swap(arr[low], arr[mid]);
            low++;
            mid++;
            break;
        default:
            swap(arr[high], arr[mid]);
            high--;
            break;
            // default:
            //     cout << "different value than 0 ,1 ,2 " << endl
            //          << " at index : " << mid << endl
            //          << " value is : " << arr[mid];
            //     exit(0);
        }
    }
}

int main()
{
    int n;
    cout << "enter the length of an array : ";
    cin >> n;
    int arr[n];
    arrTakeInput(arr, n);

    cout << "array before sorting : " << endl;
    printArr(arr, n);

    DNF_sort(arr, n);

    cout << "array after sorting : " << endl;
    printArr(arr, n);
}