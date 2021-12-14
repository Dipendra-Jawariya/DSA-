
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int key;
    cout<<"Enter the key";
    cin>>key;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << i;
        }
        else {
            return -1;
        }
    }
    return 0;
}