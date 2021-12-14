// HAsing is very useful to keep track of the frequency of the elements in the list.
// Count Non-Repeated Elements
// #include <iostream>
// #include <set>
// using namespace std;

// int main()
// {
//     set<int> s;
//     int arr[] = {1, 1, 2, 2, 3, 3, 4, 5, 6, 7};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     for (auto i = 0; i < size; i++)
//     {
//         s.insert(arr[i]);
//     }
//     // For printing the elements of the set
//     // for (int x:s)
//     // {
//     //     cout<<x<<" ";
//     // }
//     for (auto itr = s.begin(); itr != s.end(); itr++)
//     {
//         cout << *itr << " ";
//     }

//     return 0;
// }

// An Efficient Solution is to use hashing.
// 1) Traverse array and insert elements and their counts in hash table.
// 2) Traverse array again and print first element with count equals to 1.

#include <bits/stdc++.h>
using namespace std;
int CoutNonRepNo(int arr[], int n)
{
    unordered_map<int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    int count = 0;
    for (auto x : mp)
    {
        if (x.second == 1)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << CoutNonRepNo(arr, size);
    return 0;
}