#include <iostream>
using namespace std;
void Duplicate(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "Element which is reapeating is " << arr[i]<<endl;
            }
        }
    }
}
int main()
{
    int arr[] = {2, 4, 6, 6, 6, 8, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    Duplicate(arr, size);
    return 0;
}