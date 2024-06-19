#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m], b[n];
    for(int i=0; i<m; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++){
        scanf("%d",&b[i]);
    }
    int ans[m+n];
    for(int i=0; i<m; i++){
        ans[i]=a[i];
    }
    for(int i=m,j=0; j<n; j++,i++){
        ans[i]=b[j];
    }
    for(int i=0; i<m+n; i++){
        printf("%d ",ans[i]);
    }
}
