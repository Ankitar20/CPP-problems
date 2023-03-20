// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void minmax(int arr[],int n){
//  int min, max=arr[0];
//  for(int i=0;i<n;i++){
//     if(arr[i]<min){
//         min=arr[i];
//     }
//     if(arr[i]>max){
//         max=arr[i];
//     }
//  }
//  cout<< min ,max;
// }
// // int main(){
// // int arr[]={34,56,21,37};
// // int n;
// // minmax(arr,n);
// #include<iostream>
// using namespace std;
// void sortarray(int arr[],int n){
//     for(int i=0;i<n;i++){
//     int start=0;
//     int end=n-1;
//     while(start>=end){

//     if(start>end){
//         swap(start,end);
//     }
//     start++;
//     end--;

//     }
//     }
// }
// int main(){
// int arr[]={23,456,6,12};
// int n;
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<endl;

// }
// return 0;
// }

// C++ program to Move All -ve Element At End
// Without changing ordek

// #include <iostream>
// using namespace std;
// class heap
// {
// public:
//     int arr[100];
//     int size;
//     heap()
//     {
//         arr[0] = -1;
//         size = 0;
//     }

//     void insert(int val)
//     {
//         size = size + 1;
//         int index = size;
//         arr[index] = val;
//         while (index > 1)
//         {
//             int parent = (index / 2);
//             if (arr[parent] < arr[index])
//             {
//                 swap(arr[parent], arr[index]);
//                 index = parent;
//             }
//             else
//             {
//                 return;
//             }
//         }
//     }

//     void deletefromheap()
//     {
//         if (size == 0)
//         {
//             cout << "nothing to delete";
//         }
//         arr[1] = arr[size];
//         size--;

//         int i = 1;
//         while (i < size)
//         {
//             int leftindex = 2 * i;
//             int rightindex = ((2 * 1) + 1);

//             if (leftindex < size && arr[i] < leftindex)
//             {
//                 swap(arr[i], leftindex);
//                 i=leftindex;
//             }
//             if (rightindex < size && arr[i] < rightindex)
//             {
//                 swap(arr[i], rightindex);
//                 i=rightindex;
//             }
//             else{
//                 return;
//             }
//         }
//     }
//        void print()
//     {
//         for (int i = 0; i <= size; i++)
//         {
//             cout << arr[i] << endl;
//         }
//     }
//     void heapify(int arr[],int l,int n){

//     }
// };
// int main()
// {
//     heap h;
//     h.insert(50);
//     h.insert(68);
//     h.insert(30);
//     h.insert(45);

//     h.insert(90);
//    h.print();
//     h.deletefromheap();
//     h.print();

//     return 0;
// }
// // Baalanced Parenethesis
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// bool isValid(string s)
// {
//     int n = s.size();
//     stack<char> st;
//     int ans = true;
//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] == '{' || s[i] == '(' || s[i] == '[')
//         {
//             st.push(s[i]);
//         }
//         else if (s[i] == '}')
//         {
//             if (!st.empty() && st.top() == '{')
//             {
//                 st.pop();
//             }
//             else
//             {
//                 ans = false;
//                 break;
//             }
//         }
//           else if (s[i] == ')')
//         {
//             if (!st.empty() && st.top() == '(')
//             {
//                 st.pop();
//             }
//             else
//             {
//                 ans = false;
//                 break;
//             }
//         }
//           else if (s[i] == ']')
//         {
//             if (!st.empty() && st.top() == '[')
//             {
//                 st.pop();
//             }
//             else
//             {
//                 ans = false;
//                 break;
//             }
//         }
//     }
  

//     if (!st.empty())
//     {
//         return false;
//     }
//     else
//     {
//         return ans;
//     }
// }

// int main()
// {
//     string s = "{([])}";
//     if (isValid(s))
//     {
//         cout << "valid case";
//     }
//     else
//     {
//         cout << "Invalid case";
//     }

//     return 0;
// }
//Balanced string
// clude<iostream>
// using namespace std;
// int reversestring(string s){
//     int n=s.size();
//     for(int i=n;i>=0;i--){
//         cout<<s[i];

//     }
// }
// int main(){
//  string s="abc";
//  reversestring(s);
// //  for(int i=0;i<s.size();i++){
// //       cout<<s[i];
// //  }
// return 0;
// }#in
//Multiplying two strings
// #include<iostream>
// using namespace std;
// int multiplcationofstr(string s1 , string s2){
//     cout<<s1*s2;

// }
// int main(){

// return 0;
//
// //pallindrome
// #include<iostream>
// using namespace std;
// bool ispallindrome(string str){
//     int n=str.size()-1;
//     for(int i=0;i<n;i++ ){
//         if(str[i]!=str[n-i]){
//         return false;
//         }
      
// }
  

        
//         return true;
    
// }
// int main(){
//  string str="aba";
//  if (ispallindrome(str)){
//    return true;
                                                                                                           
//  }
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//     cin>>arr[i];
//    }

    
//     for(int i=0;i<n;i++){
//         if(arr[i]%2==0){
//             cout<<"The even elements are:"<<arr[i]<<endl;

//         }
//         if(arr[i]%2!=0){
//             cout<<"Odd elements are:"<<arr[i]<<endl;
//         }

//     }
//     return 0;
// }
#include<iostream>
using namespace std;
void reverseanarray(int arr[],int n){
    int start, end;
    for(int i=0;i<n;i++){
        while(start>=end){
        int temp=arr[start];
         arr[start]=arr[end];
         arr[end]=temp;
         end--;

        }

    }
   
}
 int main(){
    int n;
  int arr[]={1,2,3,4};

    reverseanarray(arr,4);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

        
    }