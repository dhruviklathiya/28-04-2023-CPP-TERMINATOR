#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int a=9;
    int b=0;
    try{
        if(b==0){
            throw b;
        }
        else{
            cout << "Divide : " << a/b << endl;
        }
    }
    catch(int c){
        cout << "Cannot divide by zero : " << c;
    }
    return 0;
}
