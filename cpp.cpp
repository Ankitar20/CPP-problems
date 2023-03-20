// #include<iostream>
// using namespace std;
// void reverseanarray(int arr[],int start,int end){
  
    
//         while(start<end){
//         int temp=arr[start];
//          arr[start]=arr[end];
//          arr[end]=temp;
//          start++;
//          end--;

//         }

//     }
   

// void printarray(int arr[], int size)
// {
//    for (int i = 0; i < size; i++)
//    cout << arr[i] << " ";
 
//    cout << endl;
// }
//  int main(){
//     int n;
//   int arr[]={1,2,3,4};
//   printarray(arr,n);
// reverseanarray(arr,0,n-1);
// cout<<"The reversed array is:";
//    printarray(arr,n);
//    return 0;

        
    

// Iterative C++ program to reverse an array
/*
#include <bits/stdc++.h>
using namespace std;

/* Function to reverse arr[] from start to end*/
/*
void rvereseArray(int arr[], int start, int end)
{
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}	

/* Utility function to print an array */
/*
void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";

cout << endl;
}
/*

/* Driver function to test above functions */
/*
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	
	int n = sizeof(arr) / sizeof(arr[0]);

	// To print original array
	printArray(arr, n);
	
	// Function calling
	rvereseArray(arr, 0, n-1);
	
	cout << "Reversed array is" << endl;
	
	// To print the Reversed array
	printArray(arr, n);
	
	return 0;
}*/
// #include <iostream>
// using namespace std;



// int main() {
// 	//code

//   int n=4;
//   int arr[]={1,2,3,4};
//    for(int i=n-1;i>=0;i--){
//        cout<<arr[i];
//    }
   
    
    
//     }
//print first 50 prime numbers
/*#include<iostream>
using namespace std;
int main(){
	int count=1;
    int flag;
	int i=2;
	while(count<=50){
		flag=0;

		for(int j=2;j<i;j++){
			if(i%j==0){
				flag=1;
				break;

			}
		}
		if(flag==0){
			cout<<i<<" ";
			count++;

		}
		i++;

	}
	return 0;

}
*/
//print 1 to n number of prime numbers
/*
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number:"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
	int count=0;
	for(int j=1;j<=i;j++){
		if(i%j==0)
		count++;

	}
	if(count==2){
		cout<<i<<endl;

	}
}

return 0;
}*/
//3.Whether prime or not
/*#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter a number:"<<endl;
cin>>n;
int count=0;
for(int i=1;i<=n;i++){

if(n%i==0){
count++;

}
}
if(count==2){
	cout<<"Number is prime"<<endl;

}

else{
	cout<<"Number is not prime"<<endl;

}


return 0;
}
*/
//4Anagram or not
#include<iostream>
using namespace std;
#define size 256
bool anagramornot(char*str1,char*str2){
	int count1[size]={0};
	int count2[size]={0};
	int i;

	for(i=0;str1 && str2;i++){
       count1[str1[i]]++;
	   count2[str2[i]]++;

	}
	if(str1[i]||str2[i])
	{
        return false;

	}

for(i=0;i<size;i++){
	if(count1[i]!=count2[i])
	return false;

return true;

}
}





int main(){


char str1[] = "RSL";
char str2[] = "RSLAB";
// Function Call
if (anagramornot(str1, str2))
cout << "The two strings are anagram of each other";
else
cout << "The two strings are not anagram of each "
"other";


return 0;
}