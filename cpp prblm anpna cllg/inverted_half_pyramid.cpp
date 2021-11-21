

// Inverted Half Pyramid
// n=5
// 1. _ _ _ _ *
// 2. _ _ _ * *
// 3. _ _ * * *
// 4. _ * * * *
// 5. * * * * *
#include <iostream>
using namespace std;

int main()
{
    int row;
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (j <= row - i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
                // cout<<endl;
            }
            
        }
        cout<<endl;
    }

    return 0;
} 