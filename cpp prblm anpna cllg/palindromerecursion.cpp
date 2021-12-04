// Panlindrome check using recursion
// A string is known at panlindrom when it is same when you read it feom left to right  or  right to left
// Basically if we reverse the string it will be same
// for example
// I/P ; abbcbba
// O/P: Yes

// I/P : abba
// O/P : Yes

// I/P: geeks
// O/p: No
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string &str, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    return str[start] == str[end] && isPalindrome(str, start + 1, end - 1);
}
int main()
{
    string str1("acbca");
    int start = str1.length();
    int end = str1.length() - 1;
    isPalindrome(str1, start, end);
    return 0;
}
// i am not able to understand this program properly at a time and it is not even completed 