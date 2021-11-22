#include <iostream>
using namespace std;
#include <string>
#include <cstring>

// in this version i have to make sure that Madam word is a pallindrome so both upper and lower cases should be taken same while comparing between 2 string.
int main() {
    
    string str ,rev;
    cout<<"Enter A String";
    getline(cin,str);
    
    long int n=str.length(),count=0;
    rev.resize(n);
    for(long int i=n-1,j=0;i>=0;i--,j++){
        
      rev[j]=str[i];  // works only when we define the length of the string
//        rev.push_back(str[i]);
    }
//    rev[n]='\0';  this doesn't have any effect we can include this or not depends on us
    cout<<"reverse string is "<<rev <<endl;
    for(long int j=0;j<=n-1;j++){
        if(str[j]==rev[j] || rev[j]==str[j]+32 || str[j]==rev[j]+32){
            count++;
        }}
    if(count==n){
        cout<<"it is a pallindrome";
    }
    else{
        cout<<"not a pallindrome";
    }
    
    return 0;
}
