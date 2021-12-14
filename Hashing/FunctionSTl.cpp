#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(15);
    s.insert(5);
    s.insert(20);

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
    cout << s.size() << " ";
    s.clear();
    cout << s.size();
    return 0;
}
// begin()- returns an iterator to the first element in the set.
//  end()-Returns an iterator to the theoretical element that folloes last element in the set.
//  size()-returns the number of elements in the set.
//  insert(var) - Inserts a new element val in the set.
// find(var) - Returns an iterator pointing to the element val in the set if it is present.
// empty()-Retirns whether the set is empty.