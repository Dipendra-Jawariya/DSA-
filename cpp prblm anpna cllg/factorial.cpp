// To find the factorial of a number using functions
#include <iostream>
using namespace std;
int factorial(int n)
{
    int fac = 1;
    // if (n == 0 || n == 1)
    // {
    //     return 1;
    // }
    for (int i = 2; i <= n; i++)
    {
        fac = fac * i;
    }
    return fac;
}

int main()
{
    int n;
    cin >> n;
    cout<<factorial(n);
    return 0;
}