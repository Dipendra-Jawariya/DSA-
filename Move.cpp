// #include <iostream>
// using namespace std;
// void moveZeros(int arr[], int n)
// {
//     //Creating temporary array
//     int temp[n];
//     int j = 0;
//     // storing positivr integer
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] >= 0)
//         {
//             temp[j] = arr[i];
//             j++;
//         }
//     }
//     // Storing negative integer
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < 0)
//         {
//             temp[j] = arr[i];
//             j++;
//         }
//     }
//     // Coping valie for one array to another
//     for (int i = 0; i =n; i++)
//     {
//         arr[i] = temp[j];
//     }
//         for (int i = 0; i < n; i++)
//     {
//         cout << arr[i];
//         cout << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     int arr[] = {1, -1, 3, 2, -7, -5, 11, 6};
//     int size = sizeof(arr) / sizeof(int);
//     moveZeros(arr, size);
   
  
//     return 0;
// }

// Not working properly