//  Naive way of PATTERN SEARCHING ALGORITHM is not the best way to do pattern searching its quadratic time algorinthm and there exists linear time algorithm which can search a pattern in a text like kmp algo, and many more


// There are many way of pattern searching and it is the most popular problem in computer science
#include <bits/stdc++.h>
using namespace std;
void patSearcing(string &txt, string &pat)
{
    int m = pat.length();
    int n = txt.length(); // n=7 will be the number of characters in the text  and m=4 will be the number of characters in the pat (which is pattern)
    for (int i = 0; i <= n - m; i++)
    { // 7-4 will be the last point till we run this loop
        int j;
        for (j = 0; j < m; j++)
        {
            if (pat[j] != txt[i + j])
            {
                break;
            }
        }
        if (j == m)
        {
            cout << i << " ";
        }
    }
}
// The time complexity of the algorithm is O((n-m+1)*m),It takes O(1) auxilary space
// AAAAA        This is the worst case string for the loop
// AAA
int main()
{
    string txt = "AAAAA"; 
    string pat = "AAA";
    patSearcing(txt, pat);
    return 0;
}