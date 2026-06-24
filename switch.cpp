#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0;
    while(n!=0){
        if(n/100>0){
            c=1;
        }
        else if(n/50>0){
            c=2;
        }
        else if(n/20>0){
            c=3;
        }
        else if(n/1>0){
            c=4;
        }
        switch(c){
            case 1:
            cout<<"rs 100 notes"<<n/100<<endl;
            n=n%100;
            break;
            case 2:
            cout<<"rs 50 notes"<<n/50<<endl;
            n=n%50;
            break;
            case 3:
            cout<<"rs 20 notes"<<n/20<<endl;
            n=n%20;
            break;
            case 4:
            cout<<"rs 1 notes"<<n/1<<endl;
            n=n%1;
            break;

        }
        
    }
}