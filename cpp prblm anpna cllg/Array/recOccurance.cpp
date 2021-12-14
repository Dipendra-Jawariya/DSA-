// given an array arr[] of size N.The task is to find the first repeating element in the array of integer i.e.,an element that occurs ,more than once and whose index of first occurrence is smallest.
// input: 1 5 3 4 3 5 6
// O/P:2
// 5 is appearing twice and its first appearance is at index 2 which is less than 3 whose first occurring index is 3
//

// For an effective solution we
// 1)copy the given array to an auxiliary array temp[].
// 2)Sort the te,p array using a o(nlogn )time sorting algorithm.
// 3)Scan the input array from left to right. For every element,count in occurrences in temp[] u sing binary search.As soon as we find an element that occurs more than once,we return the element.THis can be done iun O(nlogn) time

#include <bits/stdc++.h>
using namespace std;

// This function prints the first repeating element in arr[]
void printFirstRepeating(int arr[], int n)
{
    // Initialize index of the first repeating element in arr[]
    int min = -1;

    // Create an empty hashset
    set<int> myset;

    // Traverse the input array from right to left
    for (int i = n; i >= 0; i--)
    {
        // If element is already in the hash set,update min
        if (myset.find(arr[i]) != myset.end())
        {
            min = i;
        }
        else{
            // Else add element to hash set
            myset.insert(arr[i]);
        }
    }
    // Print the result
    if (min!=-1)
    {
        cout<<"The first repeating element is "<<arr[min];
    }
    else{
        cout<<"There is no repeating elements";
    }
    
}

int main()
{
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printFirstRepeating(arr, n);
    return 0;
}