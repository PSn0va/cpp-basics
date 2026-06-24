#include <iostream>
using namespace std;
int fib(int n){
    int i1=0;
    int i2=1;
    int i3;
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    for(int i=2;i<n;i++){
        i3=i1+i2;
        i1=i2;
        i2=i3;
    }
    return i3;

}
int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
}