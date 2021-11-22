//
//  main.cpp
//  practice student excercise #15
//
//  Created by Gaurav Sharma on 14/10/21.
//

#include <iostream>
using namespace std;
#include <fstream>
#include <vector>

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
    vector<items *> it;  //here understanding of use of * is very important
    
    
    for(int i=0;i<n;i++){
        cout<<"Enter"<<i+1<<" Item name , price and quantity";
        string name;
        int p,q;
        cin>>name>>p>>q;
        
        items I(name,p,q);
        it.push_back(new items(name,p,q));
    }
    //accessing the stored values in vector using the iterator
    vector<items *>::iterator no;
    for(no=it.begin();no!=it.end();no++){
    ofstream out("grocery2.txt",ios::app);
        out<<**no;}
    ifstream read("grocery2.txt");
    int i=0;
    for(no=it.begin();no!=it.end();no++){
        cout<<"item"<<i+1;
//        ifstream read("grocery2.txt"); agr aese read krenge to ye baar baar hi ek hi output dega joki hoga sbse first wala.
        read>>**no;
        cout<<**no;
        
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
