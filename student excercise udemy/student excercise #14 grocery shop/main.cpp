//
//  main.cpp
//  student excercise #14 grocery shop
//
//  Created by Gaurav Sharma on 11/10/21.
//

//this question is solved by first writing all the elements in file and then at last reading the whole file.

#include <iostream>
using namespace std;
#include <string>
#include <fstream>
class items{
public:
    string name;
    int price,quantity;
    
    items(string name,int p,int q);
    friend ofstream & operator<<(ofstream & of,items & i);
//    friend ifstream & operator>>(ifstream & ifa,items & i);
};
int main() {
    int n;
    
    cout<<"Enter Number of Item"<<endl;
    cin>>n;
    ofstream out("grocery.txt",ios::trunc);
    for(int i=0;i<n;i++){
        cout<<"Enter"<<i+1<<" Item name , price and quantity";
        string name;
        int p,q;
//        getline(cin,name);  see this how to do by this
//        cin.ignore();
        
        cin>>name>>p>>q;
        items I(name,p,q);
        ofstream out("grocery.txt",ios::app);
        out<<I;
        out.close();
    }
    string name;
    int price,quantity;
    ifstream read("grocery.txt");
    
        
        while(read>>name>>price>>quantity){
            cout<<name<<endl<<price<<endl<<quantity<<endl;}
    
    return 0;
}

items::items(string name,int p,int q){
    this->name=name;
    price=p;
    quantity=q;
}  
ofstream & operator<<(ofstream & of,items & i){
    of<<i.name<<endl;
    of<<i.price<<endl;
    of<<i.quantity<<endl;
    return of;
    }
//ifstream & operator>>(ifstream & ifa,items & i){
//    ifa>>i.name;
//    ifa>>i.price;
//    ifa>>i.quantity;
//    return ifa;
//    }
