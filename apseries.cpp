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
# include<iostream>
using namespace std;
int main (){
    int a,b, hcf;
    cout<<"enter a number";
    cin>>a;
    cout<<"enter a number";
    cin>>b;
    int minNum = (a<b)?  a:b;
    for(int i = 1;i<minNum;i++){
        if (a%i==0&& b%i==0){
            cout<<i;
        
        }
    }
 
}

