// functions practice questions
// 1.Sumn of the first n natural numbers
#include <iostream>
using namespace std;
int sumofN(int n)
{
    // int sum = 0;
int sum;
    sum = n*(n + 1)/2;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }

    return sum;
}
int main()
{
    int n;
    cin >> n;
    cout << sumofN(n);
    return 0;
}