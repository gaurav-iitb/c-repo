#include <iostream>
using namespace std;
#include <string>


//for this i need to make sure that only consonants are counted like (- or + etc) should not be counted as a consonan
//and also one more thing i do not have to count more than one consecutive spaces


int main() {
    string st="how    Many wOrds--++=%$#@!";
    int vow=0,cons=0,word=0;

       // how Many wOrds
    cout<<"string is "<<st;
    cout<<endl;
    for(int i=0;st[i]!=0;i++){
        
        
        if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'||st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='U'){
            vow++;
        }
        
        else if(st[i]==' '){
            if(st[i+1]!=' '){
                word++;
            }
            
        }
        else {
            if((st[i]<=90 && st[i]>=65) || (st[i]<=122 && st[i]>=97)){
            cons++;
            }
        }
        
        
    }
    cout<<"no of words"<<word+1<<endl;
    cout<<"no of vowels"<<vow<<endl;
    cout<<"no of consonants"<<cons<<endl;
    
    
    return 0;
}
