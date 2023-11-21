#include<stdio.h>

int power(int a,int k){
    int result = 1;
    for (int i =0;i<k;i++)
        result *= a;
    return result;
}

int part(int n,int k){
    int result = 0;
    for(int i = 1;i<=n;i++)
        result += power(i,k);
    return result;
}

int main(){
    int n,k;
    printf("Please input n:");
    scanf("%d",&n);
    printf("\nPlease input k:");
    scanf("%d",&k);

    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=k;j++){
            printf("%d*",i);
        }
        printf("1 + ");
    }

    printf(" = %d",part(n,k));

    return 0;
}