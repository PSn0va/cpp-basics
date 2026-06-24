#include<iostream>
using namespace std;
int factorial(int n){
    int ans=1;
    for(int i=n;i>0;i--){
        ans*=i;
    }
    return ans;
}
int combination(int n,int r){
    int ans=factorial(n)/(factorial(n-r)*factorial(r));
    return ans;

}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<combination(n,r)<<endl;
}