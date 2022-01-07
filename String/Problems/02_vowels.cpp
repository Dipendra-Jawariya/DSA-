// Count the number of vowels in string
#include <iostream>
using namespace std;
int vowelCount(string &s)
{
    int count = 0;
    for (int i = 0; s[i]; i++)
    {
        if (s[i]=='a' || s[i]=='e' ||s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string s = " aeiou";
    cout << vowelCount(s);
    return 0;
}