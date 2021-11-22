
#include <iostream>
using namespace std;
int main() {
    
    int n,avg,sum=0;
    cout<<"enter number of elements"<<endl;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<i+1<<"enter number";
        cin>>arr[i];
        
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];}
    avg=sum/n;
    cout<<"average is "<<avg;
    
    
    
    
    
    
    return 0;
}
