// Video 11 of react tutorial
// Write a rucursive function to find sum of digits of a number
#include <iostream>
using namespace std;
int getSum(int n)
{
    if (n < 10)
    {
        return n;
    }
    return getSum(n / 10) + n % 10;
}
int main()
{
    int n;
    cin >> n;
    cout << getSum(n);
    return 0;
}