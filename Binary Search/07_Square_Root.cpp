// Square Root
#include <iostream>
using namespace std;





// int sqRootFloor(int x)
// {
//     int i = 1;//time compexity of this solution is THETA (sqrt of x)
//     while (i * i <= x)
//     {
//         i++;
//     }
//     return (i - 1);
// }
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    cout << sqRootFloor(x);
    return 0;
}