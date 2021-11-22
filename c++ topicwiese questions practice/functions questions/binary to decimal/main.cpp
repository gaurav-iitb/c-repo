//
//  main.cpp
//  binary to decimal
//
//  Created by Gaurav Sharma on 02/11/21.
//

#include <iostream>
using namespace std;

int converter(int a){
    int newn;
    int dec=0;
    for(int i=0;a>0;i++){
        newn=a%10;
        for(int j=0;j<=i;j++){
            if(j==0){
                newn*=1;
            }
            else {  newn*=2;}
        }
        dec+=newn;
        a=a/10;
    }
    return dec;
}

int main() {
    int a;
    cout<<"enter no"<<endl;
    cin>>a;
    cout<<converter(a);
    
    
    return 0;
}
