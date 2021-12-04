// Count the total digits in a number
#include <iostream>
using namespace std;
int CountDigit(int n)
{
    int count=1;
    if (n == 0)
    {
        return 0;
    }

    return count + CountDigit(n / 10);
     
}

int main()
{
    int num;
    cin >> num;
    cout << CountDigit(num);
    // int count = 0;
    // while (num > 0)
    // {
    //     count++;
    //     num = num / 10;
    // }
    // cout << count;
    return 0;
}