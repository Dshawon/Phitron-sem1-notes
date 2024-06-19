#include<bits/stdc++.h>
using namespace std;

class Freq{
public:
    char val;
    int cnt;
};

bool cmp(Freq a, Freq b){
    if(a.cnt == b.cnt) return a.val < b.val;  // Additional_Condition
    else return a.cnt > b.cnt;                // Main_Condition
}

int main(){
    string s; cin>>s;
    Freq f[26];
    //Initialization
    for(int i=0; i<26; i++){
        f[i].val = char(i+'a');
        f[i].cnt = 0;
    }
    //Count
    for(char c:s){
        f[c-'a'].cnt++;
    }
    //Sort
    sort(f, f+26, cmp);
    //Print
    for(int i=0; i<26; i++){
        while(f[i].cnt != 0){
            cout << f[i].val;
            f[i].cnt--;
        }
    }
}

/*  
    Jar count beshi seti age print hobe.

    Input: abzcbzcbzz
    Output: zzzzbbbcca
*/
