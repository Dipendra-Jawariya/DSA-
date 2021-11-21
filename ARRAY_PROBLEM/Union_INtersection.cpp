// Union and intersection of two sorted arrays

// UNION -Set of element which are in A,in B,or in both A and B.
// INTERSECTION-Set that contains all elements of A that also belong to B

// ALGORITHM UNION(arr1[],arr2[])
// For union of two arrays,follow the following merge procedure
/*1. use two index variables i and j,intial value i=0 ,j=0
2.If arr1[i] is smaller than arr2[j] then print arr1[i] and increment i.
3.If arr1[i] is greater than arr2[j] then print arr2[j] and increment j.
4.If both are same then print any of them and incremenet both i and j.
5.Print remaining element of the larger array.  */


#include <iostream>
using namespace std;

void printUnion(int arr1[], int arr2[], int m, int n)
{
    int i = 0;
    int j = 0;
    while (i < m && j < n)   //Here we are running the while loop 
    {
        if (arr1[i] < arr2[j])  //here we are checkingthe element which is smaller and printing it and incrementing the index of that array's element

            cout << arr1[i++] << " ";

        else if (arr2[j] < arr1[i])  //The same work is done in here too
        {
            cout << arr2[j++]<<" ";
        }
        else
        {
            cout << arr1[i++]<<" "; // hre we are checking for the same element in the array and incrementing the size of both the arrays
            j++;
        }
    }
    //  Printing the remaining elements  of the larger array
    while (i < m)
    {
        cout << arr1[i++] << " "; //printing the elements of the arr1[] if it is larger
    }
    while (j < n) //printing element of the element of the second array if it is larger
    {
        cout << arr2[j++] << " ";
    }
}
int main()
{
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};
    int m = sizeof(arr1) / sizeof(int);
    int n = sizeof(arr2) / sizeof(int);
    // Function Calling
    printUnion(arr1, arr2, m, n);
    return 0;
}