#include<iostream>
using namespace std;
bool binary_search(int arr[],int s, int e,int k){
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]<k){
        binary_search(arr,mid+1,e,k);
    }
    else{
        binary_search(arr,s,mid+1,k);
    }
    return false;
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
    int search=binary_search(arr,0,n-1,key);
    if(search){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
}