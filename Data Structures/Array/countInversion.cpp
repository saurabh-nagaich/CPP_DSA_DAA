// Count Inversion in a array using
// Invertion are  a[i]>a[j] && i<j

#include "bits/stdc++.h"
#include "./../../Array opertaion/arrayOperation.cpp"

long long merge(int arr[], int l, int mid, int r)
{
    long long inv = 0;
    int n1 = r - l + 1;
    int n2 = r - mid;
    int Left[n1];
    int Right[n2];

    for (int i = 0; i < n1; i++)
    {
        Left[i] = arr[i + l];
    }

    for (int i = 0; i < n2; i++)
    {
        Right[i] = arr[i + mid + 1];
    }

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2)
    {
        if (Left[i] <= Right[j])
        {
            arr[k] = Left[i];
            i++;
        }
        else
        {
            arr[k] = Right[j];
            // a[i]>a[j];
            inv += (n1 - i);
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = Left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = Right[j];
        j++;
        k++;
    }

    return inv;
}

long long merge_Sort(int arr[], int l, int r)
{
    long long inv = 0;
    if (l < r)
    {
        int mid = (l + r) / 2;
        inv += merge_Sort(arr, l, mid);
        inv += merge_Sort(arr, mid + 1, r);
        inv += merge(arr, l, mid, r);
    }

    return inv;
}

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;
    int arr[n] = {0};

    arrTakeInput(arr, n);
    printArr(arr, n);

    cout << "Total number of invertion : " << merge_Sort(arr, 0, n - 1);
}