// Merge_sort naive solution
#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int b[], int m, int n)
{
    int i = 0;
    int j = 0;
    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else
        {
            cout << b[j];
            j++;
        }
    }
    while (i < m)
    {
        cout << a[i] << " ";
        i++;
    }
    while (j < n)
    {
        cout << a[j];
        j++;
    }
}
void Merge(int a[], int b[], int m, int n)
{
    int i = 0;
    int j = 0;
    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else
        {
            cout << b[j] << " ";
            j++;
        }
    }
    while (i < m)
    {
        cout << a[i] << " ";
        i++;
    }
    while (j < n)
    {
        cout << b[j] << " ";
        j++;
    }
}

// This is the naive method for MERGE Sort with time complexity of O((m+n)*log(m+n))
// void Merge(int a[], int b[], int m, int n)
// {
//     int c[m + n];
//     for (int i = 0; i < m; i++)
//     {
//         c[i] = a[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         c[m + i] = b[i];
//     }
//     sort(c, c + m + n);
//     for (int i = 0; i < (m + n); i++)
//     {
//         cout << c[i] << " ";
//     }
// }
int main()
{
    int a[] = {10, 15, 20, 20};

    int m = sizeof(a) / sizeof(a[0]);
    int b[] = {1, 12};
    int n = sizeof(b) / sizeof(b[0]);
    Merge(a, b, m, n);
    return 0;
}