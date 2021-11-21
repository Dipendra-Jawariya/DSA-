// Array Update At Index
#include <iostream>
using namespace std;
int UpdateInd(int arr[], int n, int index, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (i == index)
        {
            arr[i] = element;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << " ";
    }
}
int main()
{
    int arr[] = {2, 4, 4, 5, 67, 78, 9, 6,4};
    int size = sizeof(arr) / sizeof(int);
    int index = 4, element = 88;
    UpdateInd(arr, size, index, element);
    return 0;
}