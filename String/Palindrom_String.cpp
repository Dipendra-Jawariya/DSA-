// To check wheather the string is palindrome or not

// This is the naive way to solve the problem
// It requires theta(n) time and theta(n) auxilary space
// #include <bits/stdc++.h>
// using namespace std;
// bool Palindrome(string &str)
// {
//     string rev = str;
//     reverse(str.begin(), str.end());
//     return (rev == str); //in cpp when we use "==" operator it compares containts of the both the strings
// }+ 
// int main()
// {
//     string str;
//     str = "ABBA";
//     cout << Palindrome(str);
//     return 0;
// }

//  EFFICIENT SOLUTION METHOD
#include <iostream>
using namespace std;
bool Palindrome(string &str)
{
    int begin = 0;
    int end = str.length() - 1;
    while (begin < end)
    {
        if (str[begin] != str[end])
        {
            return false;
        }
        begin++;
        end--;
    }
    return true;
}
int main()
{
    string str;
    str = "ABBA";
    cout << Palindrome(str);
    return 0;
}