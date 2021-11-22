//
//  main.cpp
//  fuctions questions
//
//  Created by Gaurav Sharma on 01/11/21.
//

#include <iostream>

int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}

int main(int argc, const char * argv[]) {
    char n;
    cin>>n;
    cout<<n;
}
