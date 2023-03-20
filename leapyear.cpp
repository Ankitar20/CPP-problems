
// #include<iostream>
// using namespace std;
// void printnnoofnextleapyear(int year,int n){
//      int count=0;
//     while(count!=n){
//         year=year+1;
//         if((year%400==0)||(year%4==0&&year%100!=0)){
           
           
//              count++;
//              cout<<year<<endl;
           
//         }
       
//     }
// }
// int main(){
// printnnoofnextleapyear(2020,15);
// return 0;
// // }
// #include<iostream>
// using namespace std;
// void nnoofyears(int s,int e){
//     for(int i=s;i<=e;i++){
//     if((i%400==0)||(i%4==0&&i%100!=0)){
//         cout<<i<<endl;

//     }
// }
// }
// int main(){
//     nnoofyears(2000,2050);
// // }
// #include<iostream>
// using namespace std;
// int main(){
//     int count=1;
//     int i=2;
//     int flag;
//     while(count<=50){
//         flag=0;
//       for(int j=2;j<i;j++) {
//         if(i%j==0){
//             flag=1;
//             break;
//         }
//       } 
//       if(flag==0){
//         cout<<i<<" ";
//         count++;
//       }
//       i++;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

void replaceSpaces(string str)
{
	//string rep = "%20";
	for(int i=0 ; i<str.length() ; i++)
	{
		if(str[i] == ' ')
			str.replace(i,1,"%20");
	}
	cout<<str;
}

int main()
{
	string str = "Mr John Smith";
	replaceSpaces(str);

	return 0;
}
