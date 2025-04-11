// # include<iostream>
// using namespace std;
// int main(){
//     string s;
//     cout<<"enter your website name:";
//     cin>>s;
//     if(s=="flipkart"){
//         cout<<"enter product or service:";
//         cin>>s;
//         if(s=="product"){
//             cout<<"enter cloths or shoes:";
//             cin>>s;
//             if( s=="clothes"){
//                 cout<<"2000";
//             }
//             else if(s=="shoes"){
//                 cout<<"1000";
//             }

//             else{
//                 cout<<"invalid";
//             }

//         }
//         else if(s=="service"){
//             cout<<"not available";
//         }
//         else{
//             cout<<"invalid";
//         }

//     }
//     else{
//         cout<<"invalid";

//     }
// }
# include <iostream>
using namespace std;
int main (){
    string s; 
    int num;
    cout<<"enter your mobile name:";
    cin>> s;
    if(s=="realme"){
        cout<<"enter the salary: ";
        cin>>num;
        if(num>=0 && num<=30000){
            cout<<"enter the mobile name 12pro or 12promx:";
            cin>>s;
            if(s=="12pro"){
                cout<<"price is a:20000";
                cout<<"on 5% rate price will:"<<(20000*5)/100+20000;
                
                cout<<" we to pay on monthy  installment:"<<((20000*5/100)+20000)/24;
            }
            else if(s=="12promx"){
                cout<<"price is a :30000";          
                      cout<<"on 5% rate price will:"<<(30000*5)/100+30000;
                
                cout<<"we to pay on monthy  installment:"<<((30000*5/100)+30000)/24;

            }
            else{
                cout<<"invalid";
            }


        }
        else if(num>=30000&& num<=70000){
            cout<<"enter the mobile name 13pro or 13promx:";
            cin>>s;
            if (s=="13pro"){
                cout<<"price is a :40000";
                cout<<"on 10% rate price will:"<<(40000*10)/100+40000;
                
                cout<<" we to pay on monthy  installment:"<<((40000*10/100)+40000)/12;

            }
            else if (s=="13promx"){
                cout<<"price is a :50000";
                cout<<"on 10% rate price will:"<<(50000*10)/100+50000;
                
                cout<<"we to pay on monthy  installment:"<<((50000*10/100)+50000)/12;

            }
            else{
                cout<<"invalid";
                                                                                                                                                 }

        }
        else if(num>=70000){
            cout <<"enter the mobile name 14pro or 14promx";
            cin>>s;
            if (s=="14pro"){
                cout<<"price is a 50000:";
                cout<<"on 15% rate price will:"<<(50000*15)/100+50000;
                
                cout<<"we to pay on monthy  installment:"<<((50000*15/100)+50000)/6;

            }
            else if (s=="14promx"){
                cout<<"price is a 60000:";
                cout<<"on 15% rate price will:"<<(60000*15)/100+60000;
                
                cout<<" we to pay on monthy  installment:"<<((60000*15/100)+60000)/6;

            }
            else{
                cout <<"invalid";
            }

        }
        else{
            cout<<"invalid";
        }

    }
    else{
        cout<<"invalid";
    }
}