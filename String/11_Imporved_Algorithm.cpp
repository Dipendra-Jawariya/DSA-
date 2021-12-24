// Improved Naive Algorithm for Distinct
#include <bits/stdc++.h>
using namespace std;
// overall this program is linear It runs THETA (N) times to find out all the occurences of the pattern in the text
void patSearchDist(string txt, string pat)
{
    int n = txt.length();
    int m = pat.length();
    for (int i = 0; i <= (n - m);)
    {
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
        if (j == 0)
        {
            i++;
        }
        else
        {
            i = i + j;
        }
    }
}

int main()
{
    string txt = "ABCEABEFABCD";
    string pat = "ABCD";
    patSearchDist(txt, pat);
    return 0;
}