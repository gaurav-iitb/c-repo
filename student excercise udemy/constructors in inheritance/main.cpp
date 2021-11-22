//
//  main.cpp
//  constructors in inheritance
//
//  Created by Gaurav Sharma on 27/09/21.
//

#include <iostream>
using namespace std;
#include <string>

class Rectangle{
    
private:
    int length;
    int breadth;
public:
    Rectangle(){
        length=1;
        breadth=1;
    }
    Rectangle(int l ,int b){
        length=l;
        breadth=b;
    }
    int getlength(){
        return length;
    }
    int getbreadth(){
        return breadth;
    }
};

class cuboid:public Rectangle{
private:
    int height;
public:
    
    cuboid(){
        height=1;
    }
    cuboid(int h){
        height=h;
    }
    cuboid(int l,int b,int h):Rectangle(l,b){
        height=h;
    }
    
    int volume(){
        return getlength()*getbreadth()*height;
    }
    
};




int main() {
    
    cuboid c1,c2(3),c3(4,5,7);
    cout<<c1.volume()<<endl;
    cout<<c2.volume()<<endl;
    cout<<c3.volume()<<endl;
    return 0;
}
