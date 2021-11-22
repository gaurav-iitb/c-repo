#include <iostream>
using namespace std;\int main() {
    int q,w,e,r;
cout<<"enter rows and columns for first matrix"<<endl;
    cin>>q>>w;
cout<<"enter rows and columns for first matrix"<<endl;
    cin>>e>>r;
    
    if(w!=e){
        cout<<"Error: Column of first matrix is not equal to the row of second matrix";
        return 0;
    }
    
    int m1[q][w],m2[e][r],mul[q][r];

//    taking input for matrix m1
    for(int i=0;i<q;i++){
        for(int j=0;j<w;j++){
            cout<<"enter element "<<"a"<<i+1<<j+1<<":";
            cin>>m1[i][j];
        }
    }
    
    //    taking input for matrix m2
    for(int i=0;i<q;i++){
        for(int j=0;j<w;j++){
            cout<<"enter element "<<"b"<<i+1<<j+1<<":";
            cin>>m2[i][j];
        }
    }
    
//    initializing output matrix elements to be zero
    for(int i=0;i<q;i++){
        for(int k=0;k<r;k++){
        
            mul[i][k]=0;
        }
        
    }
    

//    calculating the multiplication matrix
    
    for(int i=0;i<q;i++){
      for(int k=0;k<r;k++){
          
          
         for(int j=0;j<w;j++){
            
             mul[i][k]=mul[i][k] + (m1[i][j]*m2[j][k]);
                
            }
            
        }
    }
    
//    now showing the multiplicative matrix

    cout<<"output matrix is "<<endl;
    
    for(int i=0;i<q;i++){
        for(int k=0;k<w;k++){
            cout<<mul[i][k]<<" ";
            }
        cout<<endl;
    }
    
    return 0;
}
