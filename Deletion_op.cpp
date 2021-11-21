#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << " ";
    }
}
void Deletion(int arr[], int size, int pos)
{
    int index = pos-1;
    for (int i = index; i <= size - 1; i++)
    {
        arr[i] = arr[i + 1]; //a[2]=a[3]
                             //a[3]=a[4]
                             //a[5]=a[6]
    }
}
int main()
{
    int arr[] = {3, 5, 8, 10, 12, 18, 20};
    int size = sizeof(arr) / sizeof(int);
    cout<<size;
    int pos = 4;
    int index = 2;
    cout << "Array before deletion:" << endl;
    display(arr, size);
    cout << endl;
    Deletion(arr, size, pos);
    size -= 1;
    cout << "Array after deletion:" << endl;
    display(arr, size);

    return 0;
}