//
//  main.cpp
//  Print Diamond using Stars
//
//  Created by Gaurav Sharma on 28/10/21.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int n;
    cout<<"enter the no:"<<endl;
    cin>>n;
    
    for(int m=n;m>0;m--){
        int v=0;
        for(int i=m;i>1;i--){
            v++;
            cout<<" ";
        }
//        if(m!=5){
//            cout<<" ";
//        }
//        for(int i=1;i<=m-v;i++){
        for(int u=n-v;u>0;u--){
            cout<<"*";
        }
        
        if(n-v!=1){
            for(int t=2;t<=n-v;t++){
                cout<<"*";
            }
            
        }
        
        cout<<endl;
    }
    
    for(int m=1;m<=n;m++){
        int v=0;
        
        for(int i=1;i<m;i++){
            v++;
            cout<<" ";
        }
//        if(m!=5){
//            cout<<" ";
//        }
//        for(int i=1;i<=m-v;i++){
            for(int u=n-v;u>0;u--){
                cout<<"*";
            }
        if(n-v!=1){
        for(int t=2;t<=n-v;t++){
            cout<<"*";
        }
            
        }
        
//        for(int u=1;u<=n-v;u++){
//            cout<<"*"<<" ";
//        }
//    if(n-v!=1){
//    for(int t=2;t<=n-v;t++){
//        cout<<"* ";
//    }
//    }
        cout<<endl;
    }
    return 0;
}



