#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reversea(vector<int> &v,int in){
    int n=v.size();
    int start=in+1;
    int end=n-1;
    while(start<end){
        swap(v[start],v[end]);
        start++;
        end--;
    }
}
void printa(vector<int> v){
    for(int i:v){
        cout<<i<<endl;
    }
}
int main(){
    vector<int> v;
    int in;
    cout<<"enter pos ";
    cin>>in;

    v.push_back(12);
    v.push_back(10);
    v.push_back(34);
    v.push_back(23);
    v.push_back(51);
    v.push_back(42);
    v.push_back(63);
    reversea(v,in);
    printa(v);
}