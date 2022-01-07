// Count 1s in a sorted Binary Array
#include <bits/stdc++.h>
using namespace std;

int CountOnes(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;    //here we are using this approach bcz we know that the array is binary and it is sorted which means it has only 0 and 1 as its element so we are simply finding the first index of the 1 and substracting it with the length of the array
        if (arr[mid] == 0)
        {
            low = mid + 1;
        }
        else
        {
            if (mid == 0 || arr[mid - 1] == 0)
            {
                return (n - mid);
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return 0;
}

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
int lastOccurrence(int arr[], int size, int x)
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
            if (mid == size - 1 || arr[mid + 1] != arr[mid])
            {
                return mid;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    return -1;
}
int Count1s(int arr[], int size, int x)
{
    int f = firstOccurrence(arr, size, x);
    int l = lastOccurrence(arr, size, x);
    int count = 0;
    for (int i = f; i <= l; i++)
    {
        count = count + 1;
    }
    return count;
}
// int Count1s(int arr[], int size)
// {//time complexity
//     int count = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == 1)
//         {
//             count++;
//         }
//     }
//     return count;
// }
int main()
{
    int arr[] = {0, 0, 0, 1, 1, 1, 1};
    int size = sizeof(arr) / sizeof(int); 
    cout << CountOnes(arr, size);
    return 0;
}