// Bubble sort Algorithm for sorting it is an example of stable sort algorithm

#include <iostream>
using namespace std;

// We can optimize the code for sorted array or array which is near sorted
// Bubble sort algorithm never changes order of equal elements therefore it is more likely to be stable
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break; 
        }
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

// void bubbleSort(int arr[], int n)
// { // In bubble sort we just pick the largest elementand take it to the last position
// // Once we have n-1 elements of the array sorted that means we have the array sorted
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }
int main()
{
    int arr[] = {10, 8, 20, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
   bubbleSort(arr, n);
    return 0;
}