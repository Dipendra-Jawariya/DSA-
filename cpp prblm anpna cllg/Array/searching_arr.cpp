// // Thsi is linear search
// #include <iostream>
// using namespace std;
// int linearSearch(int arr[], int n,int key)
// {

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == key)
//         {
//             return i;
//         }

//     }
//     return -1;
// }
// int main()
// {
//     // int n;
//     // cin >> n;
//     int arr[] ={4,5,6,7,8,9,10};
//     int n = sizeof(arr)/sizeof(int);
//     int key;
//     cout << "Enter the key:";
//     cin >> key;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     cin >> arr[i];
//     // }
//     cout<<linearSearch(arr,n,key);
// }

// Binary search= Binary search works only on sorted array it is a method were we find the lowest term and the highest term
#include <iostream>
using namespace std;
int BinarySearch(int arr[], int n, int key)
{
    int low = 0;
    int mid, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    } 
    return -1;
}
int main()
{
    int arr[] = {3, 5, 8, 23, 25, 78, 99};
    int size = sizeof(arr) / sizeof(int);
    int key;
    cout << "Enter the key which we have to find in the array:" << endl;
    cin >> key;
    cout << BinarySearch(arr, size, key);
    return 0;
}