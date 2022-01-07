// To Return the index of the last occurrence
#include <iostream>
using namespace std;

// Iterative Binary Search
int lastOcc(int arr[], int n, int x)
{//Its time complexity is O(log n ) and auxilary space is O(1)
    int low=0;
    int high=n-1;
    while (low<=high)
    {
        int mid =(low+high)/2;
        if (arr[mid]>x)
        {
            high=mid-1;
        }
        else if (arr[mid]<x)
        {
            low =mid+1;
        }
        else{
            if (mid==n-1 || arr[mid+1]!=arr[mid])
            {
                return mid;
            }
            else{
                low =mid+1;
            }
            
        }
        
    }
    
}

// Recursive Binary Search
// int lastOcc(int arr[], int low, int high, int x, int n)
// { //It takes O(log n) time and O(log n) auxilary space bcz it is a recursive function
//     if (low > high)
//     {
//         return -1;
//     }
//     int mid = (low + high) / 2;
//     if (arr[mid] < x)
//     {
//         return lastOcc(arr, mid + 1, high, x, n);
//     }
//     else if (arr[mid] > x)
//     {
//         return lastOcc(arr, low, mid - 1, x, n);
//     }
//     else
//     {
//         if (mid == n - 1 || arr[mid+1] != arr[mid])
//         {
//             return mid;
//         }
//         else
//         {
//             return lastOcc(arr, mid + 1, high,x, n);
//         }
//     }
// }

// Naive Solution
// int lastOcc(int arr[], int size, int x)
// {
// // This solution is going to take O(n) time and O(1) auxilary space
//     for (int i = size - 1; i >= 0; i--)
//     {
//         if (x < arr[i])
//         {
//             return -1;
//         }
//         if (arr[i] == x)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
int main()
{
    int arr[] = {10, 15, 20, 20, 40, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 20;
    int low = 0;
    int high = size - 1;
    // cout << lastOcc(arr, low, high, x, size);Iterative sparameters
    cout << lastOcc(arr, size, x);
    return 0;
}