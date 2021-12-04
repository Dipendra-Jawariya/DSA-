// Factorial Using recursion
#include <iostream>
using namespace std;
int fac(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * fac(n - 1);
    // formula for finding the factorial of {n is n*fac(n-1)} with the help of recursion
}

int main()
{
    int n;
    cin >> n;
    // fac(n)
    cout << "The factorial of n " << n << " is " << fac(n);
    return 0;
}