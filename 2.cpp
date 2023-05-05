#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin >> age;
    try{
        if(age<18){
            throw age;
        }
		else{
            cout<<"You can vote."<<endl;
        }
    }
	catch(int n){
        cout<<"You cannot vote."<<endl;
        cout<<"Only age equal or above 18 can vote and your age is "<<n<<" therefore you cannot vote."<<endl;
    }
    return 0;
}
