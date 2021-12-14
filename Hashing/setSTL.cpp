// C++ program to illustrate hashing using
//  set in CPP STL
// Set is an ordered sequence of unique keys whereas unordered_set is a set in which key can be stored in any order, so unordered.
#include <iostream>
#include <set>
#include <iterator>
using namespace std;

int main()
{
    // empty set container
    set<int> s;

    // List of elements
    int arr[] = {40, 20, 60, 30, 50, 50, 10};

    // Insert the elements of the list
    // to the set
    for (int i = 0; i < 7; i++)
    {
        s.insert(arr[i]);
    }
    // Print the content of the set
    //  The element of the set will be sorted
    // Without ant duplicates
    cout << "The elements in the set are: ";
    for (auto itr = s.begin(); itr != s.end(); itr++)
    {
        cout << *itr << " ";
    }
    return 0;
}