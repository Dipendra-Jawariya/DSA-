#include <iostream>
using namespace std;

// Linear Search for searching in array
int searchOperation(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {11, 22, 3, 5, 7, 8, 6, 7, 8, 5343, 333};
    int size = sizeof(arr) / sizeof(int);
    cout << "Size of arr is " << size << endl;
    int x=333;
    int searchIndex = searchOperation(arr, size, x); //here we are storing the index at which the element is present 
    cout << "X is found out at " << searchIndex << " index" << endl;
    return 0;
}
