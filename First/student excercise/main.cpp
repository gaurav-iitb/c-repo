
#include <iostream>
using namespace std;
int main() {
    int sal,all,ded;
    float tot;
    cout<<"Enter Basic Salary"<<endl;
    cin >>sal;
    cout<<"Enter Percent Of Allowance"<<endl;
    cin >>all;
    cout<<"Enter Percent Of Deduction"<<endl;
    cin >>ded;
    tot=sal*(1+(float)(all/100.0)-(float)(ded/100.0));
    cout<<"Total Salary is:"<<tot<<endl;
    
    
}
