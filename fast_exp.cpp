#include<iostream>
using namespace std;
int modexp(int x,int n,int m){
    int r=1;
    while(n>0){
        if(n&1){
            r=(1LL*r*x%m)%m;
        }
        x=(x%m*x%m)%m;
        n=n>>1;
    }
    return r;
}
int main(){
    int x,n,m;
    cin>>x>>n>>m;
    cout<<modexp(x,n,m);
}
