#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define SCREEN_WIDTH 80
#define SCREEN_HEIGHT 24
#define NUM_CHARACTERS 200 // 增加字符数量

typedef struct {
    int x;
    int y;
    char symbol;
    int color;
} FallingCharacter;

void clearScreen() {
    printf("\033[H\033[J"); // 清空屏幕
}

void moveCursor(int x, int y) {
    printf("\033[%d;%dH", y, x); // 移动光标
}

int main() {
    srand(time(NULL));
    FallingCharacter characters[NUM_CHARACTERS];

    // 初始化字符
    for (int i = 0; i < NUM_CHARACTERS; i++) {
        characters[i].x = rand() % SCREEN_WIDTH;
        characters[i].y = rand() % SCREEN_HEIGHT;
        characters[i].symbol = rand() % 26 + 'A';
        characters[i].color = rand() % 7 + 30; // 随机颜色代码
    }

    while (1) {
        clearScreen();

        for (int i = 0; i < NUM_CHARACTERS; i++) {
            // 移动字符向下滑落
            characters[i].y++;
            if (characters[i].y >= SCREEN_HEIGHT) {
                characters[i].y = 0; // 重新从顶部开始
                characters[i].x = rand() % SCREEN_WIDTH; // 随机新位置
                characters[i].color = rand() % 7 + 30; // 随机新颜色
            }

            // 显示字符和颜色
            moveCursor(characters[i].x, characters[i].y);
            printf("\033[%dm%c\033[0m", characters[i].color, characters[i].symbol);
        }

        fflush(stdout);
        usleep(50000); // 50毫秒延迟，增加密度
    }

    return 0;
}