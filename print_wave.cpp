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
    for(int j=0;j<4;j++ ){
        if(j&1){
            for(int i=2;i>=0;i--){
                cout<<arr[i][j]<< " "; 
            }

        }
        else{
            for(int i=0;i<3;i++){
                cout<<arr[i][j]<< " ";
            }
        }
        cout<<endl;
    }
}