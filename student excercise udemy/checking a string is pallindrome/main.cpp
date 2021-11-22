#include <iostream>
using namespace std;
#include <string>
#include <cstring>
int main() {
    
    string str ,rev;
    cout<<"Enter A String";
    getline(cin,str);
    
    long int n=str.length();
    rev.resize(n);
    for(long int i=n-1,j=0;i>=0;i--,j++){
        
      rev[j]=str[i];  // works only when we define the length of the string
//        rev.push_back(str[i]);
    }
//    rev[n]='\0';  this doesn't have any effect we can include this or not depends on us
    
    if(str.compare(rev)==0){
        cout<<"reverse string is"<<rev<<endl<<"it is a pallindrome";
    }
    else{
        cout<<"reverse string is"<<rev<<endl<<"it is not a pallindrome";
    }
    
    
    return 0;
}
