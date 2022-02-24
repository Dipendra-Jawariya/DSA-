// Merge Function of Merge Sort
#include <iostream>
using namespace std;
// void MergeFunc(int arr[], int low, int high, int mid)
// {
//     int i = low, j = mid + 1;
//     while (i <= mid && j <= high)
//     {
//         if (arr[i] < arr[j])
//         {
//             cout << arr[i] << " ";
//             i++;
//         }
//         else
//         {
//             cout << arr[j] << " ";
//             j++;
//         }
//     }
//     while (i<=mid)
//     {
//         cout<<arr[i]<<" ";
//         i++;
//     }
//     while (j<=high)
//     {
//         cout<<arr[j]<<" ";
//         j++;
//     }

// }

// MerGe sort function
// 
void MergeFunc(int arr[], int low, int high, int mid)
{
    int n1 = mid - low + 1;
    int n2 = high - mid; // here we are finding the length of the
    int left[n1], right[n2];

    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[low + i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = arr[n1 + i];
    }

    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = right[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
    for (int i = 0; i < k; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int arr[] = {10, 15, 20, 40, 8, 11, 55};
    int low = 0, high = 6, mid = 3;
    MergeFunc(arr, low, high, mid);
    return 0;
}