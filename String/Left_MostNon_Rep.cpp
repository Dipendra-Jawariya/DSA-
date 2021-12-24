// LeftMost Non-repeating Character
#include <bits/stdc++.h>
using namespace std;

// Efficient constant auxilary space
// This t raversal is ding one  travesal of the string and running constant loop time complexity is O(n) and constant auxilary space
// BUT AT A TIME I AM NOT ABLE TO UNDERSTAND THIS SOLUTION


// const int CHAR = 256;
// int NonRep(string str)
// {
//     int fI[CHAR];
//     fill(fI, fI + CHAR, -1); // filling the fI array with -1 and CHAR
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (fI[str[i]] == -1)
//         {
//             fI[str[i]] == i;
//         }
//         else
//         {
//             fI[str[i]] = -2;
//         }
//     }
//     int res = INT_MAX;
//     for (int i = 0; i < CHAR; i++)
//     {
//         if (fI[i] >= 0)
//         {
//             res = min(res, fI[i]);
//         }
//     }
//     return (res==INT_MAX)?-1:res;
// }

// Better Solution
// This solution is having TIME COMPLEXITY O(nlog n) and it requires only two traversal of the string
// So how can we done this work in one traversal of the string

const int CHAR = 256;
int NonRep(string &str)
{
    int count[CHAR] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        count[str[i]]++;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (count[str[i]] == 1)
        {
            return i;
        }
    }
    return -1;
}

// Naive Solution to solve the Problem
// This solution is having time Complexity as O(n^2) and Auxilary space O(1)

// int NonRep(string &str)
// {
//     for (int i = 0; i < str.length(); i++)
//     {
//         bool flag = false;
//         for (int j = 0; j < str.length(); j++)
//         {
//             if (i != j && str[i] == str[j])
//             {
//                 flag = true;
//                 break;
//             }
//         }
//         if (flag == false)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
int main()
{
    string str = "geeksforgeeks";
    cout << NonRep(str);
    return 0;
}