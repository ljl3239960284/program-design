#include <stdio.h>

int main() {
    int num1, num2, num3;

    // ��ʾ�û����������������λ��
    printf("�����������������λ�����Կո�ָ��� ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // ʹ��ð�������㷨������������������
    int temp;
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // ����������λ��
    printf("���������е���λ���� %d %d %d\n", num1, num2, num3);

    return 0;
}


