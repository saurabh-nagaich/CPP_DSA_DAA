// during insertion sort you
//insert an element from unsorted array to its correct position in sorted array
#include <iostream>

using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int size;
    cout << "enter the size of an array : ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << endl;
        cout << "enter the element " << i << " : ";
        cin >> arr[i];
    }

    insertionSort(arr, size);
    cout << endl
         << "your Sorted arr is : ";
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
    return 0;
}
