#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt[26]={0};
    for(char c:s) cnt[c-'a']++;

    for(int i=0; i<26; i++)
        if(cnt[i]!=0) cout<<char(i+'a')<<" "<<cnt[i]<<endl;
}

    // Case_02: print Given character-wise   [according to "val"]
    // for(int i=0; i<s.size(); i++){
    //     int val=s[i]-'a';
    //     if (cnt[val]!=0){
    //         cout<<char(val+'a')<<" "<<cnt[val]<<endl;
    //     }
    //     cnt[val]=0;
    // }
