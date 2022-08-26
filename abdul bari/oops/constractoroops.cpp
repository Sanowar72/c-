#include<iostream>
using namespace std;

class rectangle
{
private:
    /* data */
    int l,b;
public:


//   rectangle(){
//       l=1;
//       b=1;
//   }

  rectangle(int x=1,int y=1){
     setl(x);
     setb(y);
  }

  rectangle(rectangle &r){
      l=r.l;
      b=r.b;
  }

 void setl(int x){
     if(x<0){
         l=1;
     }else{
     l=x;
     }
 }

 void setb(int y){
     if(y<0){
         b=1;
     }else{
     b= y;
     }
 }

 int getl(){
     return l;
 }

 int getb(){
     return b;
 }

   int area(){
       return l*b;
   }
   int perimeter(){
       return 2*(l+b);
   }
};




int main(){

   rectangle r1(10,5);
   rectangle r(r1);


//    r1.setl(10);
//    r1.setb(4);

   cout<<"area of r2 "<<r.area()<<endl;

   cout<<"r1 detail "<<r1.getl()<<"  "<<r1.getb()<<endl;





    return 0;

}