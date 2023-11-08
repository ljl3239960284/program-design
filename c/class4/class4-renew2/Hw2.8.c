#include<stdio.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int a[5][5];
    for (int i = 0;i<5;i++){
        printf("\n");
        for(int j = 0;j<5;j++){
            a[i][j] = rand()%50;
            printf("a[%d][%d]=%d\t",i,j,a[i][j]);
        }

    }
    int max = a[0][0];
    for(int q = 0;q<5;q++){
        for(int w = 0;w<5;w++){
            if(max<a[q][w]){
                max = a[q][w];
            }
        }
    }
    int sum = 0;
    printf("\nmax = %d\n",max);
    for(int e = 0;e<5;e++){
        sum += a[e][e];
        sum += a[e][4-e];
    }
    sum -= a[2][2];
    printf("sum = %d",sum);

    return 0;
}