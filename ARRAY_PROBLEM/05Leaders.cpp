// Programm to print all the LEADERS In an array
// #include <iostream>
// using namespace std;
// void printLeader(int arr[], int size)
// {
// //    This is simple approach but not efficient bcz its time complexity is O(n*n) by the grace of the two loops(nested loops) we are using
//     int i, j;
//     for (i = 0; i < size; i++)
//     {
//         for (j = i + 1; j < size; j++)
//         {
//             if (arr[i] <= arr[j])
//             {
//                 break;
//             }
//         }
//         if (j == size)
//         {
//             cout << arr[i] << " ";//the loop didn't break
//         }
//     }
// }
// int main()
// {
//     int arr[] = {16, 17, 4, 3, 5,2,4,1,0};//the rightmost element is always going to be a leader
//     int size = sizeof(arr) / sizeof(arr[0]);
//     printLeader(arr, size);
//     return 0;
// }

// METHOD 2(scan from right)
// scan all the elements from right to left in array and keep track of maximum till now.when maximum changes it's value,print it.

#include <iostream>
using namespace std;
void printLeader(int arr[], int size)
{
    int max_from_right = arr[size - 1];

    //  RightMost element is alaways leader
    cout << max_from_right << " ";
    for (int i = size - 2; i >= 0; i--)
    {
        if (max_from_right < arr[i])
        {
            max_from_right=arr[i];
            cout<<max_from_right<<" "; 
        }
    }
}  //the tim complexity of this algorith is O(n)
int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2, 4, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    printLeader(arr, size);
    return 0;
}