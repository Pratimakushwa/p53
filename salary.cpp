# include <iostream>
using namespace std;
int main (){
    int balance = 10000,password,amount;
    cout<<"enter your password :"<<endl;
    cout<<"1 check for balance:"<<endl;
    cout<<"2 check for withdraw:"<<endl;
    cout<<"3 check for diposite:";
    cin>>password;
   
    
    if(password ==1){
        cout<<balance  ;

    }
    else if (password ==2){
        cout<< "enter your amount : ";
        cin>>amount;
        if( amount> balance){
            cout <<"insufficient balance";
        }
            else if (balance-=amount){
             cout <<"remainning balance:"<<balance;
            }
    }

    else if(password==3){
        cout<<"enter your amount for deposite :";
        cin>>amount;
        balance+=amount;
        cout<<"susscefully deposite:";
        cout<<"your current balance is "<<balance;
    }
    else {
        cout<<"invailed";
    }
}
    

