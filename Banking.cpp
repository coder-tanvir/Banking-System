#include<iostream>
#include<cstdio>
using namespace std;

class Bank{
        char name[70];
        char address[70];
        float balance;
        float deposit;
        float withdrawal;
    public:
        
        char* getname();
        char* getaddress();
        float getbalance();
        void openaccount();

};

void Bank::openaccount(){
    cout<<"Please enter your Name"<<endl;
    cin.getline(name,100);
    
    cout<<"Please enter your Full Address"<<endl;
    cin.getline(address,70);

    cout<<"Please enter the amount($) you want to deposit"<<endl;
    cin>>balance;   
}

char* Bank::getname( ){
    return name;
}

float Bank::getbalance(){
    return balance;
}

char* Bank::getaddress(){
    return address;
}
int main(){
    
    Bank obj1;
    obj1.openaccount();
    cout<< obj1.getname();
    cout<<obj1.getbalance();
    cout<<obj1.getaddress();
    
}