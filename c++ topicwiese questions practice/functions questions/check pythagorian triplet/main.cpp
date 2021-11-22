//
//  main.cpp
//  check pythagorian triplet
//
//  Created by Gaurav Sharma on 02/11/21.
//

int max(int x,int y,int z){
    if(x>y&&x>z){
        return x;
    }
    else if(y>z){
        return y;
    }
    else{
        return z;
    }
}

bool checkpy(int a, int b ,int c){
    if(a*a==b*b+c*c){
        return true;
    }
    else return false;
}

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int x,y,z;
    cout<<" enter three numbers:"<<endl;
    cin>>x>>y>>z;
    int a,b,c;
    a=max(x,y,z);
    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=z;
        c=x;
    }
    else{
        b=x;
        c=y;
    }
    
    if(checkpy(a,b,c)){
        cout<<"these number form pythagorian triplet"<<endl;
    }
    else{
        cout<<"not a pythagorian triplet"<<endl;
    }
    return 0;
}
