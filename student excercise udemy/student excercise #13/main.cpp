//
//  main.cpp
//  student excercise #13
//
//  Created by Gaurav Sharma on 04/10/21.
//

#include<iostream>
using namespace std;
class StackOverFlow:exception{};
class StackUnderFlow:exception{};
class Stack
{
private:
 int *stk;
 int top=-1;
 int size;
public:
 Stack(int sz)
 {
 size=sz;
 stk=new int[size];
 }
 void push(int x)
 {
 if(top==size-1)
 throw StackOverFlow();
 top++;
 stk[top]=x;
 }
 int pop()
 {
 if(top==-1)
 throw StackUnderFlow();
 return stk[top--];
 }
};
int main()
{
 Stack s(5);
    try{
 s.push(2);
 s.push(3);
 s.push(4);
 s.push(10);
 s.push(9);
 s.push(8);
    }
    catch(class StackOverFlow){
        cout<<"we can't add more numbers now"<<endl;
    }
    catch(class StackUnderFlow){
        cout<<"stackunderflow"<<endl;
    }
}
