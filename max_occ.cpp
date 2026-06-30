#include <iostream>
using namespace std;
int max_occ(string s){
    int count[26]={0};
    for(char i:s){
        if(i>='a'&&i<='z'){
            count[i-'a']++;
        }
        else if(i>='A'&&i<='Z'){
            count[i-'A']++;
        }

    }
    int greatest=0;
    for(int i=1;i<26;i++){
        if(count[greatest]<count[i]){
            greatest=i;
        }
    }
    return greatest;

}
int main(){
    string s;
    cin>>s;
    char max;
    max='A'+max_occ(s);
    cout<<max;


}