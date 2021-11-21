#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << ' ';
    }
}
int main()
{
    int arr[] = {10, 5,6, 7, 30};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        cout << " ";
    }
    cout << endl;

    reverse(arr, size);
    return 0;
}

// NAIVE APPROACH
// #include <iostream>
// using namespace std;
// void reverse(int arr[], int n)
// {
//     int low = 0, high = n - 1;
//     while (low < high)
//     {
//         int temp = arr[low];
//         arr[low] = arr[high];
//         arr[high] = temp;
//         low++;
//         high--;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i];
//         cout << ' ';
//     }
// }

// int main()
// {
//     int arr[] = {10, 5,6, 7, 30};
//     int size = 4;
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i];
//         cout << ' ';
//     }
//     cout << endl;
//     reverse(arr, size);
//     return 0;
// }