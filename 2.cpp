#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int age;
    cout<<"What is your age? => ";
    cin >> age;
    try{
        if(age<18){
            throw age;
        }
		else{
            cout<<"You are eligible to vote."<<endl;
        }
    }
	catch(int n){
        cout<<"You cannot vote , you are less than 18 years old.";
    }
    return 0;
}