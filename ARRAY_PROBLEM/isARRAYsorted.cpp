// IS array is sorted or not
#include <iostream>
using namespace std;

int Issorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int size = 7;
    cout << Issorted(arr, size);
    return 0;
}