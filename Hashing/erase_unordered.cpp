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
    cout << s.size() << " ";
    // s.erase(15);// one way of erasing an element
    // cout << s.size() << " ";
    // auto it = s.find(10);// here with another  way we are passing the iterator
    // s.erase(it);
    // cout << s.size() << " ";

    s.erase(s.begin(),s.end());
    cout<<s.size();
    return 0;
}