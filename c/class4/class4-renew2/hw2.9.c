#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 6
#define COLS 6
#define MINES 8

void placeMines(char board[ROWS][COLS], int mines) {
    for (int i = 0; i < mines; i++) {
        int row = rand() % ROWS;
        int col = rand() % COLS;

        if (board[row][col] == '@') {
            i--;
        } else {
            board[row][col] = '@';
        }
    }
}

void printBoard(char board[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%c\t", board[i][j]);
        }
        printf("\n");
    }
}

int countMines(char board[ROWS][COLS], int row, int col) {
    int count = 0;
    for (int i = row - 1; i <= row + 1; i++) {
        for (int j = col - 1; j <= col + 1; j++) {
            if (i >= 0 && i < ROWS && j >= 0 && j < COLS && board[i][j] == '@') {
                count++;
            }
        }
    }
    return count;
}

void fillNumbers(char board[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (board[i][j] != '@') {
                int count = countMines(board, i, j);
                if (count > 0) {
                    board[i][j] = count + '0';
                }
            }
        }
    }
}

int main() {
    srand(time(0));
    char board[ROWS][COLS];
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            board[i][j] = '0';
        }
    }

    placeMines(board, MINES);
    fillNumbers(board);
    printBoard(board);

    return 0;
}
