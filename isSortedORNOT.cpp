// // // Naive Approach // // //
// Check if an array is sorted or not
#include <iostream>

using namespace std;
// bool isSorted(int arr[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[j]<arr[i])     //THe time complexity of this function is O(n^2) bcz of the 2 loops running,we have another efficient algo for the same problem
//             {
//                 return false;
//             }

//         }

//     }
//     return true;
// }

bool isSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++) //we will start the loop from the first element bcz we are going to check wheather the element is greater than the last element or not
    {
        if (arr[i] < arr[i - 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {8, 12, 15};
    int size = sizeof(arr) / sizeof(int);
    cout << isSorted(arr, size);
    return 0;
}