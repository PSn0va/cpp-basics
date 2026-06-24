#include <iostream>
using namespace std;
void reversearr(int arr[], int size){
    int start=0;
    int end=size-1;
    while (start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={2,43,1,51,4};
    reversearr(arr,5);

}