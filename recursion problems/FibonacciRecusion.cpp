// Print Fibonacci series Using Recursion
// You are given a number n. You need to find nth Fibonacci number.
#include <iostream>
using namespace std;
int Fib(int n)
{
if (n==1 ||n==0)
{
    return n;
}

    return Fib(n - 1) + Fib(n - 2);
}
int main()
{
    int num;
    cin >> num;
    cout<<Fib(num);
    return 0;
}