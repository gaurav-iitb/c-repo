//
//  main.cpp
//  pointer to an object
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
   int area(){
        return length*breadth;
        
    }
    void setLength(int l){
        length=l;
    }
    void setBreadth(int b){
        breadth=b;
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    
};
int main() {
 
    Rectangle r;
//    r.length=10;
//    r.breadth=20;
    r.setLength(10);
    r.setBreadth(20);
    Rectangle *p;  // pointer to an object
    p=&r;
   cout<< p->getLength()<<endl;
    cout<<p->area()<<endl;
    // pointer to an object in heap
    
    Rectangle *a;
    a=new Rectangle;
    Rectangle *q = new Rectangle;
    
  
    p->setLength(10);
    p->setBreadth(15);
    cout<<r.area();
    return 0;
}
