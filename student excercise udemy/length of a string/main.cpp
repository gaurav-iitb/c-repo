//
//  main.cpp
//  length of a string
//
//  Created by Gaurav Sharma on 10/09/21.
//

#include <iostream>
using namespace std;
#include <string.h>
int main() {
//    method 1
    
//    string str;
//    cout<<"enter the word";
//    getline(cin,str);
//    int n=0;
//    for(int i=0;str[i]!=0;i++){ yha vaise to '\0' aata pr zero bhi likh skte
//        n++;
//    }
//    cout<<n<<endl;
    
    
//    method 2  using iterator attribute in string function
    
    string st;
    cout<<"enter the word";
    getline(cin,st);
    string::iterator it;
    int count=0;
    for(it=st.begin();it!=st.end();it++){
        count++;
    }
    cout<<"number of letters are "<<count<<endl;
      
    
    
}
