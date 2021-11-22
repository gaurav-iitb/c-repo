//
//  main.cpp
//  tp
//
//  Created by Gaurav Sharma on 03/11/21.
//

#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
using namespace std;
int main(int argc, const char * argv[]) {
    char a[40]="12";
    
    long int no=strlen(a);
    for(int i=0;i<=no-1;i++){
        int anew=a[i];
        cout<<anew<<endl;
        cout<<(int)a[i]<<endl;
        cout<<a[i]<<endl;
    }
    
//    long int no=strlen(a);
//    for(long int j=no-1;j>=0;j--){
//        cout<<stoi(a[j])<<endl;
//
//    }
//    cout<<endl<<strlen(a)<<endl;
    return 0;
}
