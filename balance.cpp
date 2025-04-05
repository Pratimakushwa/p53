# include <iostream>
using namespace std;
int main(){
    int choice;
    
    
    cout<<"1 . dog\n";
    cout<<"2.cat\n";
    
    cout<<"enter your choice:";
    cin>>choice;
    switch(choice){
        case 1 :
        cout<<"dog says: woof,woof"<<endl;
        break;
        case 2:
        cout<<"cat says: meow,meow"<<endl;
        break;
        default:
        cout<<"invailed";
    }
}
    