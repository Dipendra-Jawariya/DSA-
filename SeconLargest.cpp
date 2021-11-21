// PRogram to find the second largest element in the array
#include <iostream>
using namespace std;

int getLargest(int arr[], int n)
{
    int largest = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            largest = i;
        }
    }
    return largest;
}
int SecondLargest(int arr[], int n)
{
    int largest = getLargest(arr, n);
    int res = -1;
    for (int i = 0; i < n; i++)          // Here we are using the first largest value and after that we defined a result var who has -1 value in it.bcz what if it the array only has same value so that will return -1
    {
        if (arr[i] != arr[largest])
        {

            if (res == -1)
            {
                res = i;
            }
            else if (arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
        return res;

}

int main()
{
    int arr[] = {10, 115, 180, 120};
    int size = sizeof(arr) / sizeof(int);
    getLargest(arr, size);
    cout << SecondLargest(arr, size);
    return 0;
}