#include <iostream>
using namespace std;
int Deletion(int arr[], int n, int index)
{
    for (int i = index; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = 0;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << " ";
    }
}
int main()
{
    int arr[] = {3, 4, 10, 12, 13, 15};
    int size = sizeof(arr) / sizeof(int);
    int index = 0;
    cout << "ARray Before deletion of the element is : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        cout << " ";
    }
    cout << endl;
    Deletion(arr, size, index);
    return 0;
}