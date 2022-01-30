// // sorting in c++ STL
// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     int arr[] = {20,10,52,40,52,33};
//     int size =sizeof(arr)/sizeof(arr[0]);
//     sort(arr,arr+size);  //with this sort function we can sort the array
//     for(int x:arr){
//         cout<<x<<" ";
//     }
//     cout<<endl;
//     sort(arr,arr+size,greater<int>());
//      //This sort function will print the array in revese sorted order
//     for(int x:arr)
//     cout<<x<<" ";
//     return 0;
// }

// Vector Sort 
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v={5,10,52,36,45};
    sort(v.begin(),v.end());  //Sorting in vecotrs
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    sort (v.begin(),v.end(),greater<int>());   //similar the third  parameter is passed to specify the order of sorting 
    // Here greater function is used to revese the default order....default order is increasing order which is changed to decreasing order
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}