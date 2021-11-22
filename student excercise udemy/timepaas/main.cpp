//
//  main.cpp
//  timepaas
//
//  Created by Gaurav Sharma on 12/10/21.
//

#include <iostream>
#include <string>
using namespace std;
  
class MyClass {
  int x;
public:
  void setX(int i) { x = i; }
  int getX() { return x; }
};
 
int main()
{
  MyClass obs[4];
  int i;

  for(i=0; i < 4; i++)
    obs[i].setX(i);

  for(i=0; i < 4; i++)
    cout << "obs[" << i << "].getX(): " << obs[i].getX() << "\n";
//    char s3[20]="good";
//    char s5[]="";
//    strncpy(s5,s3,1);
//    cout<<s5;
//    char x=127;
//    cout<<&x;
  
}
