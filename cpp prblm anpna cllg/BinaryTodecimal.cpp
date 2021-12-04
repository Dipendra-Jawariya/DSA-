// Conversions

#include <bits/stdc++.h> //This header file contains all the header file which are required during coading

using namespace std;
int BinaryToDecimal(int n)
{
    int ans = 0;
    int x = 1; ///Here x is working as the element 2^0 which is 1
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y; //2^0+1=1      this is one is stored in the ans and goes on as same
        x *= 2;       // here i am updating the value of the x by 2 like 2^2=4 and so on
        n /= 10;      //here we devide the binary number by 10        101/10=10
    }
    return ans;
}
int OctalToDecimal(int n)
{
    // the base of the octal number 8 and for the conversion
    // 101 = (1*8^2+0*8^1+1*8^0) ===>65
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10; //here we are finding the remainder which is the last term also
        ans += x * y;
        x *= 8;
        n /= 10; // here are shifting it by 10s  101/10=10
    }
    // 17 = 1*8^1+7*8^0  ===>15
    return ans;
}

int hexadecimalToDecimal(string n)
{
    int ans = 0;
    int x = 1;
    int s = n.size(); //predefined function of the string
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans += x * (n[i] - '0');
        }
        else if(n[i]>='A' && n[i]<='F'){
            ans+=x*(n[i]-'A'+10);
        }
        x*=16;
    }
    return ans;
}

int DecimalToBinary(int n ){
    int x=1;
    int ans=0;
    while (x<=n)
    {
        x*=2;
    }
    x/2;
    
}
int main()
{
    // int n;
    // cin >> n;
    // cout<<BinaryToDecimal(n);// for binary to the Decimal conversion
    // cout << OctalToDecimal(n);  //For Octal To Decimal Conversion

    string n;
    cin >> n;
    // cout << hexadecimalToDecimal(n) << endl; //For HexaDecimal To DEcimal Conversion
    // But we only have 0 to 9 in decimal number system therefore we use STL in here
    // but using the return type as integer bcz we can put decimal in an integer after the conversion
    cout<<DecimalToBinary(n)<<endl;
    return 0;
}



// time complexity of a program depends on the number of the inputs