//
//  main.cpp
//  polymorphism
//
//  Created by Gaurav Sharma on 29/09/21.
//

#include <iostream>
using namespace std;
#include <string>

class base{
public:
   virtual void fun(){  // here use of virtual is very important to understand
        cout<<"fun of base";
    }
};

class derived:public base{
public:
    void fun(){
        cout<<"fun of derived";
    }
};
int main() {
    
base*p=new derived;//this shows that p is pointing on an object of the derived class
    // we can write above thing also by
    // derived d;
    // and then
    // base*p = &d;
    p->fun();
    return 0;
}
