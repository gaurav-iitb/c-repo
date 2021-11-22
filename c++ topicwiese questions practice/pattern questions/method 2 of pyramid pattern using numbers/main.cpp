//
//  main.cpp
//  method 2 of pyramid pattern using numbers
//
//  Created by Gaurav Sharma on 29/10/21.


//isme bhi mere jaise 10 ke baad output bigad ja rha hai to phir yhi assume krna hai kin isme n ki value 10 se kam hi hogi

#include <iostream>
using namespace std;
int main() {

    
    int n;
    cout<<"enter the no:"<<endl;
    cin>>n;
    int space=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        space--;
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
