// Index of first occurrence
#include <iostream>
using namespace std;

// Iterative Implementation
int firstOccurrence(int arr[], int size, int x)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            if (mid == 0 || arr[mid - 1] != arr[mid])
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;

}

// Recursive Solution
// its time complexity is O(log n ) but it requires extra space for recursive calls
// int firstOccurrence(int arr[], int low, int high, int x)
// {
//     if (low > high)
//     {
//         return -1;
//     }
//     int mid = (low + high) / 2;
//     if (arr[mid] < x)
//     {
//         return firstOccurrence(arr, mid + 1, high, x);
//     }
//     else if (arr[mid] > x)
//     {
//         return firstOccurrence(arr, low, mid - 1, x);
//     }
//     else{
//         if (mid==0 || arr[mid-1]!=arr[mid])
//         {
//             return mid;
//         }
//         else{
//             return firstOccurrence(arr,low, mid-1,x);
//         }

//     }
//     return -1;
// }

// Naive solutions
// The time complexity of this solution is O(n) and it requires O(1) auxilary space
// int firstOccurrence(int arr[], int size, int x)
// { //we are simply traversing through the array and as soon as we find the element we just return its index and stop traversing
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == x)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
int main()
{
    int arr[] = {5, 10, 10, 15, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 15; // THe number whose first occurrence is to be recorded
    int low = 0;
    cout << firstOccurrence(arr,size , x);
    return 0;
}