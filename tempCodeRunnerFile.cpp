#include<iostream>
#include<cstdio>
using namespace std;

class Bank{
    private:
        string name;
        string address;
        
};

int main(){
    printf("How about that");
    char name[100];
    cout<<"Please Enter your name"<<endl;
    cin.getline(name,100);
    cout<<"Your name is"<< name<<endl;
}