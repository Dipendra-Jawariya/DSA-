// Remove Duplicate from a sorted array

// this approach requires O(n) time complexity and O(n) space and is it is a naive way for this problem
// #include <iostream>
// using namespace std;
// int remDups(int arr[], int n)
// {
//     int temp[n];      //Creating an array of n size
//     temp[0] = arr[0]; //Assigning the 0th elem of arr to temp array
//     int res = 1;
//     for (int i = 1; i < n; i++)
//     {
//         if (temp[res - 1] != arr[i])
//         {
//             temp[res] = arr[i];
//             res++;
//         }
//     }
//     for (int i = 0; i < res; i++)
//     {
//         arr[i] = temp[i]; // Coping temp's elem in the original array
//     }
//     for (int i = 0; i < res; i++)
//     {
//         cout << arr[i];
//         cout << " ";
//     }

//     return res;
// }
// int main()
// {
//     int arr[] = {1,
//                  3,
//                  3,
//                  3,
//                  3,
//                  5,
//                  5,
//                  5,
//                  6,
//                  6,
//                  6,
//                  8,
//                  8,
//                  9,
//                  9};
//     int size = sizeof(arr) / sizeof(int);
//     cout<<"Array before removing the duplicates";
//     for (int  i = 0; i < size; i++)
//     {
//         cout<<arr[i];
//         cout<<" ";
//     }

//     cout << endl
//          << "The size of the array before removing the dupluicates is :" << size << endl;
//     size = remDups(arr, size);
//     cout << endl
//          << "The size of the array after removing the dupluicates is :" << size << endl;

//     return 0;
// }

// Efficient ALGO: O(n) Time compexity
// O(1) Space complexity
// This solution requires same time complexity but it need less space complexity
#include <iostream>
using namespace std;

int remDups(int arr[], int n)
{
    int res = 1;
    for (int  i = 0; i < n; i++)
    {
        if (arr[res-1]!=arr[i])
        {
            arr[res]=arr[i];
            res++;
        }
        
    }
    return res;
}
int main()
{
    int arr[] = {10, 20, 20, 30, 30, 30};
    int size = sizeof(arr) / sizeof(int);
    cout << "Size of array before removing the duplicates from the array " << size;
    remDups(arr, size);
    return 0;
}