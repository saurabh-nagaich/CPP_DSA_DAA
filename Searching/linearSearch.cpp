#include <iostream>

using namespace std;

int linerSearch(int arr[], int size)
{
    int key;
    cout << "enter the key to find : ";
    cin >> key;
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return i;
        }
    }
}

int main()
{
    int size;
    cout << "enter the size of array : ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << endl;
        cout << "enter the element " << i;
        cin >> arr[i];
    }
    cout << "found at index : " << linerSearch(arr, size) << endl;
}
