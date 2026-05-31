#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i1=0;
    int i2=1;
    cout<<i1<<" ";
    cout<<i2<<" ";
    for(int i=2;i<n;i++){
        int i3=i1+i2;
        cout<<i3<<" ";
        i1=i2;
        i2=i3;
    }
}