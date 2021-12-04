// Recursively sum N numbers
#include <iostream>
using namespace std;
int SumOfN(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + SumOfN(n - 1);
}
int main()
{
    int num;
    cin >> num;
    cout<<SumOfN(num);
    return 0;
}
// The formula for sum of n natural number is n*(n+1)/2
// but for the recursive number we use  SumOfN(n-1)+n; 