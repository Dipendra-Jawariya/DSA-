#include <iostream>
using namespace std;
void print1toN(int n)
{ 
    if (n==0)
    {
        return;
    }
    print1toN(n-1);
    cout<<n<<" ";
    
}
int main()
{
    int n = 4; 
    print1toN(n);
    return 0;
}
// tc OF THE FUNCTION IS theta(n)
// recurance is t(n)=t(n-1)+theta(1)
// Auxilary space required n+1 at any movement so the worst time big of n auxilary space
// FUNCTIONING OF THE FUNCTION
// print1toN(4)
//         print1toN(3)
//             print1toN(2)
//                 print1toN(1)
//                     print1toN(0)
//     4    3    2    1            