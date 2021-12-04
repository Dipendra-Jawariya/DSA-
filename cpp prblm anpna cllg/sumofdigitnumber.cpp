// write a program t o find the sum of digits in a number
#include <iostream>
using namespace std;
int fun(int n)
{
    if (n < 10)
    {
        return n;
    }
    return fun(n / 10) + n % 10;
}
int main()
{
    int num;
    cin >> num;
    cout<<fun(num);
    return 0;
}