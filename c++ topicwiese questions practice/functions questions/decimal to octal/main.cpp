//
//  main.cpp
//  decimal to octal
//
//  Created by Gaurav Sharma on 09/11/21.
//

#include <iostream>
using namespace std;

int converter(int a){
    int sum=0;
    int y=1;
    for(int i=0;a>0;i++){
        sum=sum+(a%8)*y;
        y*=10;
        a=a/8;
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
//        arr[i]=a%8;
//        sum++;
//        a=a/8;
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

