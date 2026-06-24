#include<iostream>
using namespace std;
int max(int arr[],int size){
    int greatest=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>greatest){
            greatest=arr[i];
        }
    }
    return greatest;

}
int min(int arr[],int size){ 
    int smallest=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    return smallest;

}
int main(){
    int arr[13]={1,231,5435,1616,6,42,234,53,21,53};
    cout<<"min"<<min(arr,13)<<endl;
    cout<<"max"<<max(arr,13);
}