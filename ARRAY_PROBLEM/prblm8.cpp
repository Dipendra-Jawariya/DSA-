// Find Immmediate smaller than X

#include <iostream>

using namespace std;

int closest(int arr[], int n, int x)
{
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[res] && arr[i] < x)
        {
            res = i;
        }
    }
    return arr[res];
}
int main()
{
    int arr[] = {4, 67, 13, 12, 15,72};
    int size = sizeof(arr) / sizeof(int);
    int x = 80;
    cout<<closest(arr, size, x);
    // cout<<arr[size];
    return 0;
}