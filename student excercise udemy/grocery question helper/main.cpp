//
//  main.cpp
//  grocery question helper
//
//  Created by Gaurav Sharma on 11/10/21.
//

#include <iostream>
using namespace std;
#include <fstream>

class student{
public:
    string name;
    int rollno;
    string branch;

    friend ofstream & operator<<(ofstream & of,student& s);
    friend ifstream & operator>>(ifstream & ifa,student& s);
};

ofstream & operator<<(ofstream &of,student& s){
    of<<s.name<<endl;
    of<<s.rollno<<endl;
    of<<s.branch<<endl;
    
    return of;
}


ifstream & operator>>(ifstream & ifa,student& s){
    
//    while(! ifa.eof()){
    while(ifa>>s.name>>s.rollno>>s.branch){
//        ifa>>s.name>>s.rollno>>s.branch;
        cout<<s.name<<endl<<s.rollno<<endl<<s.branch<<endl;
    }
    return ifa;
}

int main() {
    
    student s1;
    s1.name="gau";s1.rollno=10;s1.branch="AERO";

    //creating a file and writing the required things

    ofstream outfile("student.txt",ios::app);
    outfile<<s1;
    outfile.close();

    ifstream infile("student.txt");
    infile>>s1;
    infile.close();

    

    
    return 0;
}
//    cout<<"name"<<s1.name<<endl;
//    cout<<"roll"<<s1.rollno<<endl;
//    cout<<"branch"<<s1.branch<<endl;
//    cout<<"name"<<s1.name<<endl;
//    cout<<"roll"<<s1.rollno<<endl;
//    cout<<"branch"<<s1.branch<<endl;
//    cout<<"name"<<s1.name<<endl;
//    cout<<"roll"<<s1.rollno<<endl;
//    cout<<"branch"<<s1.branch<<endl;
