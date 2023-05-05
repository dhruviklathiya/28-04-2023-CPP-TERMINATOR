#include<iostream>
using namespace std;
int main(){
    char password[20];
    int a;
    int counta;
    cout<<"Enter your password in uppercase : ";
    cin>>password;
    char errorsentence[20] = "Not valid password";
	try{
	    for (a = 0; a < 20; a++){
            if(password[a]>='A' && password[a]<='Z')
            {
                counta=1;
            }
        }
        if(counta==1){
            cout<<"Password is valid";
        }
        else{
            throw errorsentence;
        }
	}
    catch(char errorsentence[20])
    {
        cout<<errorsentence<<endl;
    }
	catch(...){
	 	cout<<"Try again , Enter valid password.";
	}

    return 0;
}
