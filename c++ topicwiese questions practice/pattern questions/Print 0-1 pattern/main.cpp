//
//  main.cpp
//  Print 0-1 pattern
//
//  Created by Gaurav Sharma on 27/10/21.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cout<<"enter the no of sides";
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j){
            if((i+j)%2==0){
                cout<<"1";
            }
            else {
                cout<<0;
            }
            }
            cout<<" ";

        }
        cout<<endl;
    }
    return 0;
}
