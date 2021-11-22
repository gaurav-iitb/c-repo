//
//  main.cpp
//  template function and classes stack code
//
//  Created by Gaurav Sharma on 04/10/21.
//

#include <iostream>
using namespace std;
#include <string>

template <class T>
class stacks{
private:
    T *stk;
    static int top;
    int size;
public:
    stacks (int s){
        size=s;
        
        stk=new T[size];
    }
    void push(T x);
    void pop();
    
        
    };
template <class T>
int stacks<T>::top=0;

template <class T>
void stacks<T>::push(T x){
    if(top==size){
        cout<<"stack is full"<<endl;
    }
    else{
    stk[top]=x;
    top++;}
}

template <class T>
void stacks<T>::pop(){
    if(top==0){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<stk[top-1]<<endl;
        top=top-1;
    }
}

int main() {
    stacks<int> s1(2);
//    stacks<float> s2(2);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.pop();
    s1.pop();
    s1.pop();
    
    return 0;
}

