
#include <iostream>
using namespace std;
int main() {
    int m,n;
    cout<<"enter two numbers";
    cin>>m>>n;
    
    while (m!=n) {
        if (m>n) {
            m-=n;
        }
        else{
            n-=m;
        }
    }
    cout<<n;
        
}
