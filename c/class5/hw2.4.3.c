#include<stdio.h>
#include<stdlib.h>

int mm(char a[50]){
    fgets (a,sizeof(a),stdin);
    for (int i = 0;i<50 && a[i] != '\0' ; i++){
        char b = a[i];
        b = b + 2;
        a[i] = b;
    }
}

int main(){
    printf("please input:");
    char a[50];
    mm(a);
    printf("%s",a);

    return 0;
}                                                                                           