
#include<iostream>
using namespace std;
void inssort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
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