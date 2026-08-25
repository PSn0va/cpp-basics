#include<iostream>
using namespace std;
void reverse(int s, int e, string &st){
    if(s>e){
        return;
    }
    swap(st[s],st[e]);
    s++;
    e--;
    reverse(s,e,st);
}
int main(){
    string st;
    cin>>st;
    int s=0;
    int e=st.length()-1;
    reverse(s,e,st);
    cout<<"after reversing: "<< st;
}