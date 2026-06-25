#include<iostream>
using namespace std;
void selsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int mina=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[mina]){
                mina=j;
            }

        }
        if(arr[i]==arr[mina]){
            continue;
        }
        swap(arr[i],arr[mina]);
    }

}
void printa(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int arr[9]={29,72,98,13,87,66,52,51,36};
    selsort(arr,9);
    printa(arr,9);

    
}