//This code will count 'zero' to 'six'
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    int cnt[7]={0};   //cnt[0]=0 , cnt[1]=0 ,..., cnt[6]=0
    for(i=0; i<n; i++){
        cnt[a[i]]++;
    }
    for(i=0; i<7; i++){ //Print 0 to 6
        printf("%d - %d\n",i,cnt[i]);
    }
}

/*  int zero = 0, one = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)            
        {                         
            zero++;               
        }                         
        else if (a[i] == 1)       
        {
            one++;
        }
    }
    printf("%d %d", zero, one); */