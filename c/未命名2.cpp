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
    
    // ������ת��Ϊ�ַ���
    char str[50]; // �㹻����ַ��������洢ת������ַ���
    int index = 0;
    for (int n = 0; n < size; n++) {
        index += sprintf(str + index, "%d", a[n]);
    }

    printf("%s\n", str); // ����ַ���
    printf("gg");

    return 0;
}


