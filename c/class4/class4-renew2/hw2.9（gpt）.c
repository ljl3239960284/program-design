#include<stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
    int N = 30;
    char a[N][N];
    srand(time(NULL));

    for(int i = 0;i<N;i++){
        for(int n = 0;n<N;n++){
            a[i][n] = '0';
        }
    }

    int v;
    printf("input:");
    scanf("%d",&v);

    for(int g=0;g<v;g++){
        a[rand()%30][rand()%30] = '@';
    }

    for(int i = 0;i<N;i++){
        for(int n = 0;n<N;n++){
            if(a[i][n]!='@'){
                int m = 0;
                for(int p = -1; p <= 1; p++){
                    for(int q = -1; q <= 1; q++){
                        if(p == 0 && q == 0) continue;
                        int row = i + p;
                        int col = n + q;
                        if(row >= 0 && row < N && col >= 0 && col < N && a[row][col] == '@'){
                            m++;
                        }
                    }
                }
                a[i][n] = m + '0';
            }
        }
    }

    for(int i = 0;i<N;i++){
        for(int n = 0;n<N;n++){
            printf("%c  ",a[i][n]);
        }
        printf("\n");
    }
     
    return 0;
}
