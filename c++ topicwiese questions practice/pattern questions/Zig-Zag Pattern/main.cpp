//
//  main.cpp
//  Zig-Zag Pattern
//
//  Created by Gaurav Sharma on 31/10/21.
//
//bhut mst ques hai mujhse nhi hua tha ans dekh ke smjh aaya

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cout<<"enter no"<<endl;
    cin>>n;

    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){

            if(((i+j)%2==0)){
                if(((j%2==0 && i==0)||((i+j)%4==0))){
                    cout<<"  ";
                }
                else
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }

        }
        cout<<endl;

    }
    return 0;
}

actual solution of this question

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cout<<"enter no"<<endl;
    cin>>n;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if(((i+j)%4==0)||((i==2)&&(j%4==0)))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
