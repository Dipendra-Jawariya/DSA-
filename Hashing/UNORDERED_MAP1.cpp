#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    m["gfg"] = 20;
    m["ide"] = 30;
    m["courses"] = 15;
    m.insert({"Dipendra",19});
    m.insert({"competitive",20});

    if (m.find("ide") != m.end())
    {
        cout << "Found\n";
    }
    else
    {
        cout << "Not Found\n";
    }
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << (it->first) << " " << (it->second) << endl;
    }
    return 0;
}
// like begin() there is rbegin() that give you reverse iterator but we do not generally use revese order bcz its unorder  mapping
