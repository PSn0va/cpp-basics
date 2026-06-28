
#include<iostream>
using namespace std;
void inssort(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=i;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
            else{
                break;
            }
        }
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
        }
    }
    
}
void printa(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int arr[9]={29,72,98,13,87,66,52,51,36};
    inssort(arr,9);
    printa(arr,9);

    
}