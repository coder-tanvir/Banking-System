#include<iostream>
#include<cstdio>
using namespace std;

class Bank{
        char name[70];
        char address[70];
        float balance;
        float withdraw;
        float deposit;
        
    
    public:
        
        char* getname();
        char* getaddress();
        float getbalance();
        void openaccount();
        void depositmoney();
        void withdrawwmoney();
        void accountdetails();

};
char* Bank::getname( ){
    return name;
}

float Bank::getbalance(){
    return balance;
}

char* Bank::getaddress(){
    return address;
}

void Bank::depositmoney(){
    float amount;
    cout<<"How Much You want to deposit in $"<<endl;
    cin>>deposit;
    balance=balance+deposit;
}

void Bank::openaccount(){
    cout<<"Please enter your Name"<<endl;
    cin.getline(name,100);
    
    cout<<"Please enter your Full Address"<<endl;
    cin.getline(address,70);

    cout<<"Please enter the amount($) you want to deposit"<<endl;
    cin>>balance;   
}

void Bank::withdrawwmoney(){
    float amount;
    cout<<"How much you want to withdraw"<<endl;
    cin>>withdraw;
    balance=balance-withdraw;
}
void Bank::accountdetails(){
    cout<<"Name: "<<this->name<<endl;
    cout<<"Address: "<<this->address<<endl;
    cout<<"Your current balance"<<this->balance<<endl;
    cout<<"Your last withdraw"<<this->withdraw<<endl;
    cout<<"Your last deposit"<<this->deposit<<endl;

}
int main(){
    
    Bank obj1;
    cout<<"-------------------Welcome To Banking App----------------------"<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"Please Choose an option below"<<endl;
    
}