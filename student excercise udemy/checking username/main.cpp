//
//  main.cpp
//  checking username
//
//  Created by Gaurav Sharma on 12/09/21.
//

#include <iostream>
using namespace std;
#include <string>

//this program is for checking whether username is valid or not
//our username can have
//1. characters
//2. numbers
//3. special characters like '_' , '.'
int main() {
    string email="sharmagaurav&feb22@gmail.com",use;
    long int x=email.find('@'),count=0;
    use.resize(x);
    use=email.substr(0,x);
    cout<<"username is "<<use<<endl;
//    doing using ascii codes
    for(int i=0;i<=x-1;i++){
        if(use[i]==46 || use[i]==95 || (use[i]<=90 && use[i]>=65) || (use[i]<=57 && use[i]>=48) || (use[i]<=122 && use[i]>=97)){
            count++;
            
        }}
        if(count==x){
            cout<<"username is valid";
        }
        else{
            cout<<"invalid username";
        }
    
    return 0;
}
