/* Given a rope of length n ,you need to find maximum number of pieces you can make such that length of every piece you can make such that length of every piece is in set {a,b,c} for given three  values a,b, and c
i/p: n=5,a=2,b=5,c=1
 O/P:5
 I/P:n=23,A=12,b,9,c=11
 O/P:2
 I/P:n=5,A=4,B=2,C=6
 O/P:-1  */
#include <iostream>
#include<cmath>
using namespace std;

int maxCuts(int n, int a, int b, int c)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return -1;
    }

    int res = max(maxCuts(n - a, a, b, c), maxCuts(n - b, a, b, c), maxCuts(n - c, a, b, c));
    if (res == -1)
    {
        return -1;
    }
    return res + 1;
}
int main()
{
    int n = 5, a = 2, b = 1, c = 5;
    cout<<maxCuts(n, a, b, c);

    return 0;
}