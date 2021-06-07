#include <iostream>

using namespace std;

int *selectionSort(int arr[], int size)
{
    /// during selection sort you
    // Find the minimum element in unsorted array and
    // swap it with element at the begning

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}

int main()
{
    //taking the size of an array
    int size;
    cout << "enter the size of an array : ";
    cin >> size;
    int arr[size];

    //taking input for an array
    for (int i = 0; i < size; i++)
    {
        cout << endl;
        cout << "enter the element " << i + 1 << " : ";
        cin >> arr[i];
    }

    //new sorted arr
    int *newArr = selectionSort(arr, size);

    cout << endl
         << "your Sorted arr is : ";
    for (int i = 0; i < size; i++)
    {
        cout << " " << newArr[i];
    }

    return 0;
}
