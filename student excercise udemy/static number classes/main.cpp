//
//  main.cpp
//  static number classes
//
//  Created by Gaurav Sharma on 03/10/21.
//

#include <iostream>
using namespace std;

class stat{
public:
    static int count;
    stat(){
        count++;
    }
    static int getCount(){
        
        return count;
    }
};

int stat::count=0;
int main() {
   
    stat s;
    cout<<s.getCount()<<endl;
    
    stat *p;
    p=new stat;
    cout<<p->getCount()<<endl;
    
    cout<<stat::getCount();
    return 0;
}
