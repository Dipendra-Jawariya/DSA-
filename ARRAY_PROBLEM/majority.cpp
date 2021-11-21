// 10. Who has the majority?

#include <iostream>
using namespace std;
int majorityWins(int arr[], int size, int x, int y)
{
    int countX = 0;
    int countY = 0;
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == 4)
        {
            countX++;
        }
        if (arr[i] == 5)
        {
            countY++;
        }
    }
    cout << countX<<" ";
    cout << countY<<" ";
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr) / sizeof(int);
    int x = 1, y = 7;
    majorityWins(arr, size, x, y);
    return 0;
}