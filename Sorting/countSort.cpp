#include <bits/stdc++.h>
#include "./../Array opertaion/arrayOperation.cpp"

using namespace std;

int findMax(int arr[], int n)
{
    int maxNum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxNum)
        {
            maxNum = arr[i];
        }
    }
    return maxNum + 1;
}

void count_sort(int arr[], int n)
{
    int maxNum = findMax(arr, n);
    int countArr[maxNum] = {0};
    int newArr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        countArr[arr[i]] = countArr[arr[i]] + 1;
    }

    for (int i = 1; i < maxNum; i++)
    {
        countArr[i] = countArr[i - 1] + countArr[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        countArr[arr[i]] = countArr[arr[i]] - 1;
        newArr[countArr[arr[i]]] = arr[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        arr[i] = newArr[i];
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

    count_sort(arr, n);

    cout << "array after sorting : " << endl;
    printArr(arr, n);
}