// Checking if string are Rotations 
#include<iostream>
using namespace std;
bool areRotationS(string &s1,string &s2){
    if (s1.length()!=s2.length())
    {
        return false;
    }
    return ((s1+s2).find (s2)!=string::npos);
    // In these program we are concatinating s1 and s2 and then we will use STL functions which work in linear time 
    // THis is Theta(n) solution and it takes Theta(n) auxilary space
    
}
int main()

{
    string s1="ABCD";
    string s2="CDAB";
    cout<<areRotationS(s1,s2);
    return 0;
}