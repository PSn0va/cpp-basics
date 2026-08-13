#include<iostream>
using namespace std;
int sum(int arr[],int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int rem=sum(arr+1,size-1);
    return arr[0]+rem;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=sum(arr,n);
    cout<< "sum of array is "<<s;
}