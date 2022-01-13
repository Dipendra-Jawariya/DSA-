// Merge_sort naive solution
#include <bits/stdc++.h>
using namespace std;
void Merge(int a[], int b[], int m, int n)
{
    int c[m + n];
    for (int i = 0; i < m; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        c[m + i] = b[i];
    }
    sort(c, c + m + n);
    for (int i = 0; i < (m + n); i++)
    {
        cout << c[i] << " ";
    }
}
int main()
{
    int a[] = {10, 15, 20, 20};
    int m = 4;
    int b[] = {1, 12};
    int n = 2;
    Merge(a, b, m, n);
    return 0;
}