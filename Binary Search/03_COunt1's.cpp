// Count 1's in binary array
#include<iostream>
using namespace std;
int CountOnes(int arr[],int size){
    int low =0;
    int high = size-1;
    while (low <=high)
    {
        int mid =(low+high)/2;
        if(arr[mid]==0){
            low = mid+1;
        }
        else{
            if (mid==0 ||arr[mid-1]!=0)
            {
                return (size-mid); 
            }
            else{
                high=mid-1;
            }
            
        }
    }
    
}
int main()
{
    int arr[]={1,1,1,1,1,0,0,0};
    int size = sizeof(arr)/sizeof(int);
    CountOnes(arr,size);
    return 0;
}