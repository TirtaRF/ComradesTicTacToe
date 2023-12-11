#include "header.h"


// Fungsi dan Prosedur
//  Fungsi untuk menampilkan papan permainan
void wait(int seconds)
{
    clock_t end_wait;
    end_wait = clock() + seconds * CLOCKS_PER_SEC;
    while (clock() < end_wait)
    {
    }
}

void displayBoard(char board[10][10])
{
    if (size == 3)
    {
        printf("\n");
        printf("\n\t\t\t\t\t\t_________________.=============._________________");
        printf("\n\t\t\t\t\t\t|                |=====3x3=====|                |");
        printf("\n\t\t\t\t\t\t|                '============='                |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|                 ,---,---,---,                 |");
        printf("\n\t\t\t\t\t\t|                 | %c | %c | %c |                 |", board[0][0], board[0][1], board[0][2]);
        printf("\n\t\t\t\t\t\t|                 |---|---|---|                 |");
        printf("\n\t\t\t\t\t\t|                 | %c | %c | %c |                 |", board[1][0], board[1][1], board[1][2]);
        printf("\n\t\t\t\t\t\t|                 |---|---|---|                 |");
        printf("\n\t\t\t\t\t\t|                 | %c | %c | %c |                 |", board[2][0], board[2][1], board[2][2]);
        printf("\n\t\t\t\t\t\t|                 '---'---'---'                 |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|_______________________________________________|");
        printf("\n");
    }
    else if (size == 5)
    {
        printf("\n");
        printf("\n\t\t\t\t\t\t_________________.=============._________________");
        printf("\n\t\t\t\t\t\t|                |=====5x5=====|                |");
        printf("\n\t\t\t\t\t\t|                '============='                |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|             ,---,---,---,---,---,             |");
        printf("\n\t\t\t\t\t\t|             | %c | %c | %c | %c | %c |             |", board[0][0], board[0][1], board[0][2], board[0][3], board[0][4]);
        printf("\n\t\t\t\t\t\t|             |---|---|---|---|---|             |");
        printf("\n\t\t\t\t\t\t|             | %c | %c | %c | %c | %c |             |", board[1][0], board[1][1], board[1][2], board[1][3], board[1][4]);
        printf("\n\t\t\t\t\t\t|             |---|---|---|---|---|             |");
        printf("\n\t\t\t\t\t\t|             | %c | %c | %c | %c | %c |             |", board[2][0], board[2][1], board[2][2], board[2][3], board[2][4]);
        printf("\n\t\t\t\t\t\t|             |---|---|---|---|---|             |");
        printf("\n\t\t\t\t\t\t|             | %c | %c | %c | %c | %c |             |", board[3][0], board[3][1], board[3][2], board[3][3], board[3][4]);
        printf("\n\t\t\t\t\t\t|             |---|---|---|---|---|             |");
        printf("\n\t\t\t\t\t\t|             | %c | %c | %c | %c | %c |             |", board[4][0], board[4][1], board[4][2], board[4][3], board[4][4]);
        printf("\n\t\t\t\t\t\t|             '---'---'---'---'---'             |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|_______________________________________________|");
        printf("\n");
    }
    else if (size == 7)
    {
        printf("\n");
        printf("\n\t\t\t\t\t\t_________________.=============._________________");
        printf("\n\t\t\t\t\t\t|                |=====7x7=====|                |");
        printf("\n\t\t\t\t\t\t|                '============='                |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|         ,---,---,---,---,---,---,---,         |");
        printf("\n\t\t\t\t\t\t|         | %c | %c | %c | %c | %c | %c | %c |         |", board[0][0], board[0][1], board[0][2], board[0][3], board[0][4], board[0][5], board[0][6]);
        printf("\n\t\t\t\t\t\t|         |---|---|---|---|---|---|---|         |");
        printf("\n\t\t\t\t\t\t|         | %c | %c | %c | %c | %c | %c | %c |         |", board[1][0], board[1][1], board[1][2], board[1][3], board[1][4], board[1][5], board[1][6]);
        printf("\n\t\t\t\t\t\t|         |---|---|---|---|---|---|---|         |");
        printf("\n\t\t\t\t\t\t|         | %c | %c | %c | %c | %c | %c | %c |         |", board[2][0], board[2][1], board[2][2], board[2][3], board[2][4], board[2][5], board[2][6]);
        printf("\n\t\t\t\t\t\t|         |---|---|---|---|---|---|---|         |");
        printf("\n\t\t\t\t\t\t|         | %c | %c | %c | %c | %c | %c | %c |         |", board[3][0], board[3][1], board[3][2], board[3][3], board[3][4], board[3][5], board[3][6]);
        printf("\n\t\t\t\t\t\t|         |---|---|---|---|---|---|---|         |");
        printf("\n\t\t\t\t\t\t|         | %c | %c | %c | %c | %c | %c | %c |         |", board[4][0], board[4][1], board[4][2], board[4][3], board[4][4], board[4][5], board[4][6]);
        printf("\n\t\t\t\t\t\t|         |---|---|---|---|---|---|---|         |");
        printf("\n\t\t\t\t\t\t|         | %c | %c | %c | %c | %c | %c | %c |         |", board[5][0], board[5][1], board[5][2], board[5][3], board[5][4], board[5][5], board[5][6]);
        printf("\n\t\t\t\t\t\t|         |---|---|---|---|---|---|---|         |");
        printf("\n\t\t\t\t\t\t|         | %c | %c | %c | %c | %c | %c | %c |         |", board[6][0], board[6][1], board[6][2], board[6][3], board[6][4], board[6][5], board[6][6]);
        printf("\n\t\t\t\t\t\t|         '---'---'---'---'---'---'---'         |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|_______________________________________________|");
        printf("\n");
    }
}

// Fungsi untuk memeriksa apakah ada pemenang
int checkWin(char board[10][10], int size, char player)
{
    if (size == 5 || size == 7)
    {
        int symbolsInLine = (size == 5) ? 4 : 5;

        // Additional logic for horizontal and vertical wins
        for (int i = 0; i <= size - symbolsInLine; i++)
        {
            for (int j = 0; j < size; j++)
            {
                int rowWin = 1;
                int colWin = 1;
                
                for (int k = 0; k < symbolsInLine; k++)
                {
                    if (board[i + k][j] != player)
                    {
                        rowWin = 0;
                    }
                    if (board[j][i + k] != player)
                    {
                        colWin = 0;
                    }
                }
                if (rowWin || colWin)
                {
                    return 1; // Row or column win
                }
            }
        }

        // Pengecekan kemenangan diagonal dari kiri atas ke kanan bawah
		for (int i = 0; i <= size - symbolsInLine; i++)
        {
            for (int j = 0; j <= size - symbolsInLine; j++)
            {
                int diagWin = 1;
                for (int k = 0; k < symbolsInLine; k++)
                {
                    if (board[i + k][j + k] != player)
                    {
                        diagWin = 0;
                    }
                }
                if (diagWin)
                {
                    return 1;
                }
            }
        }

        // Pengecekan kemenangan diagonal dari kanan atas ke kiri bawah
        for (int i = 0; i <= size - symbolsInLine; i++)
        {
            for (int j = symbolsInLine - 1; j < size; j++)
            {
                int diagWin = 1;
                for (int k = 0; k < symbolsInLine; k++)
                {
                    if (board[i + k][j - k] != player)
                    {
                        diagWin = 0;
                    }
                }
                if (diagWin)
                {
                    return 1;
                }
            }
        }
        return 0; // Tidak Ada Pemenang
    }
    else if (size == 3)
    {
        for (int i = 0; i < size; i++)
        {
            int rowWin = 1;
            int colWin = 1;
            for (int j = 0; j < size; j++)
            {
                if (board[i][j] != player)
                {
                    rowWin = 0;
                }
                if (board[j][i] != player)
                {
                    colWin = 0;
                }
            }
            if (rowWin || colWin)
            {
                return 1; // Baris atau kolom menang
            }
            int diagWin1 = 1;
            int diagWin2 = 1;

            for (int i = 0; i < size; i++)
            {
                if (board[i][i] != player)
                {
                    diagWin1 = 0;
                }
                if (board[i][size - 1 - i] != player)
                {
                    diagWin2 = 0;
                }
            }

            if (diagWin1 || diagWin2)
            {
                return 1; // Diagonal menang
            }
        }
    }
    return 0; // Tidak ada pemenang
}

// Fungsi untuk menginisialisasi papan permainan
void initializeBoard(char board[10][10], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void stagegame()
{
    system("cls");
    initializeBoard(board, size);
    moves = 0;

    do
    {
        system("cls");

        // Tampilkan papan permainan
        printf("\n\n\n\n\n\n\n\n\t\t\t\t    Score %s - %d", player1, score1);
        printf("\t\t\tStage - %d", stage);
        printf("\t\t\tScore %s - %d", player2, score2);
        displayBoard(board);
        char currentPlayer = (moves % 2 == 0) ? 'X' : 'O';
        if (mode == 1)
        {
            // Input posisi dari pemain
            printf("\t\t\t\t\t\tGiliran pemain %s (%c). Masukkan baris (1-%d): ",
                   (currentPlayer == 'X') ? player1 : player2, currentPlayer, size, size);
            scanf("%d", &row);

            time_t startTime = time(NULL);
            int timeRemaining = 10;

            do
            {
                printf("\t\t\tWaktu tersisa: %d detik\n", timeRemaining);
                printf("\t\t\t\t\t\tGiliran pemain %s (%c). Masukkan kolom (1-%d): ",
                       (currentPlayer == 'X') ? player1 : player2, currentPlayer, size, size);

                // Menunggu 1 detik
                wait(1);

                timeRemaining = 10 - (int)(time(NULL) - startTime);

            } while (timeRemaining > 0 && !kbhit()); // Fungsi khbit adalah untuk mengecek apakah tombol ditekan atau tidak dengan library conio.h

            if (timeRemaining <= 0)
            {
                printf("Waktu habis. Pindah ke pemain lawan.\n");
                moves++;
                wait(1);
                continue;
            }
            scanf("%d", &col);
        }
        else
        {
            if (mode == 2)
            {
                if (diff == 1)
                {
                    if (currentPlayer == 'X')
                    {
                        // Code for player 'X' input remains unchanged
                        printf("\t\t\t\t\t\tGiliran pemain %s (%c). Masukkan baris (1-%d): ",
                               (currentPlayer == 'X') ? player1 : player2, currentPlayer, size);
                        scanf("%d", &row);

                        time_t startTime = time(NULL);
                        int timeRemaining = 10;
                        do
                         {
                            printf("\t\t\tWaktu tersisa: %d detik\n", timeRemaining);
                            printf("\t\t\t\t\t\tGiliran pemain %s (%c). Masukkan kolom (1-%d): ",
                                (currentPlayer == 'X') ? player1 : player2, currentPlayer, size, size);

                            // Menunggu 1 detik
                            wait(1);

                            timeRemaining = 10 - (int)(time(NULL) - startTime);

                                 } while (timeRemaining > 0 && !kbhit()); // Fungsi khbit adalah untuk mengecek apakah tombol ditekan atau tidak dengan library conio.h

                                 if (timeRemaining <= 0)
                                  {
                               printf("Waktu habis. Pindah ke pemain lawan.\n");
                               moves++;
                               wait(1);
                              continue;
                                 }
                        
                        scanf("%d", &col);
                    }
                    else if (currentPlayer == 'O')
                    {
                        // Generate random inputs for player 'O'
                        row = rand() % size + 1;
                        col = rand() % size + 1;
                    }
                }
                if (diff == 2)
                {
                    if (mode == 2 && size == 3)
                    {
                        if (currentPlayer == 'X')
                        {
                            // Code for player 'X' input remains unchanged
                            printf("\t\t\tGiliran pemain %s (%c). Masukkan baris (1-%d): ",
                                   (currentPlayer == 'X') ? player1 : player2, currentPlayer, size);
                            scanf("%d", &row);

                            time_t startTime = time(NULL);
                            int timeRemaining = 10;
                            do
                             {
                            printf("\t\t\tWaktu tersisa: %d detik\n", timeRemaining);
                            printf("\t\t\t\t\t\tGiliran pemain %s (%c). Masukkan kolom (1-%d): ",
                                (currentPlayer == 'X') ? player1 : player2, currentPlayer, size, size);

                            // Menunggu 1 detik
                            wait(1);

                            timeRemaining = 10 - (int)(time(NULL) - startTime);

                                 } while (timeRemaining > 0 && !kbhit()); // Fungsi khbit adalah untuk mengecek apakah tombol ditekan atau tidak dengan library conio.h

                                 if (timeRemaining <= 0)
                                  {
                               printf("Waktu habis. Pindah ke pemain lawan.\n");
                               moves++;
                               wait(1);
                                  continue;
                                 }
                        
                           
                            scanf("%d", &col);
                             }
                        else if (currentPlayer == 'O')
                        {
                            // Generate random inputs for player 'O'
                            int prioritizedRows[] = {1, 2, 2, 2, 3};
                            int prioritizedCols[] = {2, 1, 2, 3, 2};
                            int numPrioritized = 5;

                            int index = rand() % numPrioritized;

                            row = prioritizedRows[index];
                            col = prioritizedCols[index];

                            if (row < 1 || row > size || col < 1 || col > size || board[row - 1][col - 1] != ' ')
                            {
                                row = rand() % size + 1;
                                col = rand() % size + 1;
                            }
                        }
                    }
                    else if (mode == 2 && size == 5)
                    {
                        if (currentPlayer == 'X')
                        {
                            // Code for player 'X' input remains unchanged
                            printf("\t\t\t\t\t\tGiliran pemain %s (%c). Masukkan baris (1-%d): ",
                                   (currentPlayer == 'X') ? player1 : player2, currentPlayer, size);
                            scanf("%d", &row);

                            time_t startTime = time(NULL);
                            int timeRemaining = 10;

                            do
                             {
                            printf("\t\t\tWaktu tersisa: %d detik\n", timeRemaining);
                            printf("\t\t\t\t\t\tGiliran pemain %s (%c). Masukkan kolom (1-%d): ",
                                (currentPlayer == 'X') ? player1 : player2, currentPlayer, size, size);

                            // Menunggu 1 detik
                            wait(1);

                            timeRemaining = 10 - (int)(time(NULL) - startTime);

                                 } while (timeRemaining > 0 && !kbhit()); // Fungsi khbit adalah untuk mengecek apakah tombol ditekan atau tidak dengan library conio.h

                                 if (timeRemaining <= 0)
                                  {
                               printf("Waktu habis. Pindah ke pemain lawan.\n");
                               moves++;
                               wait(1);
                                  continue;
                                 }
                            scanf("%d", &col);
                        }
                        else if (currentPlayer == 'O')
                        {
                            // Generate random inputs for player 'O'
                            int prioritizedRows[] = {1, 2, 3, 3, 3, 3, 3, 4, 5};
                            int prioritizedCols[] = {3, 3, 1, 2, 3, 4, 5, 3, 3};
                            int numPrioritized = 9;

                            int index = rand() % numPrioritized;

                            row = prioritizedRows[index];
                            col = prioritizedCols[index];

                            if (row < 1 || row > size || col < 1 || col > size || board[row - 1][col - 1] != ' ')
                            {
                                row = rand() % size + 1;
                                col = rand() % size + 1;
                            }
                        }
                    }
                    else if (mode == 2 && size == 7)
                    {
                        if (currentPlayer == 'X')
                        {
                            // Code for player 'X' input remains unchanged
                            printf("\t\t\t\t\t\tGiliran pemain %s (%c). Masukkan baris (1-%d): ",
                                   (currentPlayer == 'X') ? player1 : player2, currentPlayer, size);
                            scanf("%d", &row);

                            time_t startTime = time(NULL);
                            int timeRemaining = 10;

                            do
                             {
                            printf("\t\t\tWaktu tersisa: %d detik\n", timeRemaining);
                            printf("\t\t\t\t\t\tGiliran pemain %s (%c). Masukkan kolom (1-%d): ",
                                (currentPlayer == 'X') ? player1 : player2, currentPlayer, size, size);

                            // Menunggu 1 detik
                            wait(1);

                            timeRemaining = 10 - (int)(time(NULL) - startTime);

                                 } while (timeRemaining > 0 && !kbhit()); // Fungsi khbit adalah untuk mengecek apakah tombol ditekan atau tidak dengan library conio.h

                                 if (timeRemaining <= 0)
                                  {
                               printf("Waktu habis. Pindah ke pemain lawan.\n");
                               moves++;
                               wait(1);
                               continue;
                                 }
                            scanf("%d", &col);
                        }
                        else if (currentPlayer == 'O')
                        {
                            // Generate random inputs for player 'O'
                            int prioritizedRows[] = {1, 2, 3, 4, 4, 4, 4, 4, 4, 4, 5, 6, 7};
                            int prioritizedCols[] = {4, 4, 4, 1, 2, 3, 4, 5, 6, 7, 4, 4, 4};
                            int numPrioritized = 13;

                            int index = rand() % numPrioritized;

                            row = prioritizedRows[index];
                            col = prioritizedCols[index];

                            if (row < 1 || row > size || col < 1 || col > size || board[row - 1][col - 1] != ' ')
                            {
                                row = rand() % size + 1;
                                col = rand() % size + 1;
                            }
                        }
                    }
                }
                if (diff == 3)
                {
                    if (mode == 2 && size == 3)
                    {
                        if (currentPlayer == 'X')
                        {
                            // Code for player 'X' input remains unchanged
                            printf("\t\t\t\t\t\tGiliran pemain %s (%c). Masukkan baris (1-%d): ",
                                   (currentPlayer == 'X') ? player1 : player2, currentPlayer, size);
                            scanf("%d", &row);

                            time_t startTime = time(NULL);
                            int timeRemaining = 10;

                            do
                             {
                            printf("\t\t\tWaktu tersisa: %d detik\n", timeRemaining);
                            printf("\t\t\t\t\t\tGiliran pemain %s (%c). Masukkan kolom (1-%d): ",
                                (currentPlayer == 'X') ? player1 : player2, currentPlayer, size, size);

                            // Menunggu 1 detik
                            wait(1);

                            timeRemaining = 10 - (int)(time(NULL) - startTime);

                                 } while (timeRemaining > 0 && !kbhit()); // Fungsi khbit adalah untuk mengecek apakah tombol ditekan atau tidak dengan library conio.h

                                 if (timeRemaining <= 0)
                                  {
                               printf("Waktu habis. Pindah ke pemain lawan.\n");
                               moves++;
                               wait(1);
                               continue;
                                }
                            scanf("%d", &col);
                        }
                        else if (currentPlayer == 'O')
                        {
                            // Generate random inputs for player 'O'
                            int prioritizedRows[] = {1, 1, 2, 3, 3};
                            int prioritizedCols[] = {1, 3, 2, 1, 3};
                            int numPrioritized = 5;

                            int index = rand() % numPrioritized;

                            row = prioritizedRows[index];
                            col = prioritizedCols[index];

                            if (row < 1 || row > size || col < 1 || col > size || board[row - 1][col - 1] != ' ')
                            {
                                row = rand() % size + 1;
                                col = rand() % size + 1;
                            }
                        }
                    }
                    else if (mode == 2 && size == 5)
                    {
                        if (currentPlayer == 'X')
                        {
                            // Code for player 'X' input remains unchanged
                            printf("\t\t\t\t\t\tGiliran pemain %s (%c). Masukkan baris (1-%d): ",
                                   (currentPlayer == 'X') ? player1 : player2, currentPlayer, size);
                            scanf("%d", &row);

                            time_t startTime = time(NULL);
                            int timeRemaining = 10;

                             do
                             {
                            printf("\t\t\tWaktu tersisa: %d detik\n", timeRemaining);
                            printf("\t\t\t\t\t\tGiliran pemain %s (%c). Masukkan kolom (1-%d): ",
                                (currentPlayer == 'X') ? player1 : player2, currentPlayer, size, size);

                            // Menunggu 1 detik
                            wait(1);

                            timeRemaining = 10 - (int)(time(NULL) - startTime);

                                 } while (timeRemaining > 0 && !kbhit()); // Fungsi khbit adalah untuk mengecek apakah tombol ditekan atau tidak dengan library conio.h

                                 if (timeRemaining <= 0)
                                  {
                               printf("Waktu habis. Pindah ke pemain lawan.\n");
                               moves++;
                               wait(1);
                               continue;
                                }
                            scanf("%d", &col);
                        }
                        else if (currentPlayer == 'O')
                        {
                            // Generate random inputs for player 'O'
                            int prioritizedRows[] = {1, 1, 2, 2, 3, 4, 4, 5, 5};
                            int prioritizedCols[] = {1, 5, 2, 4, 3, 2, 4, 1, 5};
                            int numPrioritized = 9;

                            int index = rand() % numPrioritized;

                            row = prioritizedRows[index];
                            col = prioritizedCols[index];

                            if (row < 1 || row > size || col < 1 || col > size || board[row - 1][col - 1] != ' ')
                            {
                                row = rand() % size + 1;
                                col = rand() % size + 1;
                            }
                        }
                    }
                    else if (mode == 2 && size == 7)
                    {
                        if (currentPlayer == 'X')
                        {
                            // Code for player 'X' input remains unchanged
                            printf("\t\t\t\t\t\tGiliran pemain %s (%c). Masukkan baris (1-%d): ",
                                   (currentPlayer == 'X') ? player1 : player2, currentPlayer, size);
                            scanf("%d", &row);

                            time_t startTime = time(NULL);
                            int timeRemaining = 10;

                           do
                             {
                            printf("\t\t\tWaktu tersisa: %d detik\n", timeRemaining);
                            printf("\t\t\t\t\t\tGiliran pemain %s (%c). Masukkan kolom (1-%d): ",
                                (currentPlayer == 'X') ? player1 : player2, currentPlayer, size, size);

                            // Menunggu 1 detik
                            wait(1);

                            timeRemaining = 10 - (int)(time(NULL) - startTime);

                                 } while (timeRemaining > 0 && !kbhit()); // Fungsi khbit adalah untuk mengecek apakah tombol ditekan atau tidak dengan library conio.h

                                 if (timeRemaining <= 0)
                                  {
                               printf("Waktu habis. Pindah ke pemain lawan.\n");
                               moves++;
                               wait(1);
                               continue;
                                }
                            scanf("%d", &col);
                        }
                        else if (currentPlayer == 'O')
                        {
                            // Generate random inputs for player 'O'
                            int prioritizedRows[] = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6, 7, 7};
                            int prioritizedCols[] = {1, 7, 2, 6, 3, 5, 4, 3, 5, 2, 6, 1, 7};
                            int numPrioritized = 13;

                            int index = rand() % numPrioritized;

                            row = prioritizedRows[index];
                            col = prioritizedCols[index];

                            if (row < 1 || row > size || col < 1 || col > size || board[row - 1][col - 1] != ' ')
                            {
                                row = rand() % size + 1;
                                col = rand() % size + 1;
                            }
                        }
                    }
                }
            }
            char currentPlayer = (moves % 2 == 0) ? 'X' : 'O';
        }

        // Validasi input
        if (row < 1 || row > size || col < 1 || col > size || board[row - 1][col - 1] != ' ')
        {
            printf("Masukan tidak valid. Coba lagi.\n");
            continue;
        }

        // Isi papan permainan
        board[row - 1][col - 1] = currentPlayer;
        moves++;

        // Periksa pemenang atau seri
        if (checkWin(board, size, currentPlayer))
        {
            system("cls");
            displayBoard(board);
            printf("\t\t\t\t\tPemain %s (%c) memenangkan permainan!\n", (currentPlayer == 'X') ? player1 : player2, currentPlayer);
            if (currentPlayer == 'X')
            {
                score1++;
            }
            else
            {
                score2++;
            }
            stage++;
            break;
        }
        else if (moves == size * size)
        {
            system("cls");
            displayBoard(board);
            printf("\t\t\t\t\tPermainan berakhir seri.\n");
            break;
        }

    } while (1);

    printf("\t\t\t\t\tTekan Enter untuk melanjutkan :");
    getchar();
    getchar();

    char ngulang[3];
    printf("\t\t\t\t\tApakah anda ingin mengulang permainan? Yes(Y)/No(N): ");
    scanf(" %s", &ngulang);

    for (int i = 0; ngulang[i]; i++)
    {
        ngulang[i] = tolower(ngulang[i]);
    }

    if (strcmp(ngulang, "yes") == 0 || strcmp(ngulang, "y") == 0)
    {
        stagegame();
    }
    else
    {
        leaderboards();
        stage=1;
        score1=0;
        score2=0;
        mainMenu();
    }
}

void leaderboards()
{
    FILE *file = fopen("leaderboard.txt", "r"); // Open file in read mode

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    int i = 0;
    while (fscanf(file, "Player: %s - Score: %d\n", leaderboard[i].name, &leaderboard[i].score) == 2)
    {
        i++;
    }

    fclose(file);

    // Update leaderboard with new scores
    // Assuming player1, player2, score1, score2 are updated accordingly in your code
    strcpy(leaderboard[LEADERBOARD_SIZE - 2].name, player1);
    leaderboard[LEADERBOARD_SIZE - 2].score = score1;

    strcpy(leaderboard[LEADERBOARD_SIZE - 1].name, player2);
    leaderboard[LEADERBOARD_SIZE - 1].score = score2;

    // Sort leaderboard based on scores
    for (int i = 0; i < LEADERBOARD_SIZE - 1; i++)
    {
        for (int j = i + 1; j < LEADERBOARD_SIZE; j++)
        {
            if (leaderboard[i].score < leaderboard[j].score)
            {
                Playerhs temp = leaderboard[i];
                leaderboard[i] = leaderboard[j];
                leaderboard[j] = temp;
            }
        }
    }
    // Write updated leaderboard to file
    file = fopen("leaderboard.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    for (int i = 0; i < LEADERBOARD_SIZE; i++)
    {
        fprintf(file, "Player: %s - Score: %d\n", leaderboard[i].name, leaderboard[i].score);
    }

    fclose(file);
}

void displayLeaderboards()
{
    system("cls");
    Playerhs leaderboard[LEADERBOARD_SIZE];

    FILE *file = fopen("leaderboard.txt", "r"); // Open file in read mode

    if (file == NULL)
    {
        printf("\t\t\t\t\t\t\t\t\tError opening file!\n");
        return;
    }

    int i = 0;
    while (fscanf(file, "Player: %s - Score: %d\n", leaderboard[i].name, &leaderboard[i].score) == 2)
    {
        i++;
    }

    fclose(file);

    // Display leaderboard in terminal
    printf("\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t    ===== Leaderboard =====\n");
    for (int i = 0; i < LEADERBOARD_SIZE; i++)
    {
        printf("\t\t\t\t\t\t\tPlayer: %-15s - Score: %d\n", leaderboard[i].name, leaderboard[i].score);
    }
    printf("\n\n\t\t\t\t\t\t\t     Press Enter To Continue");
    getchar();
    system("cls");
    mainMenu();
    // Logika untuk menampilkan leaderboard dapat ditambahkan di sini
}
void rulesPlaying()
{
    system("cls");
    // List tutorial
    printf("\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t[]======================================================================================[]\n");
    printf("\t\t\t\t\t\t\t\t\t   ATURAN BERMAIN\n");
    printf("\t\t\t\t\t[]======================================================================================[]\n");
    printf("\t\t\t\t\t[]1. Pilihlah papan yang anda inginkan!\n");
    printf("\t\t\t\t\t     Mode-3x3     \t Mode-5x5            \t Mode-7x7\n");
    printf("\t\t\t\t\t     _____________\t_____________________\t_____________________________\n");
    printf("\t\t\t\t\t     |___|___|___|\t|___|___|___|___|___|\t|___|___|___|___|___|___|___|\n");
    printf("\t\t\t\t\t     |___|___|___|\t|___|___|___|___|___|\t|___|___|___|___|___|___|___|\n");
    printf("\t\t\t\t\t     |___|___|___|\t|___|___|___|___|___|\t|___|___|___|___|___|___|___|\n");
    printf("\t\t\t\t\t                  \t|___|___|___|___|___|\t|___|___|___|___|___|___|___|\n");
    printf("\t\t\t\t\t                  \t|___|___|___|___|___|\t|___|___|___|___|___|___|___|\n");
    printf("\t\t\t\t\t                  \t                     \t|___|___|___|___|___|___|___|\n");
    printf("\t\t\t\t\t                  \t                     \t|___|___|___|___|___|___|___|\n");
    printf("\t\t\t\t\t[]2. Pilih mode player yang diinginkan (Single Player/Multi Player).                    []\n");
    printf("\t\t\t\t\t[]3. Jika single player, maka harus memilih difficulty mode terlebih dahulu.            []\n");
    printf("\t\t\t\t\t[]4. Masukkan nama yang anda inginkan!                                                  []\n");
    printf("\t\t\t\t\t[]5. Player 1 = 'X' Player 2 = 'O'!                                                     []\n");
    printf("\t\t\t\t\t[]6. Jika game sudah dimulai, cara menginputkan adalah dengan [nomor] spasi [nomor]     []\n");
    printf("\t\t\t\t\t[]7. Cara untuk menang adalah membuat baris sejajar horizontal/vertikal/diagonal        []\n");
    printf("\t\t\t\t\t[]   sesuai dengan papan board dengan simbol yang sama                                  []\n");
    printf("\t\t\t\t\t[]8. Note: Untuk papan board 5x5 harus  mendapat 4 baris sejajar untuk meraih kemenangan[]\n");
    printf("\t\t\t\t\t[]9. Note: Untuk papan board 7x7 harus  mendapat 5 baris sejajar untuk meraih kemenangan[]\n");
    printf("\t\t\t\t\t[]======================================================================================[]\n");
    printf("\n");
    printf("\n\t\t\t\t\t\t\t\t\tPress Enter To Continue");
    getchar();
    getchar();     // Menunggu user menekan Enter
    system("cls"); // Membersihkan layar terminal
    mainMenu();
}

void playing()
{
    system("cls");
    // Pilihan Mode
    printf("\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t_________________.=============._________________");
    printf("\n\t\t\t\t\t\t|                |=Choice Mode=|                |");
    printf("\n\t\t\t\t\t\t|                '============='                |");
    printf("\n\t\t\t\t\t\t|                                               |");
    printf("\n\t\t\t\t\t\t|                                               |");
    printf("\n\t\t\t\t\t\t|                                               |");
    printf("\n\t\t\t\t\t\t|                                               |");
    printf("\n\t\t\t\t\t\t|                 1. Mode-3x3                   |");
    printf("\n\t\t\t\t\t\t|                 2. Mode-5x5                   |");
    printf("\n\t\t\t\t\t\t|                 3. Mode-7x7                   |");
    printf("\n\t\t\t\t\t\t|                 0. Kembali                    |");
    printf("\n\t\t\t\t\t\t|                                               |");
    printf("\n\t\t\t\t\t\t|                                               |");
    printf("\n\t\t\t\t\t\t|                                               |");
    printf("\n\t\t\t\t\t\t|                                               |");
    printf("\n\t\t\t\t\t\t|                                               |");
    printf("\n\t\t\t\t\t\t|_______________________________________________|");
    printf("\n\t\t\t\t\t\t\t\tPilih mode (0/1/2/3): ");
    scanf(" %d", &choice);

    switch (choice)
    {
    case 1:
        size = 3;
        inputPlayer();
        break;
    case 2:
        size = 5;
        inputPlayer();
        break;
    case 3:
        size = 7;
        inputPlayer();
        break;
    case 0:
        gameMode();
    default:
        printf("\t\t\t\t\t\tPilihan tidak valid. Silahkan pilih lagi\n");
    }
}

void mainMenu()
{
    do
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n");
        printf("\n\t\t\t\t\t\t_________________.===========.___________________");
        printf("\n\t\t\t\t\t\t|                |=MAIN MENU=|                  |");
        printf("\n\t\t\t\t\t\t|                '==========='                  |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|                1. Bermain                     |");
        printf("\n\t\t\t\t\t\t|                2. Aturan Bermain              |");
        printf("\n\t\t\t\t\t\t|                3. Leaderboard                 |");
        printf("\n\t\t\t\t\t\t|                0. Keluar                      |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|_______________________________________________|");
        printf("\n\t\t\t\t\t\t\t\tPilih menu (0/1/2/3): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            gameMode();
            break;
        case 2:
            rulesPlaying();
            break;
        case 3:
            displayLeaderboards();
            break;
        case 0:
            printf("\t\t\t\t\t\tTerima kasih telah bermain!\n");
            break;
        default:
            printf("\t\t\t\t\tPilihan tidak valid. Silakan pilih lagi.\n");
        }
        printf("\t\t\t\t\t\tCredit =\n");
        printf("\t\t\t\t\t\tDaffa Muzhaffar Fakhruddin (231524038) (Guardian of Waifu)\n");
        printf("\t\t\t\t\t\tMuhammad Adhyaksa Fadillah (231524051) (Wibu Slayer)\n");
        printf("\t\t\t\t\t\tTirta Rifky Fauzan         (231524063) (Jendral of Anime)\n");
        printf("\t\t\t\t\t\tTekan Enter untuk melanjutkan :"); // Teks "tekan enter untuk melanjutkan"
        getchar();                                             // Mengambil karakter dari input (enter) untuk melanjutkan
        getchar();                                             // Untuk menunggu sampai pengguna menekan Enter
    } while (choice != 0);
}

void gameMode()
{
    do
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n");
        printf("\n\t\t\t\t\t\t________________.===============.________________");
        printf("\n\t\t\t\t\t\t|               |===Game Mode===|               |");
        printf("\n\t\t\t\t\t\t|               '==============='               |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|                1. Player Vs Player            |");
        printf("\n\t\t\t\t\t\t|                2. Player Vs Computer          |");
        printf("\n\t\t\t\t\t\t|                0. Kembali                     |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|                                               |");
        printf("\n\t\t\t\t\t\t|_______________________________________________|");
        printf("\n\t\t\t\t\t\t\t\tPilih menu (0/1/2): ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            mode = 1;
            playing();
            break;
        case 2:
            mode = 2;
            difficulty();
            break;
        case 0:
            mainMenu();
            break;
        default:
            printf("\t\t\t\t\t\tPilihan tidak valid. Silakan pilih lagi.\n");
        }
    } while (choice != 0);
}

void inputPlayer()
{
    if (mode == 1)
    {
        system("cls");
        // Input nama Player 1
    	printf("\n\n\n\n\n\n\n\n");
   		printf("\n\t\t\t\t\t\t_________________.=============._________________");
    	printf("\n\t\t\t\t\t\t|                |==INPUTNAME==|                |");
    	printf("\n\t\t\t\t\t\t|                '============='                |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|            Masukkan nama pemain 1             |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|_______________________________________________|");
    	printf("\n\t\t\t\t\t\t\t\tInput Nama: ");
    	scanf("%s", player1);
    	
        system("cls");

        // Input nama Player 2
		printf("\n\n\n\n\n\n\n\n");
    	printf("\n\t\t\t\t\t\t_________________.=============._________________");
    	printf("\n\t\t\t\t\t\t|                |==INPUTNAME==|                |");
    	printf("\n\t\t\t\t\t\t|                '============='                |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|            Masukkan nama pemain 2             |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|_______________________________________________|");
    	printf("\n\t\t\t\t\t\t\t\tInput Nama: ");
    	scanf("%s", player2);
        stagegame();
    }
    else
    {
        system("cls");
        // Input nama Player 1
    	printf("\n\n\n\n\n\n\n\n");
   		printf("\n\t\t\t\t\t\t_________________.=============._________________");
    	printf("\n\t\t\t\t\t\t|                |==INPUTNAME==|                |");
    	printf("\n\t\t\t\t\t\t|                '============='                |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|            Masukkan nama pemain 1             |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|                                               |");
    	printf("\n\t\t\t\t\t\t|_______________________________________________|");
    	printf("\n\t\t\t\t\t\t\t\tInput Nama: ");
    	scanf("%s", player1);
        strcpy(player2, "Computer");
        system("cls");
        stagegame();
    }
}

void difficulty()
{
    system("cls");
    // Pilihan Mode
    printf("\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t_________________.=============._________________");
    printf("\n\t\t\t\t\t\t|                |=Choice Mode=|                |");
    printf("\n\t\t\t\t\t\t|                '============='                |");
    printf("\n\t\t\t\t\t\t|                                               |");
    printf("\n\t\t\t\t\t\t|                                               |");
    printf("\n\t\t\t\t\t\t|                                               |");
    printf("\n\t\t\t\t\t\t|                                               |");
    printf("\n\t\t\t\t\t\t|                 1. Easy                       |");
    printf("\n\t\t\t\t\t\t|                 2. Medium                     |");
    printf("\n\t\t\t\t\t\t|                 3. Hard                       |");
    printf("\n\t\t\t\t\t\t|                 0. Kembali                    |");
    printf("\n\t\t\t\t\t\t|                                               |");
    printf("\n\t\t\t\t\t\t|                                               |");
    printf("\n\t\t\t\t\t\t|                                               |");
    printf("\n\t\t\t\t\t\t|                                               |");
    printf("\n\t\t\t\t\t\t|                                               |");
    printf("\n\t\t\t\t\t\t|_______________________________________________|");
    printf("\n\t\t\t\t\t\t\t\tPilih mode (0/1/2/3): ");
    scanf(" %d", &choice);

    switch (choice)
    {
    case 1:
        diff = 1;
        playing();
        break;
    case 2:
        diff = 2;
        playing();
        break;
    case 3:
        diff = 3;
        playing();
        break;
    case 0:
        gameMode();
    default:
        printf("\t\t\t\t\t\tPilihan tidak valid. Silahkan pilih lagi\n");
    }
}

void gameStart()
{   
    system("cls");
    printf("\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t_______________________________________________________");
    printf("\n\t\t\t\t\t\t|    ________     |       ___       |     ________    |");
    printf("\n\t\t\t\t\t\t|   |___  ___|    |      |   |      |    |  ______|   |");
    printf("\n\t\t\t\t\t\t|      |  |       |      |   |      |    | |______    |");
    printf("\n\t\t\t\t\t\t|      |__|       |      |___|      |    |________|   |");
    printf("\n\t\t\t\t\t\t|_________________|_________________|_________________|");
    printf("\n\t\t\t\t\t\t|    ________     |    _________    |     ________    |");
    printf("\n\t\t\t\t\t\t|   |___  ___|    |   |   ___   |   |    |  ______|   |");
    printf("\n\t\t\t\t\t\t|      |  |       |   |  |___|  |   |    | |______    |");
    printf("\n\t\t\t\t\t\t|      |__|       |   |__|   |__|   |    |________|   |");
    printf("\n\t\t\t\t\t\t|_________________|_________________|_________________|");
    printf("\n\t\t\t\t\t\t|    ________     |    ________     |    __________   |");
    printf("\n\t\t\t\t\t\t|   |___  ___|    |   |  ____  |    |   |             |");
    printf("\n\t\t\t\t\t\t|      |  |       |   | |____| |    |   |==========   |");
    printf("\n\t\t\t\t\t\t|      |__|       |   |________|    |   |__________   |");
    printf("\n\t\t\t\t\t\t|_________________|_________________|_________________|");
    printf("\n\t\t\t\t\t\t\t\tPress Enter To Continue");
    getchar();     //Menunggu untuk menekan enter
    system("cls"); // Membersihkan layar terminal
    mainMenu();
}

