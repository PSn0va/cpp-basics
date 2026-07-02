#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    // for(int i=0;i<s.length();i++){
    //     if(s[i]==s[i+1]){
    //         s.erase(i,2);
    //         i=-1;
    //     }
    // }
    string ans;
    for(char ch:s){
        if(!ans.empty()&&ans.back()==ch){
            ans.pop_back();
        }
        else{
            ans.push_back(ch);
        }
    }
    cout<<ans;
}