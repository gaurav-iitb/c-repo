//
//  main.cpp
//  deep copy constructor
//
//  Created by Gaurav Sharma on 25/09/21.
//

#include <iostream>
using namespace std;
#include <string>

class arr{
public:
    int a ;
    int *p;
    arr(int x){
        a=x;
        p=new int[a];
        for(int i=0;i<(a);i++){
            cin>>p[i];
        }
        
    }
    
    arr(arr &t){
        int *u =new int[t.a];
        for(int i=0;i<(t.a);i++){
            u[i]=t.p[i];
        }
        for(int i=0;i<t.a;i++){
            cout<<u[i];
        }
    }
};
int main() {
    
    arr a1(5);
    arr a2(a1);
    return 0;
}
