#include<iostream>
using namespace std;
int main(){
    int arr[3][4];
    cout<<"Enter elements";
    for(int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    cout<< "Row Sum";
    int greatest=INT32_MIN;
    for(int i=0;i<3;i++){
        int rsum=0;
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
            rsum+=arr[i][j];
        }
        cout<<"~"<<rsum<<endl;
        if(greatest<rsum){
            greatest=rsum;
        }
    }
    cout<<greatest;
}