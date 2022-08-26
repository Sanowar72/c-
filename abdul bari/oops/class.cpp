#include<iostream>
using namespace std;

class rectangle{
    public:
    int l,b;

    int area(){
        return l*b;
    }

    int perimeter(){
        return 2*(l+b);
    }
};

int main(){
    rectangle r1;
    r1.l=10;
    r1.b=20;
    cout<<"area of rectangle is : "<<r1.area()<<endl;
    cout<<"perimeter of rectangle is : "<<r1.perimeter()<<endl;
}