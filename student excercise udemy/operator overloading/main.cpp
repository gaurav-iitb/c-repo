//
//  main.cpp
//  operator overloading
//
//  Created by Gaurav Sharma on 26/09/21.
//

#include <iostream>
using namespace std;
#include <string>

class complex{
private:
    int real,img;
public:
    
    complex(int r=0,int i=0){
        real=r;
        img=i;
    }
    
    complex add(complex c){
        complex t;
        t.real=real+c.real;
        t.img=img+c.img;
        return t;
    }
    
//    complex operator+(complex c){
//        complex t;
//        t.real=real+c.real;
//        t.img=img+c.img;
//        return t;
//    }
//
    friend complex operator+(complex c4,complex c5);
    
    void display(){
        cout<<real<<"+i"<<img<<endl;
    }
    
    
};
int main() {
  
    complex c1(2,5),c2(3,7),c3;
    
    c3=c1.add(c2);
    c3.display();
    c3=c1+c2;
    c3.display();
    c3=operator+(c1,c2);
    c3.display();
    
   
    return 0;
}

complex operator+(complex c4,complex c5)
{
     complex t;
     t.real=c4.real+c5.real;
     t.img=c4.img+c5.img;
     return t;
 }
