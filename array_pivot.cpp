#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+((s-e)/2);
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
            mid=s+((e-s)/2);
        }
        else{
            e=mid;
            mid=s+((e-s)/2);
        }
    }
    return s;


}
int main(){
    int arr[5]={7,9,1,2,3};
    cout<<"index is ="<<pivot(arr,5);
}