#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    for(int i=0; i<n/2; i++){
        int temp = ar[i];
        ar[i] = ar[n-1-i];
        ar[n-1-i] = temp;
    }
    for(int i=0; i<n; i++){
        printf("%d ",ar[i]);
    }
}
