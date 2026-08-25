#include<iostream>
using namespace std;
bool palindrome(int s, int e, string &st){
    if(s>e){
        return true ;
    }
    if (st[s]!=st[e]){
        return false;
    }
    else{
        return palindrome(s+1,e-1,st);
    }}
int main(){
    string st;
    cin>>st;
    int s=0;
    int e=st.length()-1;
    bool f=palindrome(s,e,st);
    if(f){
        cout<<"palidrome";
    }
    else{
        cout<<"wrong";
    }}