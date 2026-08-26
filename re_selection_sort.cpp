#include<iostream>
using namespace std;
void sort(int arr[],int index,int size){
    if(index>size-1){
        return;
    }
    int min=index;
    for(int i=index+1;i<size;i++){
        if(arr[i]<arr[min]){
            min=i;
        }
    }
    swap(arr[index],arr[min]);
    sort(arr,index+1,size);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}