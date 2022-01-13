// In this program we are going to sort fuction in our desire
//  like we are going to sort it in increasing order of x value
#include <iostream>
#include <algorithm>
using namespace std;
struct point
{
    int x, y;
};
bool myCmp(point p1, point p2)
{
    return (p1.x < p2.x);
}

int main()
{
    point arr[] = {{3, 10}, {2, 8}, {5, 4}};  
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n, myCmp);
    for (auto i : arr)
    {
        cout << i.x << " " << i.y << endl;   //Oen Object and Order
    }
    return 0;
}