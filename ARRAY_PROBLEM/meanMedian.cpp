// 15. To Find the mean and Median of ARRAY
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int mean(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    sum = sum / n;
    return sum;
}
int median(int a[], int n)
{
    sort(a, a + n);
int x = (int)(n/2);
    if (n % 2 == 0)
    {
       
       cout<<((int)(a[x]+a[x-1])/2)<<endl;
    }
    else{
        cout<<a[x]<<""<< endl;
    }
}
int main()
{
    int a[] = {2, 8, 3, 4};
    int n = 4;
    cout << mean(a, n)<<" ";
    median(a, n);
    return 0;
}