//
//  main.cpp
//  change case from U to L
//
//  Created by Gaurav Sharma on 10/09/21.
//

#include <iostream>
using namespace std;
#include <string>

int main() {
    string str;
    cout<<"Enter the String";
    getline(cin,str);
    int count=0;
    string::iterator ite;
    
    
    for (ite=str.begin();ite!=str.end();ite++){
        if(str[count]>=65 && str[count]<=90){
        str[count]+=32;
            count++;}}
//    for (int i=0;str[i]!='\0';i++){
//    if(str[i]>=65 && str[i]<=90){
//       str[i]+=32; 
//}
//    }
    cout<<str;
    return 0;
}
