// Binary Search works only when the array is sorted 
#include <iostream>
using namespace std;
// This is linear search  we are comparing x one by one to every element of the array and as soon as we find the array matching with x we return the index
// TIME COMPLEXTITY - THETA(n) in the worst case
// int Bsearch(int arr[], int size, int x)
// {
//     for (int i = 0; i <= size; i++)
//     {
//         if (arr[i]==x)
//         {
//             return i;
//         }

//     }
//     return -1;
// }

int Bsearch(int arr[], int size, int x)
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
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 50;
    cout << Bsearch(arr, size, x);
    return 0;
}