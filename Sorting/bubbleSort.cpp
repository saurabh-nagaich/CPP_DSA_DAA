#include <iostream>

using namespace std;

int *bubbleSort(int arr[], int size)
{

    /// during bubble sort you
    // Reapetedly swap two adjacent element if they are in wrong order

    for (int i = 1; i <= size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            // cout<<endl<<arr[j] << " , " <<arr[j+1];
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                // cout<<endl<<arr[j] << " , " <<arr[j+1];
            }
            // cout<<"next values are : " ;
        }
    }

    return arr;
}

int main()
{
    int size;
    cout << "enter the size of an array : ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter the element " << i << " : ";
        cin >> arr[i];
    }
    cout << "your unSorted/given arr is : ";
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
    int *newArr = bubbleSort(arr, size);

    cout << endl
         << "your Sorted arr is : ";
    for (int i = 0; i < size; i++)
    {
        cout << " " << newArr[i];
    }

    return 0;
}
