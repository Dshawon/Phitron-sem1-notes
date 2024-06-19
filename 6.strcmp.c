#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int d=strcmp(a,b);
    
    if(d<0) printf("A choto");
    else if(d>0) printf("B choto");
    else printf("Same");
}