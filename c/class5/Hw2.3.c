#include<stdio.h>

double factor(int a){
    double b = 1;
    for(int i = 1;i<=a;i++)
        b *= i;
    return b;
}

double power(int a,int x){
    double b = 1.0;
    for (int i = 1;i<=a;i++)
        b *= x;
    return b;
}
double part(int a,int x){
    double b = power(a,x)/factor(a);
    return b;
}

double sinx(int x){
    double b = x - part(3,x) + part (5,x) - part(7,x) + part(9,x) - part(11,x) + part(13,x) - part(15,x) + part(17,x);
    return b;
}

int main(){
    int x;
    printf("please input x:");
    scanf("%d",&x);
    printf("sin(x)=%lf\n",sinx(x));

    return 0;
}