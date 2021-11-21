// Count Smaller Than X
#include <iostream>
using namespace std;
int CountSmaller(int arr[], int N, int x)
{
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < x)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[] = {2,2,2,2,2,2,2,2};
    int N = sizeof(arr) / sizeof(int);
    int x = 3;
    cout << CountSmaller(arr, N, x);
    // cout << "ARray Before deletion of the element is : " << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i];
    //     cout << " ";
    // }
    // cout << endl;
    return 0;
}