//
//  main.cpp
//  add two binary numbers
//
//  Created by Gaurav Sharma on 09/11/21.
//

#include <iostream>
using namespace std;

void addbinary(int a,int b){
    int v=0,carry=0,k=0,t=a,y=b,extra=0;
    int arr1[16]={0},arr2[16]={0},fin[16]={0};
    for(int i=15;a>0;i--){
//        arr1[i]=a%10;
        a/=10;
        v++;
    }
    for(int i=15;b>0;i--){
//        arr2[i]=b%10;
        b/=10;
        k++;
    }
    
    for(int i=15;i>=16-v;i--){
        arr1[i]=t%10;
        int l=arr1[i];
        t/=10;
        
    }
    
    for(int i=15;i>=16-k;i--){
        arr2[i]=y%10;
        int l=arr2[i];
        y/=10;
        
    }
    
    if(v==k){
        extra++;
    }
    
    v=max(v,k);
    
    for(int i=15;i>=16-v-1;i--){
        
        if(arr1[i]==1&&arr2[i]==1){
            fin[i]=0+carry;
            if(carry>0){
                carry--;
            }
            carry++;
            
        }
        else if(arr1[i]==0&&arr2[i]==0){
            fin[i]=0+carry;
            if(carry>0){
                carry--;
            }
        }
        else {
            fin[i]=1+carry;
            if(carry>0){
                carry--;
            }
        }
        
        }
    
    if(extra>0&&arr1[16-v]==1&&arr2[16-v]==1){
        cout<<fin[15-v];
    }
        
    for(int i=16-v;i<16;i++){
        cout<<fin[i];
    }
    
    
}

int main(){
    int a,b;
    cout<<"enter no"<<endl;
    cin>>a>>b;
    cout<<"their addition is: ";
    
    addbinary(a,b);
    
    cout<<endl;
    return 0;
}
