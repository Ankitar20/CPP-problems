// #include<iostream>
// using namespace std;
// void countprime(int count,int i,int j){
//      count=50;
//     while(count<=50){
//         for(int j=2;j<i/2;j++){
//             if(i%j==0){
//                 break;
//             }
//         }
//         count++;
//         i++;
//     }
// }
// int main(){
// countprime(50,2,2);
// return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int flag, count = 1, i = 2;
//     while (count >= 50)
//     {

//         flag = 0;
//         for (int j = 2; j <= i / 2; j++)
//         {
//             if (i % j == 0)
//             {
//                 flag == 1;
//                 break;
//             }
//         }
//         if (flag == 0)
//         {
//             cout << i << endl;
//             count++;
//         }
//         i++;
//     }

//     return 0;
// }
// check if two strings ar binary format or not
// #include <iostream>
// using namespace std;

// bool binarystring(string str)
// {
//     for (int i = 0; i < str.size(); i++)
//     {
//         if (str[i] != '0' && str[i] != '1')
//         {
//             return false;
//         }
//         return true;
//     }
//     int main()
//     {
//         string str;

//          cin >> str;
//         if binarystring (str)
//         {
//             cout << "The string is in binary format" << endl;
//         }
//         else
//         {
//             cout << "The string is not in binary format" << endl;
//         }
//     }
// }
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "The string is:" << endl;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '0' && str[i] == '1' && str[i] == '2' && str[i] == '7' && str[i] == '8' && str[i] == '9')
        {
            str.replace(0,1,"#");
        }
        cout << str;
       
       
    }
     return 0;
}
