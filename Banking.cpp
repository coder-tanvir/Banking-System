#include<iostream>
#include<cstdio>
using namespace std;

class Bank{
        char name[70];
        char address[70];
        float balance;
        float withdraw=0;
        float deposit=0;
        
    
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
    cout<<"Welcome to the deposit Tab"<<endl;
    float amount;
    cout<<"How Much You want to deposit in $"<<endl;
    cin>>deposit;
    balance=balance+deposit;
}

void Bank::openaccount(){
    cout<<"Let's open an account"<<endl;
    cout<<"Please enter your Name"<<endl;
    cin.ignore();
    cin.getline(name,70);

    cout<<"Please enter your Full Address"<<endl;
    cin.getline(address,70);

    cout<<"Please enter the amount($) you want to deposit"<<endl;
    cin>>balance;   
}

void Bank::withdrawwmoney(){
    cout<<"Welcome to the Money withdrawal tab"<<endl;
    float amount;
    cout<<"How much you want to withdraw"<<endl;
    cin>>withdraw;
    balance=balance-withdraw;
    cout<<"Your balance is"<< balance<<endl;
}

void Bank::accountdetails(){
    cout<<"Name: "<<this->name<<endl;
    cout<<"Address: "<<this->address<<endl;
    cout<<"Your current balance "<<this->balance<<endl;
    cout<<"Your last withdraw "<<this->withdraw<<endl;
    cout<<"Your last deposit "<<this->deposit<<endl;
    cout<<"Your balance is "<< balance<<endl;
}
int main(){
    
Bank obj;
int choice;
cout<<"Enter Menu number"<<endl;
cin>>choice;
    if(choice==1){
        obj.openaccount();
        obj.depositmoney();
        obj.accountdetails();
    } 
return 0;
    
}