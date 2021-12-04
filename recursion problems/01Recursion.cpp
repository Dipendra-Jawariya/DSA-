// Print 1 to n without loop using recursion
#include <iostream>
using namespace std;
int Print1toN(int n)
{
    if (n == 0)
    {
        return 0;
    }
    Print1toN(n - 1);
    cout<<n<<" ";
    return 0;
}
int main()
{
    int n;
    cin >> n;
    Print1toN(n);
    return 0;
}