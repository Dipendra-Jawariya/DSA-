// Unordered_set in cpp STL
#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    for (int x : s)
    {
        cout << x << " ";
    }
   
    return 0;
}
// we cannot predict any perticular order for hashing in these program the order can be anything