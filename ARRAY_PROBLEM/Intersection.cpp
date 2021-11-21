// INtersection of two elements
#include <iostream>
using namespace std;
void PrintIntersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            cout << arr1[i++]<<" ";
            j++;
        }
    }
}
int main()
{
    int arr1[] = {1, 3, 4, 5, 7,10,34};
    int arr2[] = {2, 3, 5, 6,10,34};
    int m = sizeof(arr1) / sizeof(int);
    int n = sizeof(arr2) / sizeof(int);
    PrintIntersection(arr1, arr2, m, n);
    return 0;
}