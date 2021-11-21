// ARray Insertion at index
#include <iostream>
using namespace std;
int ModifiedARR(int arr[], int n, int index, int element)
{
    int i=0;
 if(i==index){
     arr[i]==element;
     i++;
 }
 for (int j = 0; j < n; j++)
 {
     cout<<arr[j];
     cout<<" ";
 }
 
 return 1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int sizeofArray = 6;
    int index = 5, element = 90;
    ModifiedARR(arr, sizeofArray, index, element);
    
    return 0;
}