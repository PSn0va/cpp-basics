#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        for(int i=0;i<r;i++){
            int s=0;
            int e=c-1;
            while(s<=e){
                int mid=s+(e-s)/2;
                if(matrix[i][mid]==target){
                    return true;
                }
                else if(matrix[i][mid]<target){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }
        return false;
    }

int main(){
    vector<vector<int>> matrix;
    cout<<"Enter elements";
    int n;
    int m;
     cin>>n>>m;
    matrix.resize(n, vector<int>(m));;
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    searchMatrix(matrix, 15);
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
    }