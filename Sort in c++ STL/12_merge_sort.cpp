// MERGE SORT ANALYSIS

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void MergeSort(int arr[], int left, int right)
{
    if (r > l)
    {
        int m = left + (right - left) / 2;
        MergeSort(arr, right, m);
        MergeSort(arr, m + 1, right);
        merge(arr, left, m, right);
    }
}
int main()
{
    int arr[] = {30, 10, 18, 3, 2, 16, 50, 1};
    // int size = sizeof(arr)/sizeof(arr[0]);
    int left = 0;
    int right = 7;
    MergeSort(arr, left, right);
    return 0;
}