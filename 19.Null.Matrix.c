#include<stdio.h>
int main()
{   
    int r,c; 
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    //Checking if Null or Not
    int cnt=0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(a[i][j] == 0) cnt++;
        }
    }
    if(r*c == cnt) printf("Null Matrix");
    else printf("Not");
    return 0;
}