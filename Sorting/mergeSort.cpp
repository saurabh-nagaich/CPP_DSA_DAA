#include "iostream"
#include <array>

using namespace std;

int merge(int arr[], int l, int mid, int r)
{
    int leftSize = mid - l + 1;
    int rightSize = r - mid;

    int leftArr[leftSize];
    int rightArr[rightSize];

    for (int i = 0; i < leftSize; i++)
    {
        leftArr[i] = arr[l + i];
    }
    for (int i = 0; i < rightSize; i++)
    {
        rightArr[i] = arr[mid + i + 1];
    }

    int i = 0, j = 0, k = l;

    while (i < leftSize && j < rightSize)
    {
        if (leftArr[i] <= rightArr[j])
        {
            arr[k] = leftArr[i];
            i++;
        }
        else
        {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }
    while (i < leftSize)
    {
        arr[k] = leftArr[i];
        i++;
        k++;
    }
    while (j < rightSize)
    {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

int merge_sort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (r + l) / 2;
        merge_sort(arr, l, mid);
        merge_sort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}

int main()
{
    int arr[] = {9, 4, 3, 88, 2, 5, 6, 7, 1, 8};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    cout << " ------- UnSorted arr --------" << endl;
    for (int i = 0; i < arrSize; i++)
        cout << arr[i] << " ";
    cout << endl;

    merge_sort(arr, 0, arrSize - 1);

    cout << " ------- Sorted arr --------" << endl;
    for (int i = 0; i < arrSize; i++)
        cout << arr[i] << " ";
    cout << endl;
}