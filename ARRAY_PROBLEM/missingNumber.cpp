// To find the missing number of the array(WITH SUM FORMULA)

//   METHOD 1
// ALGO=>
// First we find the sum of all the numbers & get the missing number  by  substracting individual array element from the sum
// #include <iostream>
// using namespace std;
// int getMissingNo(int a[], int n)
// {
//     int i, total;
//     total = (n + 1) * (n + 2) / 2;//here i am using the sum of n natural number [n*(n+1)/2 ====> (n+1)*(n+2)/2]
//     for (int i = 0; i < n; i++)
//     {
//         total -= a[i];
//     }
//     return total;
//     // The time complexity of this function is big o of n
// }
// int main()
// {
//     int a[] = {1, 2, 4, 5, 6};
//     int miss = getMissingNo(a, 5);
//     cout << miss;
//     return 0;
// }





//  METHOD 2(USE XOR)
/*XOR all the array element ,let the result of XOR be X1.
XOR all numbers from 1 to n,let XOR be x2
XOR of x1 and x2 gives the missing number*/

