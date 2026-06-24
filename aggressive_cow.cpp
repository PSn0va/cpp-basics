#include <iostream>
using namespace std;
void sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-1-i);j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
bool possible(int arr[],int n,int m,int mid){
    int count=1;
    int last=arr[0];
    for(int i=0;i<n;i++){
        if((arr[i]-last)>=mid){
            count++;
            if(count==m){
                return true;
            }
        last=arr[i];}}
        return false;
}
int agg(int arr[],int n,int m){
    sort(arr,n);
    int s=0;
    int maxi=-1;
    for(int i=0;i<n;i++){
        maxi=max(arr[i],maxi);
    }
    int e=maxi;
    int ans=-1;
    int mid=s+((e-s)/2);
    while(s<=e){
        if(possible(arr,n,m,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+((e-s)/2);
    }
    return ans;}
int  main(){
    int arr[5]={4,2,1,3,6};
    cout<<agg(arr,5,2);

}