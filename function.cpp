#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}
int mul(int a, int b){
  int  s=a*b;
    return s;
}

int main(){
    cout<<sum(20,10)<<endl;
    cout<<sum(10,15)<<endl;
    cout<<mul(5,3)<<endl;
    return 0;
}