// . The Sequence

// You are given a number n. You need to recursively find the nth term of the series S that is given by:
// S(n) = n+ n*(S(n-1)) and S(0) = 1
#include <iostream>
using namespace std;
int Sequence(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n + n*(Sequence(n - 1)); //Given in the question
}
int main()
{
    int n;
    cin >> n;
    cout<<Sequence(n);
    return 0;
}