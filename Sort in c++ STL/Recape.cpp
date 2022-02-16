// // sort function internally uses quickSort
// // sorting in c++ STL

// // #include<iostream>
// // #include<algorithm>
// // using namespace std;

// // int main()
// // {
// //     int arr[] = {20,10,52,40,52,33};
// //     int size =sizeof(arr)/sizeof(arr[0]);
// //     sort(arr,arr+size);  //with this sort function we can sort the array
// //     for(int x:arr){
// //         cout<<x<<" ";
// //     }
// //     cout<<endl;
// //     sort(arr,arr+size,greater<int>());
// //      //This sort function will print the array in revese sorted order
// //     for(int x:arr)
// //     cout<<x<<" ";
// //     return 0;
// // }

// // Vector Sort
// // #include<vector>
// // #include<iostream>
// // #include<algorithm>
// // using namespace std;

// // int main()
// // {
// //     vector<int> v={5,10,52,36,45};
// //     sort(v.begin(),v.end());  //Sorting in vecotrs
// //     for(int x:v){
// //         cout<<x<<" ";
// //     }
// //     cout<<endl;
// //     sort (v.begin(),v.end(),greater<int>());   //similar the third  parameter is passed to specify the order of sorting
// //     // Here greater function is used to revese the default order....default order is increasing order which is changed to decreasing order
// //     for(int x:v){
// //         cout<<x<<" ";
// //     }
// //     return 0;
// // }

// // Sort in cPP STL
// // #include <iostream>
// // #include <algorithm>
// // using namespace std;

// // int main()
// // {
// //     int arr[] = {10, 20, 45, 65};
// //     int size = sizeof(arr) / sizeof(int);
// //     sort(arr, arr + size);
// //     for (int x : arr)
// //     {
// //         cout << x << " ";
// //     }
// //     cout<<endl;
// //     sort(arr, arr + size, greater<int>()); //greater fuction gives you decreasing order
// //     for (int x : arr)
// //     {
// //         cout << x << " ";
// //     }
// //     return 0;
// // }

// // Example to sort an vector
// // #include <vector>
// // #include <algorithm>
// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     vector<int> v = {5, 72, 20, 10};
// //     sort(v.begin(), v.end());
// //     for (int x : v)
// //     {
// //         cout << x << " ";
// //     }
// //     cout << endl;
// //     sort(v.begin(),v.end(),greater<int>());
// //     for (int x : v)
// //     {
// //         cout << x << " ";
// //     }
// //     return 0;
// // }

// // Specifying our own order of sorting
// // #include <iostream>
// // #include <algorithm>
// // using namespace std;
// // struct Point
// // {
// //     int x, y;
// // };
// // bool myCamp(Point p1, Point p2)
// // {
// //     return (p1.x < p2.x);
// // we can modify this program also just by changing the y value in this function
// // }
// // int main()
// // {
// //     Point arr[] = {{3, 10}, {2, 8}, {5, 4}};
// //     int size = sizeof(arr) / sizeof(int);
// //     sort(arr, arr + size, myCamp);
// //     for (auto i : arr)
// //     {
// //         cout << i.x << " " << i.y << endl;
// //     }
// //     return 0;
// // }

// // BUBBLE SORT
// #include <iostream>
// using namespace std;
// // void BubbleSort(int arr[], int size)
// // {
// //     for (int i = 0; i < size - 1; i++)
// //     {
// //         for (int j = 0; j < size -i-1; j++)
// //         {
// //             if (arr[j] > arr[j + 1])
// //             {
// //                 swap(arr[j], arr[j + 1]);
// //             }
// //         }
// //     }
// //     for (int i = 0; i < size; i++)
// //     {
// //         cout << arr[i] << " ";
// //     }
// // }

// void BubbleSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         bool swapped = false;
//         // THis optimization wokrs when the arr is sorted  or almost sorted
//         // It enhances the performance
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//                 swapped = true;
//             }
//         }
//         if (swapped == false)
//         {
//             break;
//         }
//     }
//     for(int i = 0; i < n ; i++ ){
//         cout<<arr[i]<<" ";
//     }
// }
// int main()
// {
//     int arr[] = {2, 10, 28, 37};
//     int size = sizeof(arr) / sizeof(int);
//     BubbleSort(arr, size);
//     return 0;
// }

// // SELECTION SORT
// #include <bits/stdc++.h>
// using namespace std;
// // void selectionSort(int arr[], int size)
// // {
// //     int temp[size];
// //     for (int i = 0; i < size; i++)
// //     {
// //         int min_ind = 0;
// //         for (int j = 1; j < size; j++)
// //         {
// //             if (arr[j] < arr[min_ind])
// //             {
// //                 min_ind = j;
// //             }
// //         }
// //         temp[i] = arr[min_ind];
// //         arr[min_ind] = std::numeric_limits<int>::max();
// //     }
// //     for (int i = 0; i < size; i++)
// //     {
// //         arr[i] = temp[i];
// //     }
// // }
// // }
// // void selectionSort(int arr[], int n)
// // {
// //     for (int i = 0; i < n-1; i++)
// //     {
// //         int min_ind = i;
// //         for (int j = i+1; j < n; j++) //with this for loop we just find the minimum element
// //         {
// //             if (arr[j] < arr[min_ind])
// //             {
// //                 min_ind = j;   /*Storing the index of the minimum element in the array */
// //             }
// //         }
// //         swap(arr[min_ind],arr[i]);/* here we are just swaping the minimum element with the current index of the outer loop */
// //     }
// // }
// // int main()
// // {
// //     int arr[] = {10, 5, 8, 20, 2, 8};
// //     int size = sizeof(arr) / sizeof(int);
// //     selectionSort(arr, size);
// //     for (int i = 0; i < size; i++)
// //     {
// //         cout << arr[i] << ' ';
// //     }
// //     return 0;
// // }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void InsertionSort(int arr[], int size)
// {
//   for(int i =1;i<n;i++){
//       int key = arr[i];
//       int j = i-1;
//       while (j>=0 && arr[j]>key)
//       {
//           arr[j+1]=arr[j];
//           j--;
//       }
//       arr[j+1]=key;
//   }
// }

// void InsertionSort(int arr[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int arr[] = {20, 5, 40, 60, 10, 30};
//     int size = sizeof(arr) / sizeof(int);
//     InsertionSort(arr, size);
//     return 0;
// }

// MERGE SORT
// This is the nive way to do this we can also optimize this
// time complexity of this algorithm is O((m+n)*log(m+n));
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a[] = {10, 15, 20, 20};
//     int b[] = {1, 12, 15, 85};
//     int Asize = sizeof(a) / sizeof(a[0]);
//     int Bsize = sizeof(b) / sizeof(b[0]);
//     int c[Asize + Bsize];
//     for (int i = 0; i < Asize; i++)
//     {
//         c[i] = a[i];
//     }
//     for (int j = 0; j < Bsize; j++)
//     {
//         c[j+Asize] = b[j];
//     }
//     sort(c, c + Asize + Bsize);
//     for (int i = 0; i < Asize + Bsize; i++)
//     {
//         cout << c[i] << " ";
//     }

//     return 0;
// }



// EFFICIENT SOLUTION
// Time complexity is O(m+N)
#include <iostream>
using namespace std;
void mergeSort(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else
        {
            cout << b[j] << " ";
            j++;
        }
    }
    while (i < m)
    {
        cout << a[i] << " ";
        i++;
    }
    while (j < n)
    {
        cout << b[j] << " ";
        j++;
    }
}
int main()
{
    int a[] = {10, 15, 20, 20};
    int b[] = {1, 12};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    // int c[m+n];
    mergeSort(a, b, m, n);
    return 0;
}