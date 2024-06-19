#include<stdio.h>
int main(){   
    double x=5.78;
    double* ptr = &x;
    double* ptr2 = ptr;
    *ptr2 = 100.50;

    printf("%.2lf\n",x);
    printf("%.2lf\n",*ptr);
    printf("%.2lf\n",*ptr2);
}