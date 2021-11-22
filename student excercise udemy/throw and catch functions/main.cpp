//
//  main.cpp
//  throw and catch functions
//
//  Created by Gaurav Sharma on 04/10/21.
//

#include <iostream>
using namespace std;
#include <string>

int division(int x ,int y){
    if(y==0)
        throw 12;
    return x/y;
}
int main() {
    int a=10,b=0,c;
    try{
        c=division(a,b);
        cout<<c;
    }
    catch(int j){
        cout<<"division by zero"<<endl;
    }
    cout<<"bye";
    return 0;
}
