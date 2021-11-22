//
//  main.cpp
//  constructors
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
    
    //constructors
    
    Rectangle(int l=0,int b=0){
        setLength(l);
        setBreadth(b);
    
    }
    
    void setLength(int l){
        if(l>=0)
        length=l;
        else cout<<"invalid length";
    }
    void setBreadth(int b){
        if(b>=0)
         breadth=b;
        else cout<<"invalid Breadth";
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    
};
int main() {
    
    Rectangle r(10,5),r1(10),r2(0);
    cout<<r.area()<<endl<<r1.area()<<endl<<r2.area()<<endl;
    
    //  Deep Copy Constructor
    
    
    
    
    return 0;
}
