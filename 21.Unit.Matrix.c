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

    //Checking Unit (identity) Matrix or Not   [Almost like scalar matrix]
    int flag=0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(i==j){
                if(a[i][j] != 1) flag=1;
            }
            else if(a[i][j]!=0) flag=1;
        }
    }
    if(flag==0) printf("Scalar Matrix");
    else printf("Not");
}

/*
NB: For checking secondary_diagonal_matrix like this,
0 0 0 1
0 0 1 0    just write (i+j == r-1) or (i+j == c-1)
0 1 0 0          instead of (i == j)
1 0 0 0

NB: (i+j == r+1) or (i+j == c+1) হতো যদি loop '1' থেকে শুরু হতো।
*/