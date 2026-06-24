#include<iostream>
using namespace std;
int duplicate(int arr[],int n){
    for (int i=1;i<n+1;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                sum++;
            }}
        if(sum==2){
            return i;
        }
        }
    return 0;
}
int main(){
    int arr[5]={1,1,2,3,4};
    cout<<duplicate(arr,5);
}