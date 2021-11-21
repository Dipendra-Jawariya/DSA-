// Array insert at index
#include <iostream>
using namespace std;
int InsertIND(int arr[], int n, int pos, int element)
{
    int index = pos - 1;
    for (int i = n - 1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << " ";
    }

    return 1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int sizeofArray = 6;
    int position = 4, element = 90;
    InsertIND(arr, sizeofArray, position, element);
    return 0;
}
