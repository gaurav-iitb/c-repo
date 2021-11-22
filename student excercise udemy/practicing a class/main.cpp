//
//  main.cpp
//  practicing a class
//
//  Created by Gaurav Sharma on 24/09/21.
//

#include <iostream>
using namespace std;
#include <string>

class rect{
public:
    int length ;
    int breadth ;
    
    int area(){
        return length*breadth;
        
    }
    int perimeter(){
        return 2*(length+breadth);
    }
    
};
int main() {
    rect r1;
    r1.length=10;
    r1.breadth=20;
    
    cout<<r1.area();
    

                                                                                                                                                                                                                                                                                                                                                                         
}
