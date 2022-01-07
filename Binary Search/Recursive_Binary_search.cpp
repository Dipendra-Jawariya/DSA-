#include <iostream>
using namespace std;
int bSearch(int arr[], int low, int high, int x)
{
    if (low > high)
    {
        // Time complexity wise both the iterative and recursive solution are same 
        // Auxilary space- iterative solution requires O(1)auxilary space bcz we ae using some constant number of variables but in recursive binary search we need some extra space for recursive function calls
        return -1;
    }
    int mid = (low + high) / 2;
    if (arr[mid] == x)
    {
        return mid; 
    }
    else if (arr[mid] > x)
    {
    return bSearch(arr,low, mid-1,x);
    }

    else
    {
     return bSearch(arr,mid+1,high,x);

    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(arr) / sizeof(int);
    int low = 0;
    int high = size - 1;
    int x = 50;
    cout << bSearch(arr, low, high, x);
    return 0;
} 