//
//  main.cpp
//  print diamond method 2
//
//  Created by Gaurav Sharma on 28/10/21.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cout<<"enter no:";
    cin>>n;
    int space=(2*n-1)/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
        space--;
    }
    
    space=0;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
        space++;
    }
    
    return 0;
}