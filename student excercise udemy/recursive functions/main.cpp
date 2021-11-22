//
//  main.cpp
//  recursive functions
//
//  Created by Gaurav Sharma on 21/09/21.
//

#include <iostream>
using namespace std;
void fun(int x){
    if(x>0){
    cout<<x<<endl;
    fun(x-1);
        cout<<x<<endl;
    }}
int main() {
    
    int x=5;
    fun(x);
    return 0;
}
