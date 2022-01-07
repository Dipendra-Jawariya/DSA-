// Improved Naive Algorithm for Distinct
#include <bits/stdc++.h>
using namespace std;
// overall this program is linear It runs THETA (N) times to find out all the occurences of the pattern in the text
// we  are under the assumption that all the charcters of the patter are distinct 
// This algo will only work for the distinct character of the string it will not work for same characters of the string
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

