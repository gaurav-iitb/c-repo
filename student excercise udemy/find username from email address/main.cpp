//
//  main.cpp
//  find username from email address
//
//  Created by Gaurav Sharma on 12/09/21.
//

#include <iostream>
using namespace std;
#include <string>

int main() {
    string email="sharmagauravfeb22@gmail.com";
    long int x=email.find('@');
    cout<<email.substr(0,x)<<endl;
    return 0;
}
