//
//  main.cpp
//  exception handling constructor
//
//  Created by Gaurav Sharma on 04/10/21.
//

#include <iostream>
using namespace std;
#include <string>

int main() {
    
    int a=10,b=1,c;
    try{
        if(b==0)
            throw 1;
        c=a/b;
        cout<<c;
    }
    catch(int f){
        cout<<"error dividing the number by zero "<<"error code"<<f<<endl;
    }
    cout<<"bye"<<endl;
    return 0;
}
