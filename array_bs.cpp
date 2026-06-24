#include <iostream>
using namespace std;
int bs(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;
    while(low<=high){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            high=mid-1;
            mid=(low+high)/2;
        }
        else{
            low=mid+1;
            mid=(low+high)/2;
        }}
    return 0;
}
int main(){
    int arr[10]={12,15,63,68,97,102,324,642,675,795};
    int key;
    cin>>key;
    cout<<"the given element is on array position"<<bs(arr,10,key)+1;
}