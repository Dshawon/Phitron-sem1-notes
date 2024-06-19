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
    //Checking Diagonal or not
    int flag=0;
    if(r!=c) flag=1;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(i==j) continue; 
            if(a[i][j]!=0) flag=1;
        }
    }
    if(flag==0) printf("Diagonal");
    else printf("Not");

    //Checking Diagonal or not [Alternative way]
    int flag=0;
    if(r!=c) flag=1;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(i!=j && a[i][j]!=0){
                flag=1; 
                break;
            } 
        }
    }
    if(flag==0) printf("Diagonal");
    else printf("Not");
}
//For checking secondary diagonal: if(i+j==r-1) continue; or if(i+j==c-1) continue;