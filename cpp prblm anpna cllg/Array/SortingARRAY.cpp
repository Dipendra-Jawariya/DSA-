#include <iostream>
using namespace std;

int main()
{
    int arr[] = {34, 566, 88, 66, 88, 24};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i = 0; i <=size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}