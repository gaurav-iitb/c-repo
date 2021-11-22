

#include <iostream>
using namespace std;

int main() {
    int A[]={2,4,11,8,10,15,13};
       int sum=0;
    
    for(auto x:A){

        sum=sum+x;
    }
    
//    for(int i=0;i<7;i++){
//        sum=sum+A[i];}
    cout<<sum;
    return 0;
}
