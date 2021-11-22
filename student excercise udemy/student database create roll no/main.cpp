//
//  main.cpp
//  student database create roll no
//
//  Created by Gaurav Sharma on 03/10/21.
//
#include <iostream>
using namespace std;
#include <string>

class student{
private:
    int rollno;
    string stname;
public:
    static int addno;
    
    student(string name){
        stname=name;
        addno++;
        rollno=addno;
    }
    
   void display(){
        cout<<stname<<" your roll no is "<<rollno<<endl;
    }
};
int student::addno=0;

int main() {
//    student s1("john");
//    student s2("vikas");
//    student s3("nnu");
    while(true){
        string names;
        cout<<"enter your name"<<endl;
        getline(cin,names);
        student s(names);
        s.display();
        cout<<endl;
        
    }
//    s1.display();
//    s2.display();
//    s3.display();
    return 0;
}
