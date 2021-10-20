#include<iostream>
#include<cstdio>
using namespace std;

class Bank{
    private:
        char name[70];
        char address[70];
        char mother[70];
        char father[70];
        float balance;
        float deposit;
        float withdrawal;

        
};

int main(){
    
    char name[100];
    cout<<"Please Enter your name"<<endl;
    cin.getline(name,100);
    cout<<"Your name is"<< name<<endl;
}