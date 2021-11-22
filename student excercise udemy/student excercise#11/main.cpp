//
//  main.cpp
//  student excercise#11
//
//  Created by Gaurav Sharma on 29/09/21.
//

#include <iostream>
using namespace std;
#include <string>

class shape{
public:
    virtual void area()=0;
    virtual void perimeter()=0;
};

class rectangle:public shape{
private:
    int length;
    int breadth;
public:
    rectangle(int l=1,int b=1){
        length=l;
        breadth=b;}
    
    void area(){
        cout<<"area of the rectangle is"<<length*breadth<<endl;
    }
    void perimeter(){
        cout<<"perimeter of rectangle is "<<2*(length+breadth)<<endl;
    }
};

class circle:public shape{
private:
    int radius;
public:
    circle(int r){
        radius=r;
    }
    void area(){
        cout<<"area of circle is "<<3.14*radius*radius<<endl;
    }
    void perimeter(){
        cout<<"perimeter of circle is "<<2*3.14*radius<<endl;
    }
};
int main() {
    
    shape *sh;
    sh=new rectangle(10,5);
    sh->area();
    sh->perimeter();
    circle c(10);
    sh=&c;
    sh->area();
    sh->perimeter();
    return 0;
}
