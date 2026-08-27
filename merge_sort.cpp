#include <iostream>
using namespace std;
void merge(int arr[],int s, int e){
    int mid=s+(e-s)/2;
    int len1=mid-s +1;
    int len2=e-mid;
    int k=s;
    int *arr1=new int[len1];
    int *arr2=new int[len2];
    for(int i=0;i<len1;i++){
        arr1[i]=arr[k++];
    }
    for(int i=0;i<len2;i++){
        arr2[i]=arr[k++];
    }
    int index1=0;
    int index2=0;
    k=s;
    while(index1<len1&&index2<len2){
        if(arr1[index1]<arr2[index2]){
            arr[k++]=arr1[index1++];
        }
        else{
            arr[k++]=arr2[index2++];
        }
    }
    while(index1<len1){
        arr[k++]=arr1[index1++];
    }
    while(index1<len2){
        arr[k++]=arr2[index2++];
    }
}
void sort(int arr[],int s, int e){
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;
    sort(arr,s,mid);
    sort(arr,mid+1,e);
    merge(arr,s,e);
    

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
