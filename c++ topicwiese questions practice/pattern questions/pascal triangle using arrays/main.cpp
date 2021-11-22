//
//  main.cpp
//  pascal triangle using arrays
//
//  Created by Gaurav Sharma on 29/10/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    
    int arr[n][n];
    memset(arr,0,sizeof(arr));
    int space=n;
    for(int i=0;i<n;i++){
        space--;
        for(int k=1;k<=space;k++){
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){
            if(j==0||j==i){
                cout<<1<<"   ";
                arr[i][j]=1;
            }
            else {
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
                cout<<arr[i][j]<<"   ";
        }
        }
        cout<<endl;
    }
    
    return 0;
}
