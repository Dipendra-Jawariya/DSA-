// We nned to compute the length of the string
#include <bits/stdc++.h>
using namespace std;
int lengthS(string &s)
{
    //for (;NOT NULL
    int count = 0;
    for (int i = 0;s[i]; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    string s = "Hello1234";
    cout << lengthS(s);
    return 0;
}