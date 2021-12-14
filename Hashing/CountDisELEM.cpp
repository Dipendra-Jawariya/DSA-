// 16 Count Distinct elements
#include <iostream>
#include <unordered_set>

using namespace std;

// int CountDist(int arr[], int n)
// {
//     unordered_set<int> s;
//     for (int i = 0; i < n; i++)
//     {
//         s.insert(arr[i]);
//     }
//     return s.size();
// }

// IMPROVED EFFICIENT IMPLEMENTATION
int CountDist(int arr[],int n){
    unordered_set<int>s(arr,arr+n);//set does not allow duplicates it will only have distinct elements
    return s.size();
}
// int CountDist(int arr[], int n)
// {
//     int res = 0;
//     for (int i = 0; i < n; i++)
//     {
//         bool flag = false;
//         for (int j = 0; j < i; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 flag = true;
//                 break;
//             }
//         }

//         if (flag == false)
//         {
//             res++;
//         }
//     }
//     return res;
// }
int main()
{
    int arr[] = {10, 20, 30, 30, 10, 20, 10, 20};
    int size = sizeof(arr) / sizeof(int);
    cout << CountDist(arr, size);
    return 0;
}