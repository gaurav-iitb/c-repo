//
//  main.cpp
//  nested classes
//
//  Created by Gaurav Sharma on 03/10/21.
//

#include <iostream>
using namespace std;
#include <string>
class outer{
public:
    void fun(){
        i.display();
    }
    class inner{
    public:
        void display(){
            cout<<"inner class output";
        }
    };
    inner i;
};
int main() {
    
// outer::inner i; this shows that we can create object of inner classes inside the outer class
    
    outer::fun();
    outer a;
    a.fun();
    return 0;
}
