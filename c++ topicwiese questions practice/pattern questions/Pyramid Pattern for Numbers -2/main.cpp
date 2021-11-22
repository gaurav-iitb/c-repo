//
//  main.cpp
//  Pyramid Pattern for Numbers -2
//
//  Created by Gaurav Sharma on 29/10/21.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {

    
    int n;
    cout<<"enter the no:"<<endl;
    cin>>n;
    
    int space=n;
    

    for(int i=1;i<=n;i++){
        space--;
        
        for(int k=1;k<=space;k++){
            cout<<" ";
        }
        int y=1;
        for(int j=1;j<=(2*i)-1;j=j+2){
            
                cout<<y<<" ";
            y++;
    }
        
        cout<<endl;
}
    
   
    return 0;
}
