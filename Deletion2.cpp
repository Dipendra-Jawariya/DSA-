#include <iostream>
using namespace std;
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++) //LOOP for displaying the arr
    {
        cout << arr[i];
        cout << " ";
    }
}

int Deletion(int arr[], int size, int elem)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == elem) //To find whether the element is in the array or not
        {
            break;
        }
    }
    if (i == size) //If the element is not found out in the array
    {
        return size;
    }
    for (int j = i; j < size - 1; j++)
    {
        arr[j] = arr[j + 1];
    }

    return (size - 1);
}
int main()
{
    int arr[] = {3, 8, 12, 5, 6};
    int size = 5;
    cout << endl
         << "Array before Deletion is:" << endl;
    
    display(arr, size);
    int element = 12;
    size = Deletion(arr, size, element);
    cout << endl
         << "Array after Deletion is:" << endl;
    ;
    display(arr, size);

    return 0;
}