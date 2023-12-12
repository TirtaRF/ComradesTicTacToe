#include "body.h"

int checkWin(char board[10][10], int size, char player);

void printBoard(char board[10][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

void testBoard(char board[10][10], int size, char player, char* sizeName) {
    printf("Testing %s board:\n", sizeName);
    printBoard(board, size);
    int result = checkWin(board, size, player);
    if (result == 1) {
        printf("Player %c wins on %s board!\n", player, sizeName);
    } else {
        printf("No winner on %s board.\n", sizeName);
    }
    printf("-------------------------\n");
}

int main() {
    // Test untuk 3x3
    char board3x3[10][10] = {
        {' ', ' ', 'X'},
        {' ', 'X', ' '},
        {'X', ' ', ' '}  
    };
    printf("Test X :\n");
    testBoard(board3x3, 3, 'X', "3x3");
    printf("Test O :\n");
    testBoard(board3x3, 3, 'O', "3x3");

    // Test untuk 5x5
    char board5x5[10][10] = {
        {' ', ' ', ' ', ' ', ' '},
        {'X', ' ', ' ', ' ', ' '},
        {'X', ' ', ' ', ' ', ' '},  
        {'X', ' ', ' ', ' ', ' '},
        {'X', ' ', ' ', ' ', ' '}
    };
    printf("Test X :\n");
    testBoard(board5x5, 5, 'X', "5x5");
    printf("Test O :\n");
    testBoard(board5x5, 5, 'O', "5x5");

    // Test untuk 7x7
    char board7x7[10][10] = {
        {'X', 'X', 'X', 'X', 'X', ' ', ' '},
        {' ', ' ', ' ', 'X', ' ', ' ', 'O'},
        {' ', ' ', 'X', ' ', ' ', ' ', ' '},  
        {' ', ' ', ' ', ' ', ' ', ' ', 'X'},
        {' ', ' ', ' ', ' ', ' ', ' ', 'O'},
        {' ', ' ', ' ', ' ', ' ', ' ', 'O'},
        {' ', ' ', ' ', ' ', ' ', 'O', ' '}
    };
    printf("Test X :\n");
    testBoard(board7x7, 7, 'X', "7x7");
    printf("Test O :\n");
    testBoard(board7x7, 7, 'O', "7x7");

    return 0;
}
