// Sum of Digits of a Number
#include <iostream>
using namespace std;
int SumOfNum(int n)
{
    if (n<10)
    {
        return n;
    }
    
   return SumOfNum(n/10)+SumOfNum(n%10);
}

int main()
{
    int num;
    cin >> num;
    cout << SumOfNum(num);
    return 0;
}