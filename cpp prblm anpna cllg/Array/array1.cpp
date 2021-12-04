// To take input of array from the user and rpint the maximum and minimum number of it
// #include <iostream>
// using namespace std;

// int maxNumber(int arr[], int n)
// {
//     int res = 0;
//     for (int i = 1; i <= n - 1; i++)
//     {
//         if (arr[res] <= arr[i])
//         {
//             res = i;
//         }
//     }
//     return arr[res];
// }
// int minNumber(int arr[], int n)
// {
//     int res = 0;
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[res] >= arr[i])
//         {
//             res = i;
//         }
//     }
//     return arr[res];
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "The maximum number is " << maxNumber(arr, n)<<endl;;
//     cout << "The minimum number is " << minNumber(arr, n)<<endl;;

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int maxno = 0;//we can also intisialize it with  (INT_MIN)
    int minno = 0;//(INT_MAX) with a header file <climits>
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= arr[maxno])
        {
            maxno = i;
        }
        // maxno =max(maxno,arr[i]);//here the max() is the build in function which gives us the maximum number btwn two numbers
        // minno = min(minno,arr[i]);
        // cout<<maxno<<" "<<minno;
        if (arr[i] <= arr[minno])
        {
            minno = i;
        }
    }
    cout<<"The maximum number is "<<arr[maxno]<<endl;
    cout<<"The minimum number is "<<arr[minno]<<endl;
    

    return 0;
}