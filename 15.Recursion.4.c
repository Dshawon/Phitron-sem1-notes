//Sum of array elements [Return_Type must be "long long"]
#include<stdio.h>
long long fun(int a[], int n, int i){
    if(i==n) return 0;
    return a[i] + fun(a,n,i+1);
}
int main(){
    int n; 
    scanf("%d",&n); 
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    long long sum = fun(a, n, 0);
    printf("%lld",sum);
}

/*
#include<stdio.h>
int fun(int a[], int n){
    if(n<0) return 0;
    return a[n] + fun(a,n-1);
}
int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int sum = fun(a, n-1);
    printf("%d",sum);
}
*/