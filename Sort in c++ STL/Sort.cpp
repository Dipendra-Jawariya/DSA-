// Sort in c++ STL
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {10, 20, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    cout<<"Array sort in increasing order:"<<endl;
    for (int x : arr)
    {
        cout << x << " ";
    }
    sort(arr, arr + n, greater<int>());//Greater function is typically used to reverse the default order,default order is increasing order greater is going to change it to decreasing order
    cout << endl;
    cout<<"Array in decreasing order due to the greater parameterized function in sort function"<<endl;
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}