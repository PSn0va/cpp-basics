#include <iostream>
using namespace std;
bool possible(int arr[],int m,int b,int mid){
    int sum=0;
    int painter=1;
    for(int i=0;i<b;i++){
        if(sum+arr[i]<=mid){
            sum+=arr[i];
        }
        else{
            painter++;
            if(painter>m||arr[i]>mid){
                return false;
            }
            sum=arr[i];
        }
    }
    return true;

}
int paint(int arr[],int k,int b){
    int s=0;
    int sum=0;
    for(int i=0;i<b;i++){
        sum+=arr[i];
    }
    int e=sum;
    int mid=s+((e-s)/2);
    int ans=mid-1;
    while(s<=e){
        if(possible(arr,k,b,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+((e-s)/2);

    }
    return ans;

}
int main(){
    int arr[4]={5,5,5,5};
    int m=2;
    cout<<paint(arr,m,4);
}