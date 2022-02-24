// Partition a given array
#include <iostream>
using namespace std;
// void partition(int arr[], int p, int l, int h)
// {
//     int temp[h];
//     int index = 0;
//     temp[index] = arr[p];
//     for (int i = l; i < h; i++)
//     {
//         if (arr[i] < arr[p])
//         {
//             temp[index + 1] = temp[index];
//             temp[index] = arr[i];
//             index++;
//         }
//         // else if (arr[i] > temp[index])
//         // {
//         //     temp[index + 1] = arr[i];
//         // }
//     }
//     for (int i = l; i < h; i++)
//     {
//         if (arr[i] > arr[p])
//         {
//             temp[index + 1] = arr[i];
//             index++;
//         }
//     }

//     for (int i = 0; i < h; i++)
//     {
//         cout << temp[i] << " ";
//     }
// }

// Solution from gfg
void partition(int arr[], int p, int low, int high)
{
    int temp[high - low + 1];
    int index = 0;
    for (int i = low; i < high; i++)
    {
        if (arr[i] <= arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    }
    for (int i = low; i < high; i++)
    {
        if (arr[i] > arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    }
        for (int i = 0; i < high; i++)
    {
        cout<<temp[i]<<" ";
    } 
    cout<<endl;

    // Copying the element in the original array
    for (int i = low; i < high; i++)
    {
        arr[i]=temp[i-low];
    }
    for (int i = 0; i < high; i++)
    {
        cout<<arr[i]<<" ";
    } 
}
int main()
{
    int arr[] = {3, 8, 6, 12, 10, 7};
    int p = 5;
    int low = 0;
    int high = 6;
    partition(arr, p, low, high);
    return 0;
}
