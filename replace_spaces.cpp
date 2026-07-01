#include<iostream>
using namespace std;
string rep(string s){
    cout<<"replace with what"<<endl;
    string t;
    cin>>t;
    string ans;
    for(char i:s){
        if(i==' '){
            for(char j:t){
                ans.push_back(j);

            }
        }
        else{
            ans.push_back(i);
        }

    }
    return ans;

}
int main(){
    string s;
    getline(cin, s);
    cout<<rep(s);
}