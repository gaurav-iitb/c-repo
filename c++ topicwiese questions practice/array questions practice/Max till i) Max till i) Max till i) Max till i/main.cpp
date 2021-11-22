//
//  main.cpp
//  Max till i) Max till i) Max till i) Max till i
//
//  Created by Gaurav Sharma on 15/11/21.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int a[n],max=0;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        
    }
    
    cout<<max<<endl;
    
    return 0;
}
