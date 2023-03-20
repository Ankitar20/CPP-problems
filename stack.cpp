// #include <iostream>
// using namespace std;
// #define n 100
// class stack
// {
//     int *arr;
//     int top;

// public:
//     stack()
//     {
//         arr = new int[n];
//         top = -1;
//     }
//     void push(int x)
//     {
//         if (top == n - 1)
//         {
//             cout << "Stack overflow" << endl;
//             return;
//         }
//         top++;
//         arr[top] = x;
//     }
//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << "No element to pop" << endl;
//             return;
//         }
//         top--;
//     }
//     int Top()
//     {
//         if (top == -1)
//         {
//             cout << "No element to pop" << endl;
//             return -1;
//         }
//         return arr[top];
//     }
//     bool empty()
//     {
//         return top == -1;
//     }
// };
// int main()
// {
//     stack st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     cout << st.Top() << endl;
//     st.pop();
//     cout << st.Top() << endl;
//     st.pop();
//     st.pop();
//     st.pop();
//     cout << st.empty() << endl;
//     return 0;
// }
/*
#include<iostream>
#include<stack>
using namespace std;
void reverseSentence(string s){
    stack<string>st;
    for(int i=0;i<s.length();i++){
        string word=" ";
        while(s[i]!=' '&& i<s.length()){
            word+=s[i];
            i++;

        }
        st.push(word);

    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
  }
  cout<<endl;

}
int main(){
  string s="Hey, how are you doing?";
  reverseSentence(s);

return 0;
}*/
//reverse  a stack using dot
// #include<iostream>
// #include<stack>
// using namespace std;
// void reversestring(string s){
//   stack<string>st;
//    int n=s.length();
//    string S=" ";
//   for(int i=0;i<n;i++){
    
//     if(s[i]=='.'){
//      S+=s[i];
//      st.push(S);
//     }

//   }
//       S=" ";
//   string str=" ";
//   for(int i=0;i<str.length();i++){
//    str +=S;
//    cout<<

//   }
// }
//Patterns
// #include<iostream>
// using namespace std;
// int main(){
//   int r;
//   cin>>r;
//   int c;
//   cin>>c;
//   for( int i=1;i<=r;i++){
//     for(int j=1;j<=c;j++){
//       cout<<"*";
//   }
//   cout<<endl;
  
// }
// }
// #include<iostream>
// using namespace std;
// int main(){
//   int c;
//   int r;
//   cin>>r;
//   cin>>c;
// for(int i=1;i<=r;i++)
//     for(int j=1;j<=c;j++){
//     cout<<"*";
//     }
//     cout<<endl;
//   }

//fibbonacci series
//0 1 1 2 3 5 8 13
// #include<iostream>
// using namespace std;
// int main(){
// int t1=0;
// int n;
// int t2=1;
// int nextterm=0;

// cout<<"Enter the number of terms :";
// cin>>n;
// cout<<"the fibbonacci series is:";





// for(int i=1;i<=n;i++){
//   if(i==1){
//     cout<<t1<<" ";
//     continue;
//   }
//   if(i==2){
//     cout<<t2<<" ";
//     continue;

//   }

//     nextterm=t1+t2;
//     t1=t2;
//     t2=nextterm;
//     cout<<nextterm<<" ";
//   }
 
// } 

// #include<iostream>
// using namespace std;
// int binarysearch(int arr[], int n ,  int key){
//   int s=0;
//   int e=n;
//   while(s<=e){
//   int mid=s+e/2;

//     if(arr[mid]== key){
//     return mid;

//     }
//     else if(arr[mid]>key){
//       e=mid-1;

//     }
//      else{
//       s=mid+1;
//      }
//      return -1;

//  }


// }

// int main(){
//   int n;
//   cin>>n;

//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin>>arr[i];

//   }
//     int key;
//   cin>>key;

//   cout<<binarysearch(arr,n,key);
// }


// #include<iostream>
// using namespace std;
// int binarysearch(int arr[],int n,int key){
//   int s=0;
//   int e=n;
 


// while(s<=e){
//    int mid=(s+e)/2;
//   if(arr[mid]==key)
//   {
//     return mid;
//   }
//   else if(arr[mid]>key)
//   {
//     e=mid-1;
//   }
//   else{
//     s=mid+1;

//   }
 

// }

//    return -1;

// }
// int main(){

// int n;
// cout<<"enter the n:"<<endl;
// cin>>n;
// int arr[n];
// cout<<"Enter the array:"<<endl;
// for(int i=0;i<n;i++){
//   cin>>arr[i];

// }

// int key;
// cout<<"Enter the key:"<<endl;
// cin>>key;


// cout<<binarysearch(arr,n,key);



// }

//Print first 50 prime numbers 
















































