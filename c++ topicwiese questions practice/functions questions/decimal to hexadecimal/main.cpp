// b
//  main.cpp
//  decimal to hexadecimal
//
//  Created by Gaurav Sharma on 09/11/21.
//

//#include <iostream>
//using namespace std;
//
//int converter(int a){
//    int sum=0;
//    int y=1;
//    for(int i=0;a>0;i++){
//        if(newn=='A'){
//            newn=10;
//        }
//        else if(newn=='B'){
//            newn=11;
//        }
//        else if(newn=='C'){
//            newn=12;
//        }
//
//        else if(newn=='D'){
//            newn=13;
//        }
//        else if(newn=='E'){
//            newn=14;
//        }
//        else if(newn=='F'){
//            newn=15;
//        }
//        sum=sum+(a%16)*y;
//        y*=10;
//        a=a/16;
//    }
//
//    return sum;
//}
//
//int main() {
//    int a;
//    cout<<"enter no:"<<endl;
//    cin>>a;
//
//    cout<<converter(a);
//
//    return 0;
//}

// method 2 using arrays

#include <iostream>
using namespace std;

void converter(int a){
    int sum=0;
    int v=0;
    unsigned char arr[32];
    for(int i=0;a>0;i++){
        arr[i]=(a%16);
        if(arr[i]==10){
            arr[i]='A';
            v++;
        }
        else if(arr[i]==11){
            arr[i]='B';
            v++;
        }
        else if(arr[i]==12){
            arr[i]='C';
            v++;
        }
        
        else if(arr[i]==13){
            arr[i]='D';
            v++;
        }
        else if(arr[i]==14){
            arr[i]='E';
            v++;
        }
        else if(arr[i]==15){
            arr[i]='F';
            v++;
        }
//        else{
//            arr[i]=(int)arr[i]-48;
//        }
        sum++;
        a=a/16;
    }
    
    

    for(int i=sum-1;i>=0;i--){
        if((arr[i]=='A')||arr[i]=='B'||arr[i]=='C'||arr[i]=='D'|| arr[i]=='E' ||arr[i]=='F'){
            cout<<(arr[i]);
            
        }
        else {
//            cout<<static_cast<unsigned>(arr[i]);
            cout<<(int)(arr[i]);
        }
    }

}

int main() {
    int a;
    cout<<"enter no:"<<endl;
    cin>>a;

    converter(a);

    cout<<endl;


    return 0;
}

