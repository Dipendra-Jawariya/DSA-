// Euclid Algorithm
#include<iostream>
using namespace std;
int GCD (int a ,int b){
    if (a==0)
    {
        return b;
    }
    if (b==0)
    {
        return a;
    }
    
    // if (a==b)
    // {
    //     return a ;
    // }
    // if (a>b)
    // {
    //     return 
    // }
    
    return GCD(b,a%b);
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<GCD(a,b);
    return 0;
}



// // GCD -greatest Common Divivsor
// // gcd (10 15) = 5   //5 is the largest number which divides both 10 and 15
// // 10%5=0
// // 15%5=0

// //  gcd<=min(10,15)

// #include <iostream>
// using namespace std;
// int GCD(int a, int b)
// {
//     int res = 1;
//     for (int i = 1; i < min(a, b); i++)
//     {
//         if (a % i == 0 && b % i == 0 && i > res)
//         {
//             res = i; 
//         }
//     }
//     return res;
// }
// int main()
// {
//     int a, b;
//     cin >> a;
//     cin >> b;
//     cout << GCD(a, b);

//     return 0;
// }