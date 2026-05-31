#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n){
        int space=n-i;
        int star=i;
        while (space>0){
            cout<<" ";
            space--;
        }
        while(star>0){
            cout<<"*";
            star--;
        }
        cout<<endl;
        i++;
    }
}
