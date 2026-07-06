#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<vector<int>>& matrix) {
        int row=matrix.size()-1;
        int col=matrix[0].size()-1;
        for(int i=0;i<=row;i++){
            for(int j=0;j<=col;j++){
                if(i<j){
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        }
        for(int i=0;i<=row;i++){
            int s=0;
            int e=col;

            while(s<e){
                swap(matrix[i][s],matrix[i][e]);
                s++;
                e--;
            }
        }
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
    rotate(matrix);
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
    }