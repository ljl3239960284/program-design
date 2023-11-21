#include<stdio.h>

int factor(int a){
    int b = 1;
    for(int i = 1;i<=a;i++)
        b *= i;
    return b;
}

int main(){
    int s = 0;
    s = factor(5) +factor(6) + factor(8);
    printf("s = %d\n",s);
    
    return 0;
}