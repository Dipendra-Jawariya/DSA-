                            // // //  Naive Approach // // //
                        // To find the largest element in the array

#include <iostream>
using namespace std;

int getLargest(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool flag = true;
        for (int j = 0; j < size; j++)
        {
            if (arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            return i;
        }
    }
    return -1;//This line will never be reached,bcz there is always one large element in the array 
// The time complexity of the element is O(N^2)
// The worst case when the array is sorted {5,8,10,20} then we have to run full time loop for every element and at last we reach the largest element    [WORST CASE TIME COMPLEXITY  = theta(n^2) ]
// If the largest element is first element  then it will take theta n time {best case time complexity = THETA N}
// IN general its time complexity is O(n^2)
}
int main()
{
    int arr[] = {10, 5, 20, 8};
    int size = sizeof(arr)/sizeof(int);
    cout << getLargest(arr, size);

    return 0;
}