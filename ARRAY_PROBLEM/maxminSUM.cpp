// Product of maximum in first array and minimum in second
#include <iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;



int minmaxMUL(int a[], int b[], int m, int n)
{
    sort(a,a+m);//sort Function is defined in  #include<bits/stdc++.h> header file
    sort(b,b+n);
    return a[m-1]*b[0];
}
int main()
{
    int a[] = {5, 7, 9, 3, 6, 2};
    int b[] = {1,
               2,
               6,
               -1,
               0,
               9};
    int m = sizeof(a) / sizeof(int);
    int n = sizeof(b) / sizeof(int);
    cout<<minmaxMUL(a, b, m, n);
    return 0;
}