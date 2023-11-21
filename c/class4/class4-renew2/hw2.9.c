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
    for(int i = 0;;i++){
        printf("input:");
        scanf("%d",&v);
        if(v <= 900 && v>= 0)
            break;
        else printf("please input between [0,900]\n");
    }

    for(int g=0;g<v;g++){
        a[rand()%30][rand()%30] = '@';
    }

    /*
    for(int i = 0;i<N;i++){
        for(int n = 0;n<N;n++){
            printf("%c  ",a[i][n]);
        }
        printf("\n");
    }
    */

    
    for(int i = 0;i<N;i++){
        for(int n = 0;n<N;n++){
            if(a[i][n]!='@'){
                int m = 0;
                if(a[i-1][n-1]== '@' && i-1>=0 && n-1>=0)
                    m++;
                
                if(a[i][n-1]=='@' && n-1>=0)
                    m++;

                if (a[i+1][n-1]=='@' && i+1<30 && n-1<=0)
                    m++;

                if(a[i-1][n]=='@' && i-1>=0 )
                    m++;

                if(a[i+1][n]=='@'&& i+1<30)
                    m++;

                if(a[i-1][n+1]=='@' && i-1>=0 && n+1<30)
                    m++;

                if(a[i][n+1]=='@' && n+1<30)
                    m++;

                if(a[i+1][n+1]=='@' && n+1<30 && i+1<30)
                    m++;
                a[i][n] = m;
            }else continue;
        }
    }


    for(int i = 0;i<N;i++){
        for(int n = 0;n<N;n++){
            if(a[i][n]=='@')
            printf("%c  ",a[i][n]);
            else printf("%d  ",a[i][n]);
        }
        printf("\n");
    }
     
    return 0;
}