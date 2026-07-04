#include<iostream>
#include<vector>
using namespace std;
vector<int> Order(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int columns=matrix[0].size();
        int size=row*columns;
        int count=0;
        int startr=0;
        int startc=0;
        int endr=row-1;
        int endc=columns-1;
        while(count<size){
            if(count<size){
            for(int i=startc;i<=endc;i++){
                ans.push_back(matrix[startr][i]);
                count++;
            }
            startr++;}
            if(count<size){
            for(int i=startr;i<=endr;i++){
                ans.push_back(matrix[i][endc]);
                count++;
            }
            endc--;}
            if(count<size){
            for(int i=endc;i>=startc;i--){
                ans.push_back(matrix[endr][i]);
                count++;
            }
            endr--;}
            if(count<size){
            for(int i=endr;i>=startr;i--){
                ans.push_back(matrix[i][startc]);
                count++;
            }
            startc++;}
        }
        return ans;
        
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
    Order(matrix);
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
    }