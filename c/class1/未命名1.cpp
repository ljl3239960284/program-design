#include <stdio.h>

int main() {
    int num1, num2, num3;

    // 提示用户输入三个无序的三位数
    printf("请输入三个无序的三位数，以空格分隔： ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // 使用冒泡排序算法对这三个数进行排序
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

    // 输出有序的三位数
    printf("按升序排列的三位数： %d %d %d\n", num1, num2, num3);

    return 0;
}


