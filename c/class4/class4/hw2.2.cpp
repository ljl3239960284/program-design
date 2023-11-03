#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int array[], int n) {
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
    int n = 10;
    int a[n];
    int g;
    int v1 = 0;
    int count = 0;

    srand(time(0));

    for (g = 0; g < n; g++) {
        a[g] = (int)rand() % 100;
        printf("%d\n", a[g]);
    }

    bubbleSort(a, n);

    printf("Sorted array: ");
    for (int t = 0; t < n; t++) {
        printf("%d ", a[t]);
    }
	printf("\n");
	for(int q = 0;q<n;q++)
		count += a[q];
	
	double aver = count/10;
	for(int h = 0;h<n;h++)
		v1 += (a[h]-aver)*(a[h]-aver);
		
	double v = v1 /10;
	
	printf("\nVariance: %.2f\n", v);
	printf("average score: %.2f\n", aver);
	printf("lowest score:%d\n",a[1]);
	printf("highest score:%d\n",a[2]);
	printf("total score:%d\n",count);
	
	
	
    return 0;
}

