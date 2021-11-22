//
//  main.cpp
//  Print a hollow rectangle
//
//  Created by Gaurav Sharma on 27/10/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            if(i>=1&&i<=3&&j>=1&&j<=2){
                cout<<" ";
            }
                
        else{
            cout<<"*";}
        }
        cout<<endl;
    }
}
