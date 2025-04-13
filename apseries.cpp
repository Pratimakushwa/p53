// # include<iostream>
// using namespace std;
// int main(){
//     int first, n, d , ans;
//     cout<<"enter the first number";
//     cin>>first;
//     cout<<"enter the nth number";
//     cin>>n;
//     cout<<"enter the difference of a number";
//     cin>>d;
//     for(int i = 0; i<n;i++){
//       ans = first + i*d;
//       cout<<ans<<"\t";


//     }
    

// }
// # include<iostream>
// using namespace std;
// int main(){
//     int a, n, r, ans;
//     cout<<"enter the first number";
//     cin>>a;
//     cout<<"enter the nth number";
//     cin>>n;
//     cout<<"enter the multiply of a number";
//     cin>>r;
//     for(int i = 0; i<n;i++){

//     }
    

// }
// # include<iostream>
// using namespace std;
// int main (){
//     int a,b, hcf;
//     cout<<"enter a number";
//     cin>>a;
//     cout<<"enter a number";
//     cin>>b;
//     int minNum = (a<b)?  a:b;
//     for(int i = 1;i<minNum;i++){
//         if (a%i==0&& b%i==0){
  //    hcf = i;
//            
        
//         }
//     }
 //cout<<hcf;
 
// }
// # include<iostream>
// using namespace std;
// int main(){
//     int sn = 6;
//     int ln = 18;
//     int hcf;
//     for(int i = 1; i<sn; i++){
//         if(sn%i==0&& ln%i==0){
//             hcf = i;
//         }
//     }
//     cout<<hcf;
// }
// # include<iostream>
// using namespace std;
// int main(){
//     int sn = 6;
//     int ln = 17;
//     int lcm;
//     for( int i=ln; ;i=i+ln){
//         if(i%sn==0&& i%ln==0){
//             lcm = i;
//             break;
//         }

//     }
//     cout<<lcm;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int num ,first ,last , temp;
//     cout<<"enter the number ";
//     cin>>num;
//     temp = num;
//     last = num %10;
//     while(temp>=10){
//         temp =temp/10;
//         first = temp;
//     }
//     cout<<first+last;
// }

// # include<iostream>
// using namespace std;
// int main(){
//   int num , digit;
//   cout<<"enter a number";
//   cin>>num;
//   while(num>0){
//     digit = num%10;
//     cout<<digit;
//     num = num/10;
    
//   }
  

// # include<iostream>
// using namespace std;
// int main (){
//   int num , digit , sum =  1;
//   cout<<"enter the number";
//   cin>>num;
//   while(num>0){

//     digit = num%10;
//     sum = sum * digit;
//     num = num/10;
  

//   }
//   cout<<sum;
// }

// # include<iostream>
// using namespace std;
// int main(){
//   int num,digit ,reverse =0;
//   cout<<"enter the number";
//   cin>>num;
//   while(num>0){
//     digit = num%10;
//   reverse= reverse*10 + digit;
//   num = num/10;
  

//   }
// cout<<reverse;
 
// }
// # include<iostream>
// using namespace std;
// int main(){
//   int num, add=0;
//   cout<<"enter the number ";
//   cin>>num;
//   for(int i= 1 ; i<=num; i++){
//     add = add+i;
//   }
//   cout<<add;
// }
// #include<iostream>
// using namespace std;
// int main(){
//   int  num, fact= 1;
//   cout<<"enter a number";
//   cin>>num ;
//   for(int i = 1; i<=num;i++){
//     fact= fact *i;

//   }
//   cout<<fact;

// }

# include<iostream>
using namespace std;
int main(){
  int num, digit, temp,reverse  = 0 ;
  cout<<"enter the number";
  cin>> num;
  temp = num;
  while(num>0){
    digit= num%10;
    reverse= reverse*10 +digit;
    num = num/10;
  }
    if (temp == reverse){
      cout<<"palindrom";
    }
    
  else{
  cout<<"not a palindrom";
}
}