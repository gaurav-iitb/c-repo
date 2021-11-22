//
//  main.cpp
//  student excercise #10
//
//  Created by Gaurav Sharma on 26/09/21.
//

#include <iostream>
using namespace std;
#include <string>

class Rational{
private:
    int num;
    int den;
public:
    Rational(int p=0,int q=0){
        num=p;
        den=q;
    }
    
    Rational operator+(Rational r){
        Rational t;
        t.num=num*(r.den)+den*(r.num);
        t.den=den*r.den;
        return  t;
    }
    
    friend ostream& operator<<(ostream &out,Rational r1);
};
int main() {
    
    Rational r1(3,4),r2(2,5),r3;
    
    r3=r1+r2;
    
    cout<<"Sum of "<<r1<<" and "<<r2<<" is "<<r3<<endl;
    
    
    return 0;
}

ostream& operator<<(ostream &out,Rational r1){
    out<<r1.num<<"/"<<r1.den;
    return out;
}
