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

    //Print 'e'-th row of the matrix
    int e; scanf("%d",&e);
    for(int i=0; i<c; i++){
        printf("%d ",a[e][i]);
    }

    //Print 'f'-th column of the matrix
    int f; scanf("%d",&f);
    for(int i=0; i<r; i++){
        printf("%d ",a[i][f]);
    }
}