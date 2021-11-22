//
//  main.cpp
//  approach 2 student excercise#14
//
//  Created by Gaurav Sharma on 12/10/21.
//
// same method just for doing this i have created an array of a class object.
#include <iostream>
using namespace std;
#include <fstream>

class items{
public:
    string name;
    int price,quantity;
    
    items();
    friend ofstream & operator<<(ofstream & of,items& i);
    items(string name,int p,int q);
    friend ifstream & operator>>(ifstream & ifa,items& i);
    friend ostream & operator<<(ostream & ost,items & i);
    
};


int main() {
    int n;
    
    cout<<"Enter Number of Item"<<endl;
    cin>>n;
    
    ofstream out("grocery2.txt",ios::trunc);
    items it[n];
    for(int i=0;i<n;i++){
        cout<<"Enter"<<i+1<<" Item name , price and quantity";
        string name;
        int p,q;
        cin>>name>>p>>q;
        
        items I(name,p,q);
        it[i]=I;
        ofstream out("grocery2.txt",ios::app);
        out<<it[i];
        
    }
    ifstream read("grocery2.txt");
    for(int i=0;i<n;i++){
        cout<<"item"<<i+1;
//        ifstream read("grocery2.txt"); agr aese read krenge to ye baar baar hi ek hi output dega joki hoga sbse first wala.
        read>>it[i];
        cout<<it[i];
        
    }
    return 0;
}

items::items(){
    price=0;
    quantity=0;
    name="null";
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
ifstream & operator>>(ifstream & ifa,items& i){
    ifa>>i.name>>i.price>>i.quantity;
    
    return ifa;
}

ostream & operator<<(ostream & ost,items & i){
    ost<<i.name<<endl<<i.price<<endl<<i.quantity<<endl;
    return ost;
}
