//  Subsequence of the string
#include <bits/stdc++.h>
using namespace std;
bool isSubseq(string &s1, string &s2, int n, int m)
{
    // In here we are checking wheather s2 is a subsequent of s1 or not and assuming that s1 is bigger in size and s2 is from the s1(for this program only)
    // The time complexity of algo is O(n+m) and aux space is O(1)
    int j = 0;
    // if(n<m){
    //     return false; //This will be optimization for some cases where your string s1 is smaller in size (if s1 is smaller than s2 will not be a subsequent of s1)
    // }
    for (int i = 0; i < n && j < m; i++)
    {
        if (s1[i] == s2[j])
        {
            j++;
        }
    }
     return (j==m);
}
int main()
{
    string s1 = "ABCDEF";
    string s2 = "ACE";
    int i = s1.length();
    int j = s2.length();
    cout << isSubseq(s1, s2, i, j);
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// bool isSubseqRec(string s1, string s2, int n, int m)
// {
//     if (m == 0)
//     {
//         return true;
//     }
//     if (n == 0)
//     {
//         return false;
//     }
//     if (s1[n - 1] == s2[m - 1])
//     {
//         return isSubseqRec(s1, s2, n - 1, m - 1);
//     }
//     else
//     {
//         return isSubseqRec(s1, s2, n - 1, m);
//     }
// } 
// int main()
// {
//     string s1 = "ABCDEF";
//     string s2 = "DEF";
//     int i = s1.length();
//     int j = s2.length();
//     cout << isSubseqRec(s1, s2, i, j);
//     return 0;
// }
