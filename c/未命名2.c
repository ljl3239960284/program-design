#include <stdio.h>

void bubbleSort(int *array, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int array[3][3] = {{3, 2, 6}, {1, 5, 4}, {9, 8, 7}};
    int temp[9];
    int k = 0;

    // 将二维数组转换为一维数组
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            temp[k] = array[i][j];
            k++;
        }
    }

    // 对一维数组进行冒泡排序
    bubbleSort(temp, 9);

    k = 0;

    // 将排序后的一维数组转换回二维数组
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            array[i][j] = temp[k];
            k++;
        }
    }

    printf("Sorted 2D array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
