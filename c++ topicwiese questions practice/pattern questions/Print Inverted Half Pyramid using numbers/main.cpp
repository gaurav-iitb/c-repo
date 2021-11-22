//
//  main.cpp
//  Print Inverted Half Pyramid using numbers
//
//  Created by Gaurav Sharma on 27/10/21.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i+j<=4)
            cout<<j+1<<" ";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
