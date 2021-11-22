//
//  main.cpp
//  cp contest
//
//  Created by Gaurav Sharma on 31/10/21.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter no"<<endl;
    cin>>n;
    int b[n];
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=0;
        }
    }
    
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        b[i]=a;
        
        for(int j=0;j<a;j++){
            int o;
            cin>>o;
            arr[i][j]=o;
        }
    }
    
    
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<b[i];j++){
            
            if((arr[i][j])>(arr[i][j+1])){
                sum=sum+arr[i][j+1];
            }
            else {sum+=arr[i][j];}
            
            }
        cout<<sum<<endl;
    }
    
    return 0;
}
