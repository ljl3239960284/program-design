#include<stdio.h>
#include<stdlib.h>

int main(){
    char a[50];
    printf("please input:");
    fgets (a,sizeof(a),stdin);
    for (int i = 0;i<50 && a[i] != '\0' ; i++){
        char b = a[i];
        b = b + 2;
        a[i] = b;
    }
    printf("%s",a);

    return 0;
}                                                                                           