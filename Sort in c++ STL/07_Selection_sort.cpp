// Selection sort is one of the basic algorithm it is a comparision based algorithm
// THEta(N^2) selection sort will always take this time complexity even we gave it sorted array
// Does less memory writes compared to quickSort, merge sort,Insertion sort, etc. But cycle sort is optimal in terms of memort writes.
// Basic idea for heapsort
// noy stable
// in-plce Algorithm.

// Basic idea for Selection Sort is we find out the minimum element and place it to the first index and so on

#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n-1 ; i++)
    {
        int min_ind = i;
        for (int j = i + 1; j < n; j++)
        { 
            if (arr[j] < arr[min_ind])
            {
                min_ind = j;
            }
        }
        swap(arr[min_ind],arr[i]);
    }
}  

// void SelectionSort(int arr[], int n)
// {
//     int temp[n]; // Creating the array of same size so that we can put the sorted array in it and after that we can copy it
//     for (int i = 0; i < n; i++)
//     {
//         int min_ind = 0; // Creating a min_index for every loop iteration
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[j] < arr[min_ind])
//             {
//                 min_ind = j;
//             }
//         }
//         temp[i] = arr[min_ind]; // we are putting the element in sorted order in the array
//         arr[min_ind] = std::numeric_limits<int>::max();
//          // Here we are marking that particular index with infinite value
//     }
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = temp[i];
//     }
// }
int main()
{
    int arr[] = {10, 5, 8, 20, 2, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << endl
         << "Array elements before selection sorting:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    SelectionSort(arr, size);
    cout << endl
         << "Array elements after selection sorting:" << endl;
    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }
    return 0;
}