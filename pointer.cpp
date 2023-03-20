// // // #include<stdio.h>
// // // int main()
// // // {
// // //    int a;
// // //    char *x;
// // //    x = (char *) &a;
// // //    a = 512;
// // //    x[0] = 1;
// // //    x[1] = 2;
// // //    printf("%dn",a);
// // //    return 0;
// // // }
// // #include <iostream>
// // using namespace std;
// // void peakelement(int a[], int n)
// // {
// //    for (int i = 0; i < n; i++)
// //    {
// //       for (int j = 1; j < n; j++)
// //       {
// //          if (a[i] > a[j])
// //          {
// //             cout << a[i] << endl;
// //          }
// //       }
// //    }
// // }
// // int main(){
// //    int a[]={1,2,3};
// //    int n=3;
// //      peakelement( a, n);
// // }
// // #include<iostream>
// // using namespace std;
// // void reversearray(int a[],int n){
// //    for(int i=n-1;i>=0;i--)
// //      cout<<a[i]<<endl;
// // }
// // int main(){
// // int n=4;
// // int a[]={1,2,3,4};
// // reversearray(a,n);

// // }
// #include <iostream>
// using namespace std;
// // void sortarray(int a[],int n){
// //    for(int i=0;i<n;i++){
// //       for(int j=1;j<n;j++){
// //          if(a[i]>a[j]){
// //             int temp=0;
// //             temp=a[i];
// //             a[i]=a[j];
// //             a[j]=temp;
// //               cout<<"the array in ascending order is:"<<endl;
// //   for(int i=0;i<n;i++)
// //   cout<<a[i]<<endl;

// //          }

// //       }
// //    }

// // }
// int main()
// {
//    int n = 4;

//    int a[] = {1, 5, 3, 2};
//    for (int i = 0; i < n; i++)
//    {
//       for (int j = i+1; j < n; j++)
//       {
//          if (a[i] > a[j])
//          {
//          int temp;
//             temp= a[i];
//            a[i]=a[j];
//            a[j]=temp;

//          }
//       }
//    }

//    cout<<a[n];
//  }

// #include<iostream>
// using namespace std;

// bool checkYear(int year){
// if(year%400==0){
// cout<<true<<endl;
// }
// if(year%100==0){
// cout<<false<<endl;
// }
// if(year%4==0){
// cout<<true<<endl;
// }
// else{
// cout<<false<<endl;
// }
// }
// int main(){
// int year=2000;
// checkYear(2000);
// return 0;
// }
// is prime

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    if (n == 1 || n == 0);
    return false;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{

    int N = 100;
    for (int i = 1; i <= N; i++)
    {
        if (isprime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}
