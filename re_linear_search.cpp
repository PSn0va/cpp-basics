#include <iostream>
using namespace std;
bool linear_search(int arr[],int size,int k){
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        int rem=linear_search(arr+1,size-1,k);
        return rem;
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int search=linear_search(arr,n,key);
    if(search){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
}