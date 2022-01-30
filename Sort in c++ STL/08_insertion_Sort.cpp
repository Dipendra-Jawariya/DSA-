// O(n^2) worst case.
// In-place and stable (an algorithm is defined as inplace if it does not require any array or auxilary space in terms of input size)
// used in practice for small arrays(Timesort & Introsort)
// O(N) in best case

#include <iostream>
using namespace std;
void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >=0 && arr[j] > key)
        { 
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {20, 5, 40, 60, 10, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    InsertionSort(arr, size);
    return 0;
}