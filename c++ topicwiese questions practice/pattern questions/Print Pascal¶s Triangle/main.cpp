//
//  main.cpp
//  Print Pascal¶s Triangle
//
//  Created by Gaurav Sharma on 29/10/21.
//

#include <iostream>
using namespace std;

long int fect(int n){
    if(n==0){
        return 1;
    }
    return n*fect(n-1);
    
}

int main(int argc, const char * argv[]) {

    
    int n;
    cout<<"enter the no:"<<endl;
    cin>>n;
    
    int space=n;
      

    for(int i=0;i<n;i++){
        space--;
        
        for(int k=1;k<=space;k++){
            cout<<"  ";
        }
        
        
            
            
            for(int l=0;l<=i;l++){
                if(i==0){
                    cout<<1<<"   ";
                }
                else cout<<fect(i)/(fect(i-l)*fect(l))<<"   ";
            }
                  
    
        
        cout<<endl;
}
    
   
    return 0;
}
