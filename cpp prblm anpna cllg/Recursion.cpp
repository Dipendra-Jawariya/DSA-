// 01 Recursion Introduction
// Recurtion is a way to solve a problem or a way to write a program in which a function calls itself dircetly or indirectly

/*Direct RECURSION                       Indect RECURSION (Indecrt recursion is not mainly very common
and here we are only going to focus on DIRECT RECURSION)
// void func1(){                         void fun1(){
                                    


//     func1();                          fun2();
// }                                    void finc2(){
                                           func1();
                                            }
                                         } */

// #include <iostream>
// using namespace std;
// void fun1()
// {
//     cout << "GFG" << endl;
//     fun1();
// }   //This program goes to an never ending situation and leads to segmantation fault
// int main()
// {
//     fun1();
//     return 0;
// }

// program which terminate after the positive values
#include <iostream>
using namespace std;
void fun1(int n)  //here we got parameters for the n  
{
// here is a base cases
    if (n == 0)   //heree we are got a cindition to terminating the loop
     
        return;
    cout << "GFG" << endl;
    fun1(n - 1); ///here we are decreasing the value of n by one in every implementation of the function
}
int main()
{
    fun1(3); //the number od parameters are passed will be the function calls
    return 0;
}