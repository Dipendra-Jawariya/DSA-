// 14.Find the sum of the elements of the array
#include <iostream>
using namespace std;

int sum(int arr[],int n){
    int s=0;
    for (int i = 0; i < n; i++)
    {
        s+=arr[i];
    }
    return s;
}
int main()
{
    int arr[] = {1,2,3,4};
    int n = 4;
    cout<<sum(arr,n);
    return 0;
}