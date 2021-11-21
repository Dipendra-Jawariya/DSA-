// CHECK WHEATHER A NUMBER IS ARMSTRONG OR NOT
// ARMSTRONG NUMBER =  IS A NUMBER IF WHICH WHEN WE FIND THE CUBE OF ITS INDIVIDUAL NUMBER WE GOT THE SAME NUMBER
// 153 IS A ARMSTRONG NUMBER
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int originaln = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n = n / 10;
    }
    if (sum == originaln)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not a armstrong number"<<endl;;
    }

    return 0;
}