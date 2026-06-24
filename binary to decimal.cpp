#include <iostream>
#include <math.h>
using namespace std;
int main(){
    long n;
    cin>>n;
    int i=0;
    int dec=0;
    while(n!=0){
        long dig=n%10;
        if (dig==1){
            dec+=pow(2,i);
        }
        n/=10;
        i++;
    }
    cout<<dec;
}