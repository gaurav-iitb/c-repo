//
//  main.cpp
//  sum upto n
//
//  Created by Gaurav Sharma on 01/11/21.
//

#include <iostream>
using namespace std;

int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}

int main() {
    int n;
    cout<<"enter the no";
    cin>>n;
    
    cout<<sum(n);
    
    return 0;
}
