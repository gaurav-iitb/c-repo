//
//  main.cpp
//  Print Half Pyramid using numbers - 2
//
//  Created by Gaurav Sharma on 27/10/21.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i>=j)
            cout<<i+1<<" ";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
