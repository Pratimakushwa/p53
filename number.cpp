# include <iostream>
using namespace std;
int main(){
    int num ;
    string s;
    cout <<"enter your company name:";
    cin>>s;
    if(s=="bajaj"){
        cout<<"enter your salary is 0-20000,20000-30000, 30000";
        cin>>num;
        if(num>0 && num<=20000){
            cout<<"your loan is:"<<15000;
            cout<<"your interest is 5%:"<<(15000*5/100);
            cout<<"we pay monthly installment is :"<<((15000*100)+15000)/12;
        }
    


    else if ( num>20000&&num<=30000){
        cout<<" your loan is a 30000:";
        cout<<"your interest is a 10%:"<<((30000*10/100)+30000);
        cout<<"we pay monthly installment:"<<((30000*10/100)+30000)/12;
    }
    else{
        cout<<"invailed";
    }
}
}