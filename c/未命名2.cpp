#include<stdio.h>
#include<time.h>

int main(){
    int a[10];
    int b[10];

    srand(time(NULL));

    for(int i=0;i<10;i++){
        a[i] =(int)rand()%10;
        printf("%d",a[i]);
    }

    for(int u=0;u<10;u++){
        b[u]=(int)rand()%10;
        printf("%d",b[u]);
    }
    
    a[0]=b[0]=0;
    
    int size = sizeof(a) / sizeof(a[0]);
    
    // 将数组转换为字符串
    char str[50]; // 足够大的字符数组来存储转换后的字符串
    int index = 0;
    for (int n = 0; n < size; n++) {
        index += sprintf(str + index, "%d", a[n]);
    }

    printf("%s\n", str); // 输出字符串
    printf("gg");

    return 0;
}


