//
//  main.cpp
//  Print Floyd's Triangle
//
//  Created by Gaurav Sharma on 27/10/21.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int k=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            
            if(i>=j){
                k++;
                cout<<k<<" "; }
            else{
                cout<<" ";}
        }
        cout<<endl;
    }
    return 0;
}
