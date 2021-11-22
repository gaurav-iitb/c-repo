
#include <iostream>
using namespace std;
#include <cstring>
#include <string>
//int main() {
    
//    char str='a';
//    cout<<a;        prints a
//    char str[]="hello world";
//    cout<<str;      prints hello world
      
//    char s={65};
//    cout<<s;    will print A
    
//    char str[]={65,66,67,'Z',69,'\0',70}; \0 is used just for better understanding
//    after /0 nothing will be printed
//    cout<<str;    will print ABCZE
    
//    char s[50];
//    cin>>s;     for input hello world
//    cout<<endl<<s;  will print hello
    
//    char s[50];
//    cout<<"enter your name";
//    cin.get(s,50);  for input gaurav sharma
//    cout<<endl<<s;  will print gaurav sharma
    //    similar output will be shown for the cin.getline(s,50)function
    
//   functions in cstring/string.h
//
    
//    main code
//    char st[100];
//    cout<<"enter the string"<<endl;
//    cin.getline(st,2);
    
//    cout<<"entered string is : "<<st<<endl;

//    char st[100]="gaurav",st2[100]="a";
//    cout<<"enter the string"<<endl;
//    1.strlen
//    cout<<endl<<strlen(st);    will print 6
//    2.strcat
//     cout<<endl<<strcat(st2,st);  // will print sharmagaurav
//    3.strncat
//    cout<<endl<<strncat(st2,st,3);  // will print sharmagau
//    cout<<endl<<strcmp(st2,st);
    
//    string st="gaurav sharma";
//    st.insert(2.9,"hello",2);
//    cout<<st; //  output gaheurav sharma
     
//    cout<<st.replace(3,4,"aa");}
    
//    return by reference
        
    int& func(int &a){
        return a;
    }
    
    int main(){
        int a=10;
        func(a)= 15;
        cout<<a;
        
        
        int *b=&a;
        *b=20;
        cout<<a;
        
        cout<<set(10)<<"hello";
    }
    
    
   


