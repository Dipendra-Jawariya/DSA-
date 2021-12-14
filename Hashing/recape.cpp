// Set in cpp stl
#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main()
{
    // Empty set container
    set<int> s;

    // List of  elements
    int arr[] = {40, 20, 30, 50, 47, 10, 30};
    for (int i = 0; i < 7; i++)
    {
        s.insert(arr[i]);
    }
    cout << "The elements in the set are: \n";
    for (auto itr = s.begin(); itr != s.end(); itr++)
    {
        cout << *itr << " ";
    }

    return 0;
}