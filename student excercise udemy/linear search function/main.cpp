//
//  main.cpp
//  linear search function
//
//  Created by Gaurav Sharma on 18/09/21.
//

#include <iostream>
using namespace std;

int lins(int A[],int n,int key){
    for(int i=0;i<n;i++){
        if(A[i]==key){
            return i+1;}
    }
    return 0;
}




int main() {
    int A[]={1,2,3,4,5};
    int n=sizeof(A)/sizeof(A[0]) ,key;
    cout<<"enter the key to search for";
    cin>>key;
//    if(lins(A[],n,key)){
//        cout<<lins(A[],n,key);
//    }
    cout<<"Element found at index :";
    lins(A,n,key)?(cout<<lins(A,n,key)-1):cout<<"-1";
    
    return 0;
}


//linear search code of abdul bari sir
//#include<iostream>
//using namespace std;
//int Search(int A[],int n,int key)
//{
// for(int i=0;i<n;i++)
// if(key==A[i])
// return i;
// return 0;
//}
//int main()
//{
// int A[]={2,4,5,7,10,9,13};
// int k;
// cout<<"Enter an Element to be Searched:";
// cin>>k;
// int index=Search(A,7,k);
//
// cout<<"Element found at index :"<<index<<endl;
//
//
//}
