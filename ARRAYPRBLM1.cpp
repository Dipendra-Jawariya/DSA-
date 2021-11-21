                        // // // Efficient Approach // // //
                        // To find the largest element in the array
#include <iostream>
using namespace std;
int getLargest(int arr[], int n)
{
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>arr[res])
        {
            res=i;
        }
    }
    return res;
}
int main()
{
    int arr[] = {5, 8, 20, 10};
    int size = sizeof(arr) / sizeof(int);
    size=getLargest(arr, size);
    cout<<"The largest element is "<<arr[size]<<" ,Whose index is "<<size;
    return 0;
}