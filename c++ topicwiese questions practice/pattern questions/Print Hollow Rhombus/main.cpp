//
//  main.cpp
//  Print Hollow Rhombus
//
//  Created by Gaurav Sharma on 29/10/21.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cout<<"enter the length of the Rhombus:"<<endl;
    cin>>n;
    
    int space=n;
    for(int i=1;i<n+1;i++){
        space--;
            
        for(int k=1;k<=space;k++){
            cout<<" ";
        }
        
        if(i==1||i==n){
        for(int j=n;j>0;j--){
            
            cout<<"*";
        }
        }
        else{
            for(int j=n;j>0;j--){
                if(j==n||j==1){
                cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            
        }
        cout<<endl;
    }
    return 0;
}
