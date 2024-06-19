//String len বের করা।
#include <stdio.h>
int fun(char s[], int i){
    if (s[i]=='\0') return 0;
    int len = fun(s, i+1);
    return len + 1;
}
int main(){
    char s[101];
    scanf("%s", s);
    int len = fun(s, 0);
    printf("%d", len);
}

/*
Explain: ধরি, "hello" এর len বের করবো। এখন fun(s, i+1) দিবে "ello" এর len.
তাই zero index সহ len বের করতে "len + 1" return করবো।

"Call_Stack" এর মাধ্যমে খাতায় করলে আরো ভালো বুঝবে।
*/
