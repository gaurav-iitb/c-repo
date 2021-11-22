//
//  main.cpp
//  Longest Arithmetic Subarray
//
//  Created by Gaurav Sharma on 15/11/21.
//

#include <iostream>
using namespace std;
int main() {
    
    int n;
    cout<<"enter no of text cases"<<endl;
    cin>>n;
    int a[n+1][2000],c[n+1];
    // loops for taking input
    for(int j=1;j<=n;j++){
        int y;
        cin>>y;
        c[j]=y;
        if(y<2){
            cout<<"n can't be less than 2"<<endl;
            return 0;
        }
        
        for(int i=0;i<y;i++){
            cin>>a[j][i];
        }
     
    }
    
    //loops for taking output
    
    long int b[n][2000];
    for(int j=1;j<=n;j++){
        
        for(int i=0;i<c[j]-1;i++){
            
            b[j][i]=a[i]-a[i+1];

        }
    }
    
    
    
    for(int j=1;j<=n;j++){
        long int max=0;
        
        for(int i=0;i<c[j]-1;i++){
            
            if(b[j][i]==b[j][i+1]){
                max++;
            }
            
        }
        
    
    }
    
    return 0;
}
