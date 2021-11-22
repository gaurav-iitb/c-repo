//
//  main.cpp
//  insertion operator
//
//  Created by Gaurav Sharma on 26/09/21.
//

#include <iostream>
using namespace std;
#include <string>

class complex{
private:
    int real;
    int img;
public:

    complex(int r=0,int i=0){
        real=r;
        img=i;
    }

   friend ostream& operator<<(ostream &os,complex con);
};
int main() {

    complex c1(10,5);

    cout<<c1<<endl;
    operator<<(cout,c1)<<endl;



    return 0;
}
ostream& operator<<(ostream &os,complex con){
    os<<con.real<<"+i"<<con.img;
    return os;
}


//here in this question we can also replace ostream& with the void function but in doing so
//#include <iostream>
//using namespace std;
//#include <string>
//
//class complex{
//private:
//    int real;
//    int img;
//public:
//
//    complex(int r=0,int i=0){
//        real=r;
//        img=i;
//    }
//
//   friend void operator<<(ostream &os,complex con);
//};
//int main() {
//
//    complex c1(10,5);
//
//    cout<<c1<<endl;    //Reference to overloaded function could not be resolved; did you mean to call it?
//    operator<<(cout,c1)<<endl; //Reference to overloaded function could not be resolved; did you mean to call it?
//
//
//
//    return 0;
//}
//void operator<<(ostream &os,complex con){
//    os<<con.real<<"+i"<<con.img;
//
//}
