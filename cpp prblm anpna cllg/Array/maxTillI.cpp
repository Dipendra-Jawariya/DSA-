// given an array a[] ofsize n .For every i from 0 to n-1 output max(a[0],......,a[i])
#include <iostream>
using namespace std;
// int MaxI(int arr[], int size, int index)
// {
//     int res = 0;
//     for (int i = 1; i <= index; i++)
//     {
//         if (arr[res] < arr[i])
//         {
//             res = i;
//         }
//     }
//     return arr[res];
// }
int main()
{
    int n;
    cout << "Enter the size of the array:";
    cin >> n;
    int arr[n];
    cout << endl
         << "Enter the elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int index = 3;
    int mx;
    for (int i = 0; i <= index; i++)
    {
        mx = max(mx,arr[i]);
    }
    
    // cout << "The Maximum number till " << index << " is " << MaxI(arr, n, index);
    cout << "The Maximum number till " << index << " is " <<mx;
    return 0;
}