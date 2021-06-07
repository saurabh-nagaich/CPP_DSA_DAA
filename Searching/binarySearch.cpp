#include <iostream>

using namespace std;

int binarySearch(int arr[], int size)
{
    int key;
    cout << "enter the key to find : ";
    cin >> key;
    int s = 0;
    int e = size;
    while (s <= e)
    {
        int mid = (e + s) / 2;
        if (key < arr[mid])
        {
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key == arr[mid])
        {
            cout << "found at index : " << mid << " value : " << arr[mid] << endl;
            cout << "value found at index : ";
            return mid;
        }
    }

    cout << "not found";
    return -1;
}

int main()
{
    int size;
    cout << "enter the size of array : ";
    cin >> size;
    int arr[size];
    cout << "enter all element in increasing order (Sorted list) to perform binary " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << endl;
        cout << "enter the element " << i << " ";
        cin >> arr[i];
    }
    cout << binarySearch(arr, size) << endl;
}
