#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << " ";
    }
}

int InsertionOp(int arr[], int size, int element, int index, int x)
{
    if (size >= x)
    {
        return element;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return (element+1);
}

int main()
{
    int arr[] = {1, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int size = sizeof(arr) / sizeof(int);
    cout << "The size of the array is " << size << endl;
    int element = 3;
    int index = 2;
    int capacity = 100;
    cout << "Array before insertion:" << endl;
    display(arr, size);
    cout << endl;
    InsertionOp(arr, size, element, index, capacity);
    // size += 1; we can increase the size in here and can also return the incremented size from the finction itself
    cout << "Array after insertion:" << endl;
    display(arr, size);
    return 0;
}