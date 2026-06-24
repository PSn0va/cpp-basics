#include<iostream>
using namespace std;
bool ispossible(int arr[],int n,int m,int mid){
    int student_count=1;
    int pagesum=0;
    for(int i=0;i<n;i++){
        if((pagesum+arr[i])<=mid){
            pagesum+=arr[i];
        }
        else{
            student_count++;
            if(student_count>m||arr[i]>mid){
                return false;
            }
            pagesum=arr[i]; 
        }
    }
    return true;   
}
int allocate(int arr[],int n,int m){
    int s=0;
    int sum;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int mid=s+((e-s)/2);
    int ans=-1;
    while (s<=e)
    {
        if (ispossible(arr,n,m,mid)){
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
    int arr[4]={10,20,30,40};
    int m=2;
    cout<<allocate(arr,4,m);
}