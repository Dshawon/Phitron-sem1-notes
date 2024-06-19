//Print 1 to 5
#include<stdio.h>
void fun(int n){
    if(n==6) return;
    printf("%d\n",n);
    fun(n+1);
}
int main(){
    fun(1);
}

//Print 5 to 1
#include<stdio.h>
void fun(int n){
    if(n==0) return;
    printf("%d\n",n);
    fun(n-1);
}
int main(){
    fun(5);
}

//Print 5 to 1 in "Reverse Way" 
#include<stdio.h>
void fun(int n){
    if(n==6) return;
    fun(n+1);               //এক্ষেত্রে fun() কে print এর আগে call করবো।
    printf("%d\n",n);
}
int main(){
    fun(1);
    return 0;
}