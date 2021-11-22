//
//  main.cpp
//  Reading a file
//
//  Created by Gaurav Sharma on 11/10/21.
//

#include <iostream>
using namespace std;
#include <fstream>

int main() {
    
    ifstream newfile;
    newfile.open("first.txt");
    
    if(!newfile)
        cout<<"file can't be opened";
    
    string str,str2;
    int x;
    
    newfile>>str;
    newfile>>x;
    newfile>>str2;
    
    cout<<str<<endl<<x<<endl<<str2;

    newfile.close();
    
    return 0;
}
