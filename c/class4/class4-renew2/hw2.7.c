#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[50];
    printf("please input:")
    gets (a);
    for (int i = 0;i<50 && i != '\0' ; i++){
        char b = a[i];
        char c = b + 3;
        a[i] = c;
    }
    printf("%s",a);

    return 0;
}                                                                                           