// #include<iostream>
// using namespace std;
// int main(){
//     int num; 
//     cout<<"enter the number";
//     cin>>num;
//     int digit;
//     int reverse = 0;
//     while( num>0){
//         digit= num%10;
//         reverse = reverse*10+digit;
//         num = num/10;
//     }
//     cout<<reverse<<"\t";
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int num,temp; 
//     cout<<"enter the number";
//     cin>>num;
//     temp = num;

//     int digit;
//     int reverse = 0;
    
//     while( num>0){
//         digit= num%10;
//         reverse = reverse*10+digit;
//         num = num/10;
//     }

//     if(temp==reverse){
//         cout<<"the number is palindrom";
//     }
//     else{
//         cout<<"the number is not palindrom"; 
//     }
// }

// # include<iostream>
// using namespace std;
// int main (){
//     int num, digit , sum = 0;
//     cout<<"enter the number";
//     cin>>num;
//     while(num>0){
//     digit = num%10;
//     sum =sum +digit;
//     num = num/10;
    
// }
// cout<<sum;

    
// }

// # include<iostream>
// using namespace std;
// int main(){
//     int n,add= 0;
//     cout<<"enter a number";
//     cin>>n;
//     for(int i = 1; i<=n; i++){
//         add= add+i;
//     }
//     cout<<add;
// }
// # include<iostream>
// using namespace std;
// int main(){
//     int n,fact= 1;
//     cout<<"enter a number";
//     cin>>n;
//     for(int i = 1; i<=n; i++){ 
//         fact= fact*i;
//     }
//     cout<<fact;
// }
// # include <iostream>
// using namespace std;
// int main(){
//     int num, digit, temp,sum = 0;
//     cout<<"enter the number";
//     cin>>num;
//     temp = num;
//     while(num>0){
//         digit = num% 10;
//         sum = sum + digit * digit* digit;
//         num = num/10;

//     }

//     if(temp==sum){
//         cout<<"armstrong";
//     }
//     else{
//         cout<<"not armstrong";
//     }
// }
// # include <iostream>
// using namespace std;
// int main(){
//     int num ,temp,digit,reverse = 0;
//     cout<<"enter the number:";
//     cin>>num;
//     temp = num;
//     while(num>0){
//         digit = num%10;
//         reverse =  reverse +digit*digit*digit;
//         num = num/10;
//     }
//     if(temp==reverse){
//         cout<<"Armstrong";
//     }
//     else{
//         cout<<"not armstrong";
//     }
// }

// # include<iostream>
// using namespace std;
// int main(){
//     int num , fact = 1; 
//     cout<<"enter the number";
//     cin>>num;
//     for(int i = 1 ; i<=num; i++){
//      fact = fact*i;
//     }
//     cout<<fact;
// }

// # include<iostream>
// using namespace std;
// int main(){
//     int num,digit, max=0;
//     cout<<"enter the number";
//     cin>>num;
//     while(num>0){
//         digit = num%10;
        
//         if (digit>max){
//             max = digit;
            
//             }
//         num = num/10;
            
//      }
//     cout<<max;
        
// } 
     


#include<iostream>
using namespace std;
int main (){
    int num,digit, count = 0;
    cout<<"enter the number";
    cin>>num;
    while(num>0){
        
         num= num/10;
        count++;
    }
    cout<<count;

}
