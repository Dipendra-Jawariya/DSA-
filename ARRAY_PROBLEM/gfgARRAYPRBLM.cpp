// GFG ARRAY |DSA | PROGRAMMING
// Q.04  Find the minimum distance between two  numbers in an unsorted array

// METHOD 1(Simple)
#include <iostream>
#include <limits.h> //for INT_MAX
using namespace std;

int minDist(int arr[], int n, int x, int y)
{
    int i, j;
    int min_dist = INT_MAX;
    for (i = 0; i < n; i++)                    // Time Complexity of the program is O(n^2) bcz of the 2nested loops 
    {
        for (j = i + 1; j < n; j++)
        {
            if (x == arr[i] && y == arr[j] || y == arr[i] && x == arr[j] && min_dist > abs(i - j))
            {
                min_dist = abs(i - j);
            }
        }
    }
    return min_dist;
}

// METHOD 2(TRICKY)
int minDist(int arr[], int n, int x, int y)
{
    int i = 0;
    int min_dist = INT_MAX;
    int prev;

    // Find the first occurence of ant of the two numbers (x or y)
    // and store the index of this occurence in pre
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x && arr[i] == y)
        {
            prev = i;
            break;
        }
    }

    // Traverse after the first occurence
    for (; i < n; i++)
    {
        if (arr[i] == x || arr[i] == y)
        {
            // if the current element matches with any of the two then 
            // Check if curent element and prev element are different
            // Also check if this value is smaller than minimm distance so far
            if (arr[prev] != arr[i] && (i - prev) < min_dist)
            {
                min_dist = i - prev;
                prev = i;
            }
            else
            prev=i;
        }
    }
    return min_dist; 
}

//  Driver Program
int main()
{
    int arr[] = {3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3};
    int n = sizeof(arr) / sizeof(int);
    int x = 3;
    int y = 6;
    cout << "The minimum distace between " << x << " and " << y << " is " << minDist(arr, n, x, y);
    return 0;
}

