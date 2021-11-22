//
//  main.cpp
//  student excercise #11
//
//  Created by Gaurav Sharma on 27/09/21.
//

#include <iostream>
using namespace std;
#include <string>
class Employee{
private:
    int eid;
    string name;
public:
    Employee(int i,string name){
        eid=i;
        this->name=name;
    }
    
    string getName(){
        return name;
    }
    
};

class FulltimeEmployee:public Employee{
private:
    int inc;
public:
    FulltimeEmployee(int id,string name,int i):Employee(id,name){
        inc =i;
        
    }
    int getSalary(){
        return inc;
    }
    
    
};

class ParttimeEmployee:public Employee{
private:
    int inc;
public:
    ParttimeEmployee(int id,string name,int i):Employee(id,name){
        inc =i;
        
    }
    
    int getWage(){
        return inc;
    }
};
int main() {
    
ParttimeEmployee p1(1,"John",300);
FulltimeEmployee p2(2,"Raj",5000);

cout<<"Salary of "<<p2.getName()<<" is "<<p2.getSalary()<<endl;
cout<<"Daily wage of "<<p1.getName()<<" is "<<p1.getWage()<<endl;
return 0;
}
