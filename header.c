#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#define LEADERBOARD_SIZE 10
#define MAX_NAME_LENGTH 50

// Deklrasi
int choice;
int size, row, col, moves, mode, diff;
char player1[50], player2[50];
char board[10][10];
int stage = 1;
int score1, score2 = 0;

typedef struct {
    char name[MAX_NAME_LENGTH];
    int score;
} Playerhs;

Playerhs leaderboard[LEADERBOARD_SIZE];

// Deklarasi Fungsi dan Prosedur
void gameStart();

void rulesPlaying();

void displayLeaderboards();

void leaderboards();

void playing();

void mainMenu();

void gameMode();

void inputPlayer();

void displayBoard(char board[10][10]);

int checkWin(char board[10][10], int size, char player);

void initializeBoard(char board[10][10], int size);

void stagegame();

void difficulty();

void wait(int seconds);
