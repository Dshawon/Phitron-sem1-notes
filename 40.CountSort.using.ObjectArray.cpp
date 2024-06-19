#include<bits/stdc++.h>
using namespace std;
class Freq{
public:
    char val;
    int cnt;
};
int main(){
    string s; cin>>s;
    Freq ob[26];    
    //Initialization
    for(int i=0; i<26; i++){
        ob[i].val = char(i+'a');
        ob[i].cnt = 0;
    }
    //Count
    for(char c:s) ob[c-'a'].cnt++;
    //print
    for(int i=0; i<26; i++){
        while(ob[i].cnt != 0){
            cout << ob[i].val;
            ob[i].cnt--;
        }
    }
}

/* input: deaddfgz
output: adddefgz */