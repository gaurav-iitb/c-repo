//
//  main.cpp
//  Print Sold Butterfly Pattern
//
//  Created by Gaurav Sharma on 29/10/21.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    
    for(int i=1;i<=(n+1)/2;i++){
            
            for(int k=1;k<=i-1;k++){
                cout<<"*";
            }
        for(int j=i;j<=n-i+1;j++){
            if(j==i||j==n-i+1){
                cout<<"*";
            }
            else cout<<" ";
        }
        for(int y=n-i+1;y<n;y++){
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    for(int i=n-((n+1)/2);i>0;i--){
        
            for(int k=1;k<=i-1;k++){
                cout<<"*";
            }
        for(int j=i;j<=n-i+1;j++){
            if(j==i||j==n-i+1){
                cout<<"*";
            }
            else cout<<" ";
        }
        for(int y=n-i+1;y<n;y++){
            cout<<"*";
        }
        cout<<endl;
        
    }
    return 0;
}
