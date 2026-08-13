#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n;
    int **arr=new int*[n];
    int *size=new int[n]; 
    for(int i=0;i<n;i++){
        cin>>size[i];
        arr[i]=new int[size[i]];        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<size[i];j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<size[i];j++){
            cout<<arr[i][j]<<"\t";
        }
    }
    for(int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
    delete[] size;

}