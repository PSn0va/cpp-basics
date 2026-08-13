#include<iostream>
using namespace std;
int check(int n,int arr[],int index){
    int sorted=1;
    if(index>=(n-1)){
        return 0;
    }
    if(arr[index+1]<arr[index]){
        sorted=0;
    }
    check(n,arr,index+1);
    return sorted;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sorted=check(n,arr,0);
    if(sorted){
        cout<<"array is sorted";
    }
    else{
        cout<<"array not sorted";
    }
}

