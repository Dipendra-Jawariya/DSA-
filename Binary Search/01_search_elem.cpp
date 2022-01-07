// search an Element in an array
// Given an integer array and another integer element. The task is to find if the given elemnt is present in the array or not.
#include <iostream>
using namespace std;
int Search(int arr[], int size, int x)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 5;
    cout<<Search(arr, size, x);
    return 0;
}