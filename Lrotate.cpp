// Left Rotate an array by one
#include <iostream>
using namespace std;
void Lrotate(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        cout << " ";
    }
    cout << endl;

    Lrotate(arr, size);
    return 0;
}