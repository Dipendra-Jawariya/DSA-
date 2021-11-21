// Rotate the first two element of the array
#include<iostream>
using namespace std;
void leftRotatebyOne(int arr[],int n){
    int temp=arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    
}
void leftRotate(int arr[],int d,int n){
    for (int i = 0; i < d; i++)
    {
        leftRotatebyOne(arr,n);
    }
    
}
void printArray(int arr[],int n ){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[]={1,2,3,4,5,6,7,110,222,11,22};
    int size = sizeof(arr)/sizeof(int);
    leftRotate(arr,2,size);
    printArray(arr,size);
    return 0;
}