// To find the Left Most Repeating Character
// In these program we are going to return the index of the left most repeating character
#include <bits/stdc++.h>
using namespace std;

// Efficient Solution
const int CHAR = 256;
int LeftRepeatingNo(string s)
{
    int fIndex[CHAR];
    fill(fIndex, fIndex + CHAR, -1);
    int res = INT_MAX;
    for (int i = 0; i < s.length(); i++)
    {
        int fi = fIndex[s[i]];
        if (fi == -1)
        {
            fIndex[s[i]] = i;
        }
        else
        {
            res = min(res, fi);
        }
    }
    return (res==INT_MAX)?-1:res;
}

// int LeftRepeatingNo(string &s)
// {
//     // This is just a better solution for the problem
//     int CHAR = 256;
//     int count[CHAR] = {0};
//     for (int i = 0; i < s.length(); i++)
//     {
//         count[s[i]]++;
//     }
//     for (int i = 0; i < CHAR; i++)
//     {
//         if (count[s[i]] > 1)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// NAIVE SOLUTION
// int LeftRepeatingNo(string &s)
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         for (int j = i + 1; j < s.length(); j++)
//         {
//             if (s[i] == s[j])
//             {
//                 return i;
//             }
//         }
//     }
//     return -1;
// }
// Time Complexity is  O(N^2)
int main()
{
    string s = "geeksforgeeks";
    cout << LeftRepeatingNo(s);
    return 0;
}