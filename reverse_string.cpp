# include <iostream>
using namespace std;
void reversea(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
}
int main(){
    char name[20];
    cin>> name;
    int n;
    cin>>n;
    reversea(name,n);
    cout<<name;
}