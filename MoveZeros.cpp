// // Move all the zeros at the end
// #include <iostream>
// using namespace std;
// void moveToEnd(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)//Travesing the whole array in here
//     {
//         if (arr[i] == 0) //Condition to find zero element
//         {
//             for (int j = i+1; j < n; j++)
//             {
//                 if (arr[j] != 0) //to find non zero element in the array
//                 {
//                     swap(arr[i], arr[j]); //swapping the zero element with non zero element
//                 }
//             }
//         }
//     }
//     cout<<"After swaping the array's zero's: "<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i];
//         cout<<" ";
//     }

// }
// int main()
// {
//     int arr[] = {10, 5, 0, 0, 8, 0, 9, 0};
//     int size = sizeof(arr) / sizeof(int);
//     cout << "Array before swap " << endl;
//     // for (int i = 0; i < size; i++)
//     // {
//     //     cout << arr[i];
//     //     cout << " ";
//     // }
//     moveToEnd(arr, size);
//     return 0;
// }

// Efficient way for this problem
#include <iostream>
using namespace std;
void moveZeros(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << " ";
    }
}
int main()
{
    int arr[] = {10, 8, 0, 0, 12, 0};
    int size = sizeof(arr) / sizeof(int);
    moveZeros(arr, size);
    return 0;
}

// This is one travesal solution
// O(n)
// and O(1) auxilary space 