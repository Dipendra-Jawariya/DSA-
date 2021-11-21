#include <iostream>

using namespace std;

int closest(int arr[], int n, int x)
{
    int res;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x && arr[i] < arr[i + 1])
        {
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    int x = 2;
    cout <<"The term which is larger than "<<x<<" and is closest to it is: " <<closest(arr, size, x);
    return 0;
}