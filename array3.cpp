#include<iostream>
using namespace std;
void alt(int arr[], int n){
    if (n%2==0){
        for(int i=0;i<n;i=i+2){
        swap(arr[i],arr[i+1]);
    }}
    else{
        for(int i=0;i<n-1;i=i+2){
        swap(arr[i],arr[i+1]);

    }}
    
}
int main(){
    int arr[5]={1,2,3,4,5};
    alt(arr,5);
    int i=0;
    while(i<5){
        cout<<arr[i]<<" ";
        i++;
    }
}