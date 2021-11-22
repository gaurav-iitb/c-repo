#include <iostream>
using namespace std;
#include <string>

int main() {
    string st;
    int vow=0,cons=0,word=0;
    char j='a',k='A';
    cout<<"enter the string";    // how Many wOrds
    getline(cin,st);
    cout<<endl;
    for(int i=0;st[i]!=0;i++){
        
        //in this solution the problem is that for multiple consecutive spaces in entered string this code will give false result of no of words like how    are you here for multiple spaces this code will not work
        if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'||st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='U'){
            vow++;
        }
        
        else if(st[i]==' '){
            word++;
        }
        else {
            cons++;
        }
        
        
    }
    cout<<"no of words"<<word+1<<endl;
    cout<<"no of vowels"<<vow<<endl;
    cout<<"no of consonants"<<cons<<endl;
    
    
    return 0;
}
