// #include <iostream>
// using namespace std;

// int sum(int arr[], int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         sum += arr[i];
    


//     }
//       return sum;
// }
// int main()
// {
  
//     int arr[] = {1, 2, 3, 4, 5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout << "the sum is"<<sum( arr, n);
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     printf("Geeks");
//     cout<<endl;
//     printf("For");
//     cout<<endl;
//     printf("Greeks");
//     cout<<endl;
    
// }
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// using namespace std;
// void swap(int *a, int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;

// }
// int main(){
//     int a=5 ;
//     int b=6;
//     cout<<"a and b are:"<<a<<endl<<b;
//     cout<<endl;
//      swap(a, b);
//     cout<<"a and b are"<<a<<endl<<b;
//     return 0;
// }

// C++ program to find
// transpose of a matrix
#include <bits/stdc++.h>
using namespace std;
#define M 3
#define N 4
 
// This function stores transpose
// of A[][] in B[][]
void transpose(int A[][N], int B[][M])
{
    int i, j;
    for(i = 0; i < N; i++)
        for(j = 0; j < M; j++)
            B[i][j] = A[j][i];
}
 
// Driver code
int main()
{
    int A[M][N] = { { 1, 1, 1, 1 },
                    { 2, 2, 2, 2 },
                    { 3, 3, 3, 3 } };
 
    // Note dimensions of B[][]
    int B[N][M], i, j;
 
    transpose(A, B);
 
    cout << "Result matrix is \n";
    return 0;
}

    
    
