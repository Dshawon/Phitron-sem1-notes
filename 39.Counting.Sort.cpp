#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    int cnt[26]={0};
    for(char c:s) cnt[c-'a']++;
    for(int i=0; i<26; i++){
        while(cnt[i] != 0){
            cout<<char(i+'a');
            cnt[i]--;
        }
    }
}

/* input: deaddfgz
output: adddefgz */