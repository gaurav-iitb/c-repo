//
//  main.cpp
//  Print Hollow Diamond Inscribed in a Rectangle
//
//  Created by Gaurav Sharma on 29/10/21.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {

    
    int n;
    cout<<"enter the no:"<<endl;
    cin>>n;
    
    int space=((n+1)/2);

    for(int i=1;i<=((n+1)/2);i++){
        space--;
        
        for(int k=1;k<=space;k++){
            cout<<"*";
        }
        
        for(int j=1;j<=(2*i)-1;j++){
            if(j==1||j==(2*i)-1){
                cout<<"*";}
            else cout<<" ";
    }
        for(int k=1;k<=space;k++){
            cout<<"*";
        }
        cout<<endl;
}
    space=0;
    for(int i=((n+1)/2);i>=1;i--){
        space++;
        
        for(int k=1;k<space;k++){
            cout<<"*";
        }
        
        for(int j=1;j<=(2*i)-1;j++){
            if(j==1||j==(2*i)-1){
                cout<<"*";}
            else cout<<" ";
        }
        for(int k=1;k<=space-1;k++){
            cout<<"*";
        }
        cout<<endl;
   }
}
