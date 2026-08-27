#include <iostream>
using namespace std;
void merge(int arr[],int s, int e){

}
void sort(int arr[],int s, int e){
    if(s>=e){
        return;
    }
    

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