#include<iostream>
using namespace std;
int main(){

    char button;
    cout<<"input character";
    cin>>button;

    switch (button)
    {
    case 'a':
       cout<<"hello a"<<endl;
       break;
    case 'b':
       cout<<"hello b"<<endl;
       break;
       case 'c':
       cout<<"hello c"<<endl;
       break;
       case 'd':
       cout<<"hello d"<<endl;
       break;
    default:
        cout<<"didnot matched"<<endl;
        break;
    }





    return 0;
}