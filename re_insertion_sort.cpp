#include <iostream>
using namespace std;
void sort(int arr[],int x,int size){
    if(x>size-1){
        return;
    }
    int temp=arr[x];
    int j=x-1;
    while(j>=0){
        if(arr[j]>temp){
            arr[j+1]=arr[j];
        }
        else{
            break;
        }
        j--;
    }
    arr[j+1]=temp;
    sort(arr,x+1,size);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,1,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}