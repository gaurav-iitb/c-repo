//
//  main.cpp
//  writing a file
//
//  Created by Gaurav Sharma on 11/10/21.
//

#include <iostream>
using namespace std;
#include <fstream>

int main() {
    
    ofstream outf("first.txt");
    
    outf<<"hello"<<endl;
    outf<<25<<endl;
    outf<<"cs"<<endl;
    
    outf.close();
    
    return 0;
}
