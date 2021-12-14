// Find nCr
// You are given two numbers n and r. You need to find nCr.
// nCr = (n!) / ((n-r)!*(r!))

#include <iostream>
using namespace std;
int nCr(int n, int r)
{
    if (r==0||r==n)
    {
        return 1;
    }
    
    return nCr(n-1,r-1 )+nCr(n-1,r);
}
int main()
{
    int n;
    cin >> n;
    int r;
    cin >> r;
    cout<<nCr(n, r);
    return 0;
}