// Check wheather two string are anagram of each other or not
#include <bits/stdc++.h>
using namespace std;
// bool areAnagram(string &s1, string &s2)
// {
//     if (s1.length() != s2.length())
//     {
//         return false;
//     }
//     sort(s1.begin(), s1.end());
//     sort(s2.begin(), s2.end());
//     return (s1 == s2);
// }
// O(nlog n )Time complexity
// There is actually a better method than sorting
// EFFICIENT WAY
// This istandard character counting technique
const int CHAR = 256;
bool areAnagram(string &s1, string &s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }
    int count[CHAR] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for (int i = 0; i < CHAR; i++)
    {
        if (count[i] != 0)
        {
            return false;
        }
    }
    return true;
}
// TIme complexity of the solution is O(N+CHAR)
// and requires O(CHAR) auxilary space
int main()
{
    string s1 = "listen";
    string s2 = "silent";
    cout << areAnagram(s1, s2);
    return 0;
}