//
//  main.cpp
//  Print Half Pyramid after 180 degree rotation
//
//  Created by Gaurav Sharma on 27/10/21.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(j+i>=4)
            cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
