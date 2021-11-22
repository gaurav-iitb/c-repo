//
//  main.cpp
//  student excercise # 9
//
//  Created by Gaurav Sharma on 26/09/21.
//

#include <iostream>
using namespace std;
#include <string>

class student{
private:
    int rollno,math,chem,phy;
    string name;
public:
    student(string name, int rollno , int m,int p,int c){
        this->rollno=rollno;
        this->name=name;
        math=m;
        chem=c;
        phy=p;
        
    }
    
    string getname(){
        return  name;
    }
    
    
    int totalmarks();
    char grade();
};

int main() {
    int roll,m,p,c;
    string name;
    cout<<"Enter Roll Number of a student :"<<endl;
    cin>>roll;
    cout<<"Enter name of a Student :"<<endl;
    cin.ignore();
    getline(cin,name);
    cout<<"enter marks in three subjects"<<endl;
    cin>>m>>p>>c;
    
    student st(name,roll,m,p,c);
    cout<<"Hello"<<st.getname()<<endl;
    cout<<"Your total marks is "<<st.totalmarks()<<endl;
    cout<<"Your grade is "<<st.grade()<<endl;
    return 0;
}


int student::totalmarks(){
    return math+phy+chem;
}

char student::grade(){
    if(totalmarks()/3<40){
        return 'C';
    }
    else if(totalmarks()/3>=40 && totalmarks() <60){
        return 'B';
    }
    else return 'A';
}
