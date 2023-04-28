#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char password[50];
    int a;
    cout<<"Enter your password in uppercase : ";
    cin>>password;
	try{
	for (a = 0; a <= 50; a++){
        if (isupper(password[a]) == 1 ){
            goto y;			
        }if (a == 50){
           throw password;           
        }
    }
	y:
	cout<<"Your password is valid.";	
	}
	catch(...){
	 	cout<<"Try again , Enter valid password.";
	}

    return 0;
}