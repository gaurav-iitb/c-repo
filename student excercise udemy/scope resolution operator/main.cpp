//
//  main.cpp
//  scope resolution operator
//
//  Created by Gaurav Sharma on 25/09/21.
//

#include <iostream>
using namespace std;
#include <string>

class Rectangle{
private:
    int length;
    int breadth;
public:
    Rectangle();
    Rectangle(int l , int b);
    Rectangle(Rectangle &r);
    void setLength(int l);
    void setBreadth(int b);
    int getLength();
    int getBreadth();
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};

int main() {
    Rectangle r(5,5);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    if(r.isSquare()){
        cout<<"It is a square"<<endl;
    }
    
    return 0;
}

Rectangle::Rectangle(){
    setLength(0);
    setBreadth(0);
}

Rectangle::Rectangle(int l,int b){
    setLength(l);
    setBreadth(b);
}

Rectangle::Rectangle(Rectangle &r){
    length= r.length;
    breadth=r.breadth;
}

void Rectangle::setLength(int l){
    length=l;
}

void Rectangle::setBreadth(int b){
    breadth=b;
}

int Rectangle::getLength(){
    return length;
}
int Rectangle::getBreadth(){
    return breadth;
}

int Rectangle::area(){
    return length*breadth;
}
int Rectangle::perimeter(){
    return 2*(length+breadth);
}

bool Rectangle::isSquare(){
    if(length==breadth){
        return true;
    }
    else
        return false;
}

Rectangle::~Rectangle(){
    cout<<"Rectangle destroyed"<<endl;
}
