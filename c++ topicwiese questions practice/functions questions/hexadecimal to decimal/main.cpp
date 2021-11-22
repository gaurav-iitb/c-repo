//
//  main.cpp
//  hexadecimal to decimal
//
//  Created by Gaurav Sharma on 02/11/21.


// this is very good question

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
using namespace std;

int converter(char *a){
    
    long int no=strlen(a);
    int newn;
    int dec=0;
    for(long int i=no-1;i>=0;i--){
        newn=(a[i]);
        if(newn=='A'){
            newn=10;
        }
        else if(newn=='B'){
            newn=11;
        }
        else if(newn=='C'){
            newn=12;
        }
        
        else if(newn=='D'){
            newn=13;
        }
        else if(newn=='E'){
            newn=14;
        }
        else if(newn=='F'){
            newn=15;
        }
        else{
            newn=newn-48; 
        }
        for(int j=0;j<no-i;j++){
            if(j==0){
                newn*=1;
            }
            else {  newn*=16;}
        }
        dec+=newn;
        
    }
    return dec;

}

int main() {
    char a[80];
    cout<<"enter no"<<endl;
    cin>>a;
//    char A=12;
//    char B=13;
//    char C=14;
//    char D=15;
//    char E=16;
//    char F=17;
    
    cout<<converter(a)<<endl;
    
    
    return 0;
}

