#include <iostream>
using namespace std;
int main(){
    const long long MOD=1000000007;
    long long ans=1;
    for(int i=1;i<213;i++){
        ans=(ans*i)%MOD;

    }
    cout<<ans<<endl;
    
}