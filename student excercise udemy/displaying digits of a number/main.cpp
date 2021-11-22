
#include <iostream>
using namespace std;

int main() {
    
    int n,r,rev=0,sub;
    cout<<"enter number";
    cin>>n;
    sub=n;
    while(n>0){
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    int rem;
    
    
    while(rev>0){
        rem=rev%10;
        rev=rev/10;
        
        switch(rem){
            
            case 1: cout<<"one ";
                break;
            case 2: cout<<"Two ";
                break;
            case 3: cout<<"Three ";
                break;
            case 4: cout<<"Four ";
                break;
            case 5: cout<<"Five ";
                break;
            case 6: cout<<"six ";
                break;
            case 7: cout<<"Seven ";
                break;
            case 8: cout<<"Eight ";
                break;
            case 9: cout<<"Nine ";
                break;
            case 0: cout<<"Zero ";
              break;
                
            
            }
        }
    if(sub%10==0){
      cout<<"zero";}

       return 0;
    }
  

