//
//  main.cpp
//  decimal to binary
//
//  Created by Gaurav Sharma on 08/11/21.
//

#include <iostream>
using namespace std;


int converter(int a){
    int sum=0;
    int y=1;
    for(int i=0;a>0;i++){
        sum=sum+(a%2)*y;
        y*=10;
        a=a/2;
    }

    return sum;
}

int main() {
    int a;
    cout<<"enter no:"<<endl;
    cin>>a;

    cout<<converter(a);
    
    return 0;
}

// method 2 using arrays

//#include <iostream>
//using namespace std;
//
//void converter(int a){
//    int sum=0;
//    int arr[32];
//    for(int i=0;a>0;i++){
//        arr[i]=a%2;
//        sum++;
//        a=a/2;
//    }
//
//    for(int i=sum-1;i>=0;i--){
//        cout<<arr[i];
//    }
//
//}
//
//int main() {
//    int a;
//    cout<<"enter no:"<<endl;
//    cin>>a;
//
//    converter(a);
//
//
//
//
//    return 0;
//}
