// // Apna cllg algo
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     // cout << "Enter the size of the array" << endl;
//     cin >> n;
//     int arr[n];
//     // cout << "Enter the aray: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int curr=0;
//     for (int i = 0; i < n; i++)
//     {
//         curr=0;
//         for (int j = i; j < n; j++)
//         {

//             curr+=arr[j];
//             cout<<curr<<endl;
//             // cout<<arr[j]<<" ";
//         }

//         cout<<endl;
//     }

//     return 0;
// }

// Sum of the sub array is
#include <iostream>
using namespace std;
void SumSubArr(int arr[], int n)
{
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr = 0;
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout<<endl;
            cout<<"the sum of this subarray is ";
            curr += arr[j];
            cout<<curr<<endl;
            
        }
    }
}
int main()
{
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the aray: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    SumSubArr(arr, n);
    return 0;
}