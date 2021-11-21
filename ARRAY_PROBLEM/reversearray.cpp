// Reverse The array
#include <iostream>
using namespace std;
int reverse(int arr[], int n)
{
    int low = 0, high = n-1;
    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
int main()
{
    int arr[] = {1, 1, 2, 2, 3};
    int size = 5;
    reverse(arr, size);
    return 0;
}