#include <iostream>
using namespace std;
void Frequencies(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        bool flag = false for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
            if (flag==true)
            {
                continue;
                int freq=1;
            }
            
        }
    }
    
}
int main()
{
    int arr[] = {10, 12, 10, 15, 10, 20, 12, 12};
    int size = sizeof(arr) / sizeof(int);
    Frequencies(arr, size);
    return 0;
}