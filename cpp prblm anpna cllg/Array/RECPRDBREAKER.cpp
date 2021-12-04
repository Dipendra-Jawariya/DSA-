// // Record Breaking Day

// // optimised Approach
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the size of the array" << endl;
//     cin >> n;
//     int arr[n+1];
//     arr[n]=-1;
//     cout << "Enter the aray: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int ans =0;
//     int mx = 0;
//     for (int i = 0; i <= n; i++)
//     {
//         mx = max(mx, arr[i]);
//     }
// cout<<mx;
//     return 0;
// }