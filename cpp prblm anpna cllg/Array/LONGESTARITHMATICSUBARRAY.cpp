// To find the longest Arithmatic subarray
//  ARITHMATIC SUBARRAY - is a array that contains at least two integer and the difference between consequcutive integer are equal
// [9,10]   ==>>10-9 = -1   ARITHMATIC ARRAY
// [1,3,3,7] ==> 7-3 = 4 , 3-3 =1,3-1=0    Not a ARITHMATIC array

#include <iostream>
using namespace std;

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
    // Minimum possible length of required subarray is 2
    int ans = 2;

    int pd = arr[1] - arr[0];//privious common difference
    int j = 2;
    int curr = 2; // store the length of the currect subarray
    while (j < n)
    {
        if (pd == arr[j] - arr[j - 1])
        // checking if the current common difference is  equal to privious common difference
        {
            curr++;
        }
        else
        {
            pd = arr[j] - arr[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout << ans << endl;
    return 0;
}

// void ArithSubArray(int arr[], int n)
// {
//     int ans = 2;              // Storing the minimum length of the subarray
//     int pd = arr[1] - arr[0]; // storing the privious difference
//     int curr = 2;             // store the length of the current subarray
//     intt j = 2;
//     while (j < n)
//     {
//         if (pd == arr[j] - arr[j - 1])
//         {
//             curr++;
//         }
//         else
//         {
//             pd = arr[j] - arr[j - 1];
//             curr=2;
//         }
//         ans = max(ans,curr);
//         j++;
//     }
//     cout<<ans<<" ";
// }