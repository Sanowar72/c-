#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"a is greater no\n";
        }
        else{
            cout<<"c is greater no\n";
        }
    }
    else{
        if(b>c){
            cout<<"b is greater\n";
        }
    
    else{
        cout<<"c is greater";
    }
    return 0;
    }
}