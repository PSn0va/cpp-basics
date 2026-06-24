#include<iostream>
using namespace std;
int count(int a,int b){
    int no=0;
    for(int i=0;i<32;i++){
        if(a&1==1){
            no++;
        }
        if(b&1==1){
            no++;
        }
        a=a>>1;
        b=b>>1;
    }
    return no;

}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"no.of set bits"<<count(a,b)<<endl;
}