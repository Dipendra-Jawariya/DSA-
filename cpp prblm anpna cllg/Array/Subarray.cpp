// To print all the subarray of an array
#include <iostream>
using namespace std;

// Print all subarrays in arr[0....n-2]

void subArray(int arr[], int n)
{
    // pick starting point

    for (int i = 0; i < n; i++)
    {
        // pick ending point

        for (int j = i; j < n; j++)
        {
            // print subarray between cureent starting and ending point
            for (int k = i; k <= j; k++)
            {

                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}
int main()
{
    // int arr[] = {1, 2, 3, 4};
    int arr[] = {1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "All Non-empty Subarrays\n";
    subArray(arr, n);
    return 0;
}