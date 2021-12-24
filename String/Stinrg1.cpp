// There are two type of string in cpp
// 1. c-style string - In this type of string arrat of character are used
// 2. C++ string  (It is highly recomended to use C++ string bcx
// Richer library
// Support operators like +,<,>,==,<=,>= are posible
//  can assing a string later
// like    string str;
// str ="gfg";
// Do not have to worry about size
// Can be converted to c-style string if needed
// )

#include <iostream>
using namespace std;

int main()
{
    // In terms of implementation character array is implemented in less time than string class
    // more memory cannot be allocated to character array at the run time where as we can allocate as much as memory to string class
    string str = "geeksforgeeks";
    // string is a class i created an object of it in her which is str
    cout << str.length() << " ";// This lengtho the function will give me the length of the string   it will give 13    
    str = str + "xyz";  // "+"   operator concatinates xyz to the string    (now the length will be 16)
    cout << str << " ";
    cout << str.substr(1, 3) << " ";//This two parameters which are given are beginning index and the ending index of the substring we want to find it will give "eek"
    cout << str.find("eek") << " "; //It is used to  find a string in a given string    if the string which we want to find is not present in the string then it will pass string::npos
    return 0;
}