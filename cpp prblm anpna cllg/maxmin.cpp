// Maximum and Minimum In Array
#include <iostream>
using namespace std;
int maximum(int arr[], int n)
{
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[res])
        {
            res = i;
        }
    }
    return arr[res];
}
int minimum(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[res])
        {
            res = i;
        }
    }
    return arr[res];
}
int main()
{
    int arr[] = {8};
    int size = 1;
    cout<<"The maximum in the array is: "<<maximum(arr, size)<<endl;;
    cout<<"The minimum in the array is: "<<minimum(arr,size);
    return 0;
}