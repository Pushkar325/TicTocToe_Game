#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>
#include <math.h>
#include <windows.h>
#include <stdbool.h>

void check(char, char);
char arr[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
void gameName()
{
    printf("\n\n*************** Tic Tac toe ***************\n");
    printf("               =============                   \n\n\n");
}
void show()
{
    printf("############# You Play Against Bot Friend ###########\n");
    printf("             *****************************      \n\n ");
    printf("\n Player 1 symbol : x:");
    printf("\n Player 2 symbol : 0:\n\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", arr[0], arr[1], arr[2]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", arr[3], arr[4], arr[5]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", arr[6], arr[7], arr[8]);
    printf("     |     |     \n\n");
}

void start()
{
    char pa;
    printf("\n************* Player 1 always start the Game ************* :\n");
    scanf("%c", &pa);
}
int count = 0;
void play()
{
    char p, s;
    printf("\nEnter position by Player : \n");
    fflush(stdin);
    scanf("%c", &p);
    printf("Enter the symbol by Player :\n ");
    fflush(stdin);
    scanf("%c", &s);
    count++;
    check(p, s);
}
void check(char p, char s)
{
    int i;
    for (i = 0; i <= 8; i++)
    {
        if (arr[i] == p)
        {
            arr[i] = s;
        }
    }
}

int winning()
{
    if ((arr[0] == 'X' && arr[1] == 'X' && arr[2] == 'X') || (arr[0] == 'X' && arr[3] == 'X' && arr[6] == 'X') || arr[0] == 'X' && arr[4] == 'X' && arr[8] == 'X')
    {
        return (100);
    }
    if ((arr[0] == 'x' && arr[1] == 'x' && arr[2] == 'x') || (arr[0] == 'x' && arr[3] == 'x' && arr[6] == 'x') || arr[0] == 'x' && arr[4] == 'x' && arr[8] == 'x')
    {
        return (100);
    }
    else if ((arr[0] == '0' && arr[1] == '0' && arr[2] == '0') || (arr[0] == '0' && arr[3] == '0' && arr[6] == '0') || arr[0] == '0' && arr[4] == '0' && arr[8] == '0')
    {
        return (200);
    }
    else if (arr[1] == 'X' && arr[4] == 'X' && arr[7] == 'X')
    {
        return (100);
    }
    else if (arr[1] == 'x' && arr[4] == 'x' && arr[7] == 'x')
    {
        return (100);
    }
    else if (arr[1] == '0' && arr[4] == '0' && arr[7] == '0')
    {
        return (200);
    }
    else if (arr[2] == 'X' && arr[5] == 'X' && arr[8] == 'X')
    {
        return (100);
    }
    else if (arr[2] == 'x' && arr[5] == 'x' && arr[8] == 'x')
    {
        return (100);
    }
    else if (arr[2] == '0' && arr[5] == '0' && arr[8] == '0')
    {
        return (200);
    }
    else if (arr[3] == 'X' && arr[4] == 'X' && arr[5] == 'X')
    {
        return (100);
    }
    else if (arr[3] == 'x' && arr[4] == 'x' && arr[5] == 'x')
    {
        return (100);
    }
    else if (arr[3] == '0' && arr[4] == '0' && arr[5] == '0')
    {
        return (200);
    }
    else if (arr[2] == 'X' && arr[4] == 'X' && arr[6] == 'X')
    {
        return (100);
    }
    else if (arr[2] == 'x' && arr[4] == 'x' && arr[6] == 'x')
    {
        return (100);
    }
    else if (arr[2] == '0' && arr[4] == '0' && arr[6] == '0')
    {
        return (200);
    }
    else if (arr[6] == 'X' && arr[7] == 'X' && arr[8] == 'X')
    {
        return (100);
    }
    else if (arr[6] == 'x' && arr[7] == 'x' && arr[8] == 'x')
    {
        return (100);
    }
    else if (arr[6] == '0' && arr[7] == '0' && arr[8] == '0')
    {
        return (200);
    }
    return (300); // if any condition is not satified
}

void Show_tic_toc_board(char tic_tac_board[3][3])
{
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", tic_tac_board[0][0], tic_tac_board[0][1], tic_tac_board[0][2]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", tic_tac_board[1][0], tic_tac_board[1][1], tic_tac_board[1][2]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", tic_tac_board[2][0], tic_tac_board[2][1], tic_tac_board[2][2]);
    printf("     |     |     \n\n");
    return;
}

const char computer = 'O', user = 'X';
int increatent = 0;

void Input_taken(char tic[3][3])
{

    int row, col;
labelll:
{
levelll:
    Show_tic_toc_board(tic);
    printf("\n Enter row number under(0-2) : ");
    scanf("%d", &row);
    printf("\n");
    printf("\n Enter coloum number under(0-2 : ");
    scanf("%d", &col);
    printf("\n");
    getchar();
    if ((row > 2) || (col > 2) || (row < 0) || (col < 0))
    {
        printf(" \n\n Invalid Input : Please Enter Valid Input : \n\n ");
        printf("\n");
        goto levelll;

    }
}
    if (tic[row][col] != ' ')
    {
        printf(" Already Uses!!Try Again..\n");
        goto labelll;
    }
    else
    {
        tic[row][col] = user;
        ++increatent;
        Show_tic_toc_board(tic);
    }
    return;
}

bool check_Win(char tic[3][3], char play)
{

    if (
        (tic[0][0] == play && tic[0][1] == play && tic[0][2] == play) ||
        (tic[1][0] == play && tic[1][1] == play && tic[1][2] == play) ||
        (tic[2][0] == play && tic[2][1] == play && tic[2][2] == play) ||
        (tic[0][0] == play && tic[1][0] == play && tic[2][0] == play) ||
        (tic[0][1] == play && tic[1][1] == play && tic[2][1] == play) ||
        (tic[0][2] == play && tic[1][2] == play && tic[2][2] == play) ||
        (tic[0][0] == play && tic[1][1] == play && tic[2][2] == play) ||
        (tic[0][2] == play && tic[1][1] == play && tic[2][0] == play))
        return true;
    else
        return false;
}

bool Resistance_to_Win(char tic[3][3])
{
    if ((tic[0][0] == tic[0][1]) && tic[0][2] == ' ' && tic[0][0] == computer)
    {
        tic[0][2] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[0][1] == tic[0][2]) && tic[0][0] == ' ' && tic[0][1] == computer)
    {
        tic[0][0] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[0][0] == tic[0][2]) && tic[0][1] == ' ' && tic[0][0] == computer)
    {
        tic[0][1] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[1][0] == tic[1][1]) && tic[1][2] == ' ' && tic[1][0] == computer)
    {
        tic[1][2] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[1][1] == tic[1][2]) && tic[1][0] == ' ' && tic[1][1] == computer)
    {
        tic[1][0] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[1][0] == tic[1][2]) && tic[1][1] == ' ' && tic[1][0] == computer)
    {
        tic[1][1] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[2][0] == tic[2][1]) && tic[2][2] == ' ' && tic[2][0] == computer)
    {
        tic[2][2] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[2][1] == tic[2][2]) && tic[2][0] == ' ' && tic[2][1] == computer)
    {
        tic[2][0] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[2][0] == tic[2][2]) && tic[2][1] == ' ' && tic[2][0] == computer)
    {
        tic[2][1] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[0][0] == tic[1][0]) && tic[2][0] == ' ' && tic[0][0] == computer)
    {
        tic[2][0] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[0][0] == tic[2][0]) && tic[1][0] == ' ' && tic[0][0] == computer)
    {
        tic[1][0] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[1][0] == tic[2][0]) && tic[0][0] == ' ' && tic[1][0] == computer)
    {
        tic[0][0] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[0][1] == tic[1][1]) && tic[2][1] == ' ' && tic[0][1] == computer)
    {
        tic[2][1] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[0][1] == tic[2][1]) && tic[1][1] == ' ' && tic[0][1] == computer)
    {
        tic[1][1] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[1][1] == tic[2][1]) && tic[0][1] == ' ' && tic[1][1] == computer)
    {
        tic[0][1] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[0][2] == tic[1][2]) && tic[2][2] == ' ' && tic[0][2] == computer)
    {
        tic[2][2] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[0][2] == tic[2][2]) && tic[1][2] == ' ' && tic[0][2] == computer)
    {
        tic[1][2] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[1][2] == tic[2][2]) && tic[0][2] == ' ' && tic[1][2] == computer)
    {
        tic[0][2] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[0][0] == tic[1][1]) && tic[2][2] == ' ' && tic[0][0] == computer)
    {
        tic[2][2] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[0][0] == tic[2][2]) && tic[1][1] == ' ' && tic[0][0] == computer)
    {
        tic[1][1] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[1][1] == tic[2][2]) && tic[0][0] == ' ' && tic[1][1] == computer)
    {
        tic[0][0] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[0][2] == tic[1][1]) && tic[2][0] == ' ' && tic[1][1] == computer)
    {
        tic[2][0] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[2][0] == tic[0][2]) && tic[1][1] == ' ' && tic[2][0] == computer)
    {
        tic[1][1] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[2][0] == tic[1][1]) && tic[0][2] == ' ' && tic[2][0] == computer)
    {
        tic[0][2] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[0][0] == tic[0][1]) && tic[0][2] == ' ' && tic[0][0] == user)
    {
        tic[0][2] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[0][1] == tic[0][2]) && tic[0][0] == ' ' && tic[0][1] == user)
    {
        tic[0][0] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[0][0] == tic[0][2]) && tic[0][1] == ' ' && tic[0][0] == user)
    {
        tic[0][1] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[1][0] == tic[1][1]) && tic[1][2] == ' ' && tic[1][0] == user)
    {
        tic[1][2] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[1][1] == tic[1][2]) && tic[1][0] == ' ' && tic[1][1] == user)
    {
        tic[1][0] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[1][0] == tic[1][2]) && tic[1][1] == ' ' && tic[1][0] == user)
    {
        tic[1][1] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[2][0] == tic[2][1]) && tic[2][2] == ' ' && tic[2][0] == user)
    {
        tic[2][2] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[2][1] == tic[2][2]) && tic[2][0] == ' ' && tic[2][1] == user)
    {
        tic[2][0] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[2][0] == tic[2][2]) && tic[2][1] == ' ' && tic[2][0] == user)
    {
        tic[2][1] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[0][0] == tic[1][0]) && tic[2][0] == ' ' && tic[0][0] == user)
    {
        tic[2][0] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[0][0] == tic[2][0]) && tic[1][0] == ' ' && tic[0][0] == user)
    {
        tic[1][0] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[1][0] == tic[2][0]) && tic[0][0] == ' ' && tic[1][0] == user)
    {
        tic[0][0] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[0][1] == tic[1][1]) && tic[2][1] == ' ' && tic[0][1] == user)
    {
        tic[2][1] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[0][1] == tic[2][1]) && tic[1][1] == ' ' && tic[0][1] == user)
    {
        tic[1][1] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[1][1] == tic[2][1]) && tic[0][1] == ' ' && tic[1][1] == user)
    {
        tic[0][1] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[0][2] == tic[1][2]) && tic[2][2] == ' ' && tic[0][2] == user)
    {
        tic[2][2] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[0][2] == tic[2][2]) && tic[1][2] == ' ' && tic[0][2] == user)
    {
        tic[1][2] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[1][2] == tic[2][2]) && tic[0][2] == ' ' && tic[1][2] == user)
    {
        tic[0][2] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[0][0] == tic[1][1]) && tic[2][2] == ' ' && tic[0][0] == user)
    {
        tic[2][2] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[0][0] == tic[2][2]) && tic[1][1] == ' ' && tic[0][0] == user)
    {
        tic[1][1] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[1][1] == tic[2][2]) && tic[0][0] == ' ' && tic[1][1] == user)
    {
        tic[0][0] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[0][2] == tic[1][1]) && tic[2][0] == ' ' && tic[1][1] == user)
    {
        tic[2][0] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[2][0] == tic[0][2]) && tic[1][1] == ' ' && tic[2][0] == user)
    {
        tic[1][1] = computer;
        ++increatent;
        return true;
    }
    else if ((tic[2][0] == tic[1][1]) && tic[0][2] == ' ' && tic[2][0] == user)
    {
        tic[0][2] = computer;
        ++increatent;
        return true;
    }
    else
        return false;
}

void computer_Move(char tic[3][3])
{
    int q = increatent;
    if (increatent == q && tic[0][0] == computer && tic[0][2] == computer && tic[1][1] == ' ' && ((tic[2][2] == ' ' && tic[1][2] == ' ') || (tic[2][0] == ' ' && tic[1][0] == ' ')))
    {
        tic[1][1] = computer;
        ++increatent;
    }
    else if (increatent == q && tic[0][0] == computer && tic[2][0] == computer && tic[1][1] == ' ' && ((tic[0][2] == ' ' && tic[2][2] == ' ') || (tic[2][2] == ' ' && tic[2][1] == ' ')))
    {
        tic[1][1] = computer;
        ++increatent;
    }
    else if (increatent == q && tic[0][0] == computer && tic[2][2] == computer && tic[1][0] == ' ' && tic[2][1] == ' ' && tic[2][0] == ' ')
    {
        tic[2][0] = computer;
        ++increatent;
    }
    else if (increatent == q && tic[0][0] == computer && tic[2][2] == computer && tic[0][2] == ' ' && tic[0][1] == ' ' && tic[1][2] == ' ')
    {
        tic[0][2] = computer;
        ++increatent;
    }
    else if (increatent == q && tic[2][2] == computer && tic[2][0] == computer && tic[1][1] == ' ' && ((tic[0][2] == ' ' && tic[1][2] == ' ') || (tic[0][0] == ' ' && tic[1][0] == ' ')))
    {
        tic[1][1] = computer;
        ++increatent;
    }
    else if (increatent == q && tic[2][2] == computer && tic[0][2] == computer && tic[1][1] == ' ' && ((tic[0][0] == ' ' && tic[0][1] == ' ') || (tic[2][1] == ' ' && tic[2][0] == ' ')))
    {
        tic[1][1] = computer;
        ++increatent;
    }
    else if (increatent == q && tic[2][0] == computer && tic[0][2] == computer && tic[2][2] == ' ' && tic[2][1] == ' ' && tic[1][2] == ' ')
    {
        tic[2][2] = computer;
        ++increatent;
    }
    else if (increatent == q && tic[2][0] == computer && tic[0][2] == computer && tic[0][0] == ' ' && tic[0][1] == ' ' && tic[1][0] == ' ')
    {
        tic[0][0] = computer;
        ++increatent;
    }
    else
    {
        for (int d = 0; d < 3; d++)
        {
            for (int o = 0; o < 3; o++)
            {
                if (tic[d][o] == ' ')
                {
                    tic[d][o] = computer;
                    ++increatent;
                    return;
                }
            }
        }
    }
}

void Computer_Move_First(char tic[3][3])
{
    if (increatent == 0)
    {
        srand(time(NULL));
        int q = rand() % 4 + 1;
        if (q == 1)
            tic[0][0] = computer;
        else if (q == 2)
            tic[0][2] = computer;
        else if (q == 3)
            tic[2][0] = computer;
        else if (q == 4)
            tic[2][2] = computer;
        ++increatent;
        return;
    }
    if (increatent == 2)
    {
        if (tic[1][1] == user)
        {
            srand(time(NULL));
            int q = rand() % 2 + 1;
            if (q == 1 && increatent == 2 && tic[0][0] == computer)
            {
                tic[2][2] = computer;
                ++increatent;
            }
            if (q == 1 && increatent == 2 && tic[0][2] == computer)
            {
                tic[2][0] = computer;
                ++increatent;
            }
            if (q == 1 && increatent == 2 && tic[2][0] == computer)
            {
                tic[0][2] = computer;
                ++increatent;
            }
            if (q == 1 && increatent == 2 && tic[2][2] == computer)
            {
                tic[0][0] = computer;
                ++increatent;
            }
            if (q == 2 && increatent == 2 && (tic[0][0] == computer || tic[2][0] == computer))
            {
                tic[1][2] = computer;
                ++increatent;
            }
            if (q == 2 && increatent == 2 && (tic[0][2] == computer || tic[2][2] == computer))
            {
                tic[1][0] = computer;
                ++increatent;
            }
        }
        else
        {
            if (tic[0][0] == computer)
            {
                if (increatent == 2 && tic[0][1] == ' ' && tic[0][2] == ' ')
                {
                    tic[0][2] = computer;
                    ++increatent;
                }
                if (increatent == 2 && tic[1][0] == ' ' && tic[2][0] == ' ')
                {
                    tic[2][0] = computer;
                    ++increatent;
                }
                if (increatent == 2 && tic[2][2] == ' ')
                {
                    tic[2][2] = computer;
                    ++increatent;
                }
            }
            else if (tic[0][2] == computer)
            {
                if (increatent == 2 && tic[0][1] == ' ' && tic[0][0] == ' ')
                {
                    tic[0][0] = computer;
                    ++increatent;
                }
                if (increatent == 2 && tic[2][0] == ' ')
                {
                    tic[2][0] = computer;
                    ++increatent;
                }
                if (increatent == 2 && tic[1][2] == ' ' && tic[2][2] == ' ')
                {
                    tic[2][2] = computer;
                    ++increatent;
                }
            }
            else if (tic[2][0] == computer)
            {
                if (increatent == 2 && tic[0][2] == ' ')
                {
                    tic[0][2] = computer;
                    ++increatent;
                }
                if (increatent == 2 && tic[0][0] == ' ' && tic[1][0] == ' ')
                {
                    tic[0][0] = computer;
                    ++increatent;
                }
                if (increatent == 2 && tic[2][2] == ' ' && tic[2][1] == ' ')
                {
                    tic[2][2] = computer;
                    ++increatent;
                }
            }
            else if (tic[2][2] == computer)
            {
                if (increatent == 2 && tic[2][1] == ' ' && tic[2][0] == ' ')
                {
                    tic[2][0] = computer;
                    ++increatent;
                }
                if (increatent == 2 && tic[1][2] == ' ' && tic[0][2] == ' ')
                {
                    tic[0][2] = computer;
                    ++increatent;
                }
                if (increatent == 2 && tic[0][0] == ' ')
                {
                    tic[0][0] = computer;
                    ++increatent;
                }
            }
            return;
        }
    }
    if (increatent == 4)
    {
        int x = Resistance_to_Win(tic);
        if (x == false)
            computer_Move(tic);
        return;
    }
    if (increatent == 6)
    {
        int zx = Resistance_to_Win(tic);
        if (zx == false)
        {
            for (int a = 0; a < 3; a++)
            {
                for (int y = 0; y < 3; y++)
                {
                    if (tic[a][y] == ' ')
                    {
                        tic[a][y] = computer;
                        ++increatent;
                        return;
                    }
                }
            }
        }
    }
}

bool check_two = false;
void Computer_Move_Second(char tic[3][3])
{
    if (increatent == 1)
    {
        if (tic[1][1] != user)
        {
            tic[1][1] = computer;
            ++increatent;
        }
        else
        {
            srand(time(NULL));
            int z = rand() % 4 + 1;
            if (z == 1)
                tic[0][0] = computer;
            else if (z == 2)
                tic[0][2] = computer;
            else if (z == 3)
                tic[2][0] = computer;
            else if (z == 4)
                tic[2][2] = computer;
            ++increatent;
            return;
        }
    }
    if (increatent == 3)
    {
        int q = Resistance_to_Win(tic);
        if (q == false && tic[1][1] == computer)
        {
            if ((tic[0][1] == user && tic[2][1] == user) || (tic[1][0] == user && tic[1][2] == user))
            {
                srand(time(NULL));
                int e = rand() % 4 + 1;
                if (e == 1)
                    tic[0][0] = computer;
                else if (e == 2)
                    tic[0][2] = computer;
                else if (e == 3)
                    tic[2][0] = computer;
                else if (e == 4)
                    tic[2][2] = computer;
                check_two = true;
                ++increatent;
                return;
            }
        }
        else if (q == false)
        {
            if (tic[1][1] == computer)
            {
                if (tic[0][1] == ' ')
                {
                    tic[0][1] = computer;
                    ++increatent;
                    return;
                }
                if (tic[2][1] == ' ')
                {
                    tic[2][1] = computer;
                    ++increatent;
                    return;
                }
                if (tic[1][0] == ' ')
                {
                    tic[1][0] = computer;
                    ++increatent;
                    return;
                }
                if (tic[1][2] == ' ')
                {
                    tic[1][2] = computer;
                    ++increatent;
                    return;
                }
            }
        }
    }
    if (increatent == 3)
    {
        if (tic[1][1] == user)
        {
            srand(time(NULL));
            int g = rand() % 2 + 1;
            if ((tic[0][0] == user && tic[2][2] == computer) || (tic[2][2] == user && tic[0][0] == computer))
            {
                if (g == 1)
                {
                    tic[2][0] = computer;
                    ++increatent;
                    return;
                }
                if (g == 2)
                {
                    tic[0][2] = computer;
                    ++increatent;
                    return;
                }
            }
            if ((tic[2][0] == user && tic[0][2] == computer) || (tic[0][2] == user && tic[2][0] == computer))
            {
                if (g == 1)
                {
                    tic[2][2] = computer;
                    ++increatent;
                    return;
                }
                if (g == 2)
                {
                    tic[0][0] = computer;
                    ++increatent;
                    return;
                }
            }
        }
    }
    if (increatent == 3)
    {
        if (tic[1][1] == computer)
        {
            if (tic[0][0] == user && tic[2][2] == ' ' && tic[0][2] == ' ' && tic[2][0] == ' ')
            {
                tic[2][2] = computer;
                ++increatent;
                return;
            }
            if (tic[2][2] == user && tic[0][0] == ' ' && tic[0][2] == ' ' && tic[2][0] == ' ')
            {
                tic[0][0] = computer;
                ++increatent;
                return;
            }
            if (tic[2][0] == user && tic[0][2] == ' ' && tic[0][0] == ' ' && tic[2][2] == ' ')
            {
                tic[0][2] = computer;
                ++increatent;
                return;
            }
            if (tic[0][2] == user && tic[2][0] == ' ' && tic[0][0] == ' ' && tic[2][2] == ' ')
            {
                tic[2][0] = computer;
                ++increatent;
                return;
            }
        }
    }
    if (increatent == 3 && tic[1][1] == computer)
    {
        srand(time(NULL));
        int count = rand() % 2 + 1;
        if (tic[0][0] == user && tic[2][2] == user)
        {
            if (count == 1)
            {
                tic[0][1] = computer;
                ++increatent;
                return;
            }
            if (count == 2)
            {
                tic[2][1] = computer;
                ++increatent;
                return;
            }
        }
        if (tic[2][0] == user && tic[0][2] == user)
        {
            if (count == 1)
            {
                tic[1][0] = computer;
                ++increatent;
                return;
            }
            if (count == 2)
            {
                tic[1][2] = computer;
                ++increatent;
                return;
            }
        }
    }
    if (increatent == 5)
    {
        if (check_two == true)
        {
            for (int j = 0; j < 3; j++)
            {
                if (tic[0][j] == user && tic[1][j] == user && tic[2][j] == ' ')
                {
                    tic[2][j] = computer;
                    ++increatent;
                    return;
                }
                if (tic[1][j] == user && tic[2][j] == user && tic[0][j] == ' ')
                {
                    tic[0][j] = computer;
                    ++increatent;
                    return;
                }
                if (tic[j][0] == user && tic[j][1] == user && tic[j][2] == ' ')
                {
                    tic[j][2] = computer;
                    ++increatent;
                    return;
                }
                if (tic[j][2] == user && tic[j][1] == user && tic[j][0] == ' ')
                {
                    tic[j][0] = computer;
                    ++increatent;
                    return;
                }
            }
        }
        else if (Resistance_to_Win(tic) == false)
        {
            for (int d = 0; d < 3; d++)
            {
                for (int o = 0; o < 3; o++)
                {
                    if (tic[d][o] == ' ')
                    {
                        tic[d][o] = computer;
                        ++increatent;
                        return;
                    }
                }
            }
        }
    }
    if (increatent == 7)
    {
        int bw = Resistance_to_Win(tic);
        if (bw == false)
        {
            for (int d = 0; d < 3; d++)
            {
                for (int o = 0; o < 3; o++)
                {
                    if (tic[d][o] == ' ')
                    {
                        tic[d][o] = computer;
                        ++increatent;
                        return;
                    }
                }
            }
        }
    }
}



void Outter_Look_of_board();
void Board_Show();
char Winner_Condition();
int Spaces();
void Moving_By_Players();
void Moving_By_Computer();
void Print_Winner(char);

int Winning_condition();
char Array_initileze[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void TicTacBoard()
{
    system("cls");
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("\n\n****************** ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 71);
    printf("TIC TAC TOE");
    SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf(" ********************\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    printf("===================================================\n\n\n");
    printf("********* You Play Against Pro Friend *********\n\n\n");
    SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf("\n Player 1 symbol : x:");
    printf("\n Player 2 symbol : 0:\n\n\n");
    SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", Array_initileze[1], Array_initileze[2], Array_initileze[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", Array_initileze[4], Array_initileze[5], Array_initileze[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", Array_initileze[7], Array_initileze[8], Array_initileze[9]);
    printf("     |     |     \n");
}

int Winning_condition()
{
    if (Array_initileze[1] == Array_initileze[2] && Array_initileze[2] == Array_initileze[3])
        return 1;
    else if (Array_initileze[4] == Array_initileze[5] && Array_initileze[5] == Array_initileze[6])
        return 1;
    else if (Array_initileze[7] == Array_initileze[8] && Array_initileze[8] == Array_initileze[9])
        return 1;
    else if (Array_initileze[1] == Array_initileze[4] && Array_initileze[4] == Array_initileze[7])
        return 1;
    else if (Array_initileze[2] == Array_initileze[5] && Array_initileze[5] == Array_initileze[8])
        return 1;
    else if (Array_initileze[3] == Array_initileze[6] && Array_initileze[6] == Array_initileze[9])
        return 1;
    else if (Array_initileze[1] == Array_initileze[5] && Array_initileze[5] == Array_initileze[9])
        return 1;
    else if (Array_initileze[3] == Array_initileze[5] && Array_initileze[5] == Array_initileze[7])
        return 1;
    else if (Array_initileze[1] != '1' && Array_initileze[2] != '2' && Array_initileze[3] != '3' && Array_initileze[4] != '4' && Array_initileze[5] != '5' && Array_initileze[6] != '6' && Array_initileze[7] != '7' && Array_initileze[8] != '8' && Array_initileze[9] != '9')
        return 0;
    else
        return -1;
}

const char Player = 'X';
const char Smart_Computer = 'O';
char TicTac_Board[3][3];

void Outter_Look_of_board()
{
    system("cls");
    printf("\n\n*************** Tic Tac toe ***************\n");
    printf("===========================================\n\n\n");
    printf("********* You play Against the Computer ******** \n\n");
    printf("\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", TicTac_Board[0][0], TicTac_Board[0][1], TicTac_Board[0][2]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", TicTac_Board[1][0], TicTac_Board[1][1], TicTac_Board[1][2]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", TicTac_Board[2][0], TicTac_Board[2][1], TicTac_Board[2][2]);
    printf("     |     |     \n\n");
}

void Board_Show()
{
    for (int row = 0; row < 3; row++)
    {
        for (int coloum = 0; coloum < 3; coloum++)
        {
            TicTac_Board[row][coloum] = ' ';
        }
    }
}

char Winner_Condition()
{
    // row check kar raha hai
    for (int row = 0; row < 3; row++)
    {
        if (TicTac_Board[row][0] == TicTac_Board[row][1] && TicTac_Board[row][0] == TicTac_Board[row][2])
        {
            return TicTac_Board[row][0];
        }
    }
    // columns check kar raha hai
    for (int coloums = 0; coloums < 3; coloums++)
    {
        if (TicTac_Board[0][coloums] == TicTac_Board[1][coloums] && TicTac_Board[0][coloums] == TicTac_Board[2][coloums])
        {
            return TicTac_Board[0][coloums];
        }
    }
    // diagonals check kr raha hai
    if (TicTac_Board[0][0] == TicTac_Board[1][1] && TicTac_Board[0][0] == TicTac_Board[2][2])
    {
        return TicTac_Board[0][0];
    }
    if (TicTac_Board[0][2] == TicTac_Board[1][1] && TicTac_Board[0][2] == TicTac_Board[2][0])
    {
        return TicTac_Board[0][2];
    }

    return ' ';
}

int Spaces()
{
    int Total_Spaces = 9;

    for (int row = 0; row < 3; row++)
    {
        for (int coloum = 0; coloum < 3; coloum++)
        {
            if (TicTac_Board[row][coloum] != ' ')
            {
                Total_Spaces--;
            }
        }
    }
    return Total_Spaces;
}
void Moving_By_Players()
{
    int x;
    int y;

    do
    {
        printf(" Enter row number under(1-3): ");
        scanf("%d", &x);
        x--;
        printf(" Enter column number under(1-3): ");
        scanf("%d", &y);
        y--;

        if (TicTac_Board[x][y] != ' ')
        {
            printf(" Invalid move!!\n");
        }
        else
        {
            TicTac_Board[x][y] = Player;
            break;
        }
    } while (TicTac_Board[x][y] != ' ');
}
void Moving_By_Computer()
{
    srand(time(0));
    int x;
    int y;

    if (Spaces() > 0)
    {
        do
        {
            x = rand() % 3;
            y = rand() % 3;
        } while (TicTac_Board[x][y] != ' ');

        TicTac_Board[x][y] = Smart_Computer;
    }
    else
    {
        Print_Winner(' ');
    }
}

void Print_Winner(char winner)
{
    if (winner == Player)
    {
        printf("**** Conguration !!!!...... 'You Win' ****");
    }
    else if (winner == Smart_Computer)
    {
        printf(" You Lose.....'For Better Luck Try Next Time! ");
        system("cls");
    }
    else
    {
        printf("********** Game Draw **********");
    }
}

void rules()
{
    system("cls");
    printf("\n\n*************** GAME INSTRUCTION ***************\n");
    printf("               ------------------                   \n\n");
    printf("\n 1. Only Two person play Game at a same time.\n");
    printf("\n 2. This Game is played on a three by three board.\n");
    printf("\n 3. Each Player has a marker.\n ");
    printf("\n\n");
    int arr[10] = {'0', 'X', '0', 'X', '0', 'X', '0', '0', '0', 'X'};
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", arr[1], arr[2], arr[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", arr[4], arr[5], arr[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", arr[7], arr[8], arr[9]);

    printf("     |     |     \n\n");
    printf("\n 4. One player has an 'x' and other '0'.\n ");
    printf("\n 5. Players play this Game Alternate turns to place their marker on the board.\n ");
    printf("\n 6. Each player play the Game until you lose it.\n ");
    printf("\n 7. User choose always valid input , otherwise it provied invalid input.\n ");
    printf("\n");
}

int main()
{
    int choice, instruction;
    int SubChoice;
    int SubChoiceTwo;
    int SubChoiceThree;
    while (1)
    {
        system("color 30");
        printf("\n\n******************** WELCOME IN THE TIC TOC TOE GAME ********************\n");
        printf("                    =================================\n\n\n");
        printf(" 1. Game Instruction :- 'How to Play the Game'.\n\n");
        printf(" 2. Play Game :- 'Level Wise With Different Modes'.\n\n");
        printf(" 3. Exit\n\n");
        printf("\n Please!!.... Enter Your Choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            system("cls");
            rules();
            break;

        case 2:
            system("cls");
            printf("\n\n ******************** GAME MODE ********************\n\n");
            printf("\n 1. Play with  Computer. \n");
            printf("\n 2. Play with Friends. \n");
            printf("\n    Please!!....  Enter Your Choice : ");
            scanf("%d", &SubChoice);
            printf("\n");
            switch (SubChoice)
            {
            case 1:

                system("cls");
                {
                    printf("\n\n ******************** GAME LEVEL ********************\n\n");
                    printf("\n 1. Easy Level :-  'Play With Normal Computer'. \n");
                    printf("\n 2. Hard Level \"Evil Computer\" :-  'Play With Super Computer' \n");
                    printf("\n    Please!!.... Enter Your Choice : ");
                    scanf("%d", &SubChoiceTwo);
                    printf("\n");
                    switch (SubChoiceTwo)
                    {
                    case 1:

                        system("color 50");
                        char winner = ' ';
                        char progress = ' ';

                        do
                        {
                            winner = ' ';
                            progress = ' ';
                            Board_Show();

                            while (winner == ' ' && Spaces() != 0)
                            {
                                Outter_Look_of_board();

                                Moving_By_Players();
                                winner = Winner_Condition();
                                if (winner != ' ' || Spaces() == 0)
                                {
                                    break;
                                }

                                Moving_By_Computer();
                                winner = Winner_Condition();
                                if (winner != ' ' || Spaces() == 0)
                                {
                                    break;
                                }
                                system("cls");
                            }
                            system("cls");

                            Outter_Look_of_board();
                            Print_Winner(winner);
                            printf("\n\n Would you like to play again? (Y/N): ");

                            scanf("%c");
                            scanf("%c", &progress);
                            progress = toupper(progress);
                        } while (progress == 'Y');

                        printf("\n Thanks for playing!\n\n");
                        system("cls");

                        break;

                    case 2:
                    {
                        system("cls");
                        system("color 60");
                        printf("\n\n******************** WELCOME IN THE TIC TOC TOE GAME ********************\n");
                        printf("                    =================================\n\n\n");
                        printf("############### You play Against the 'Super' Smart Computer ##############\n\n");
                        char tic_board[3][3], asked;
                        int p, b;
                        char ch;
                        for (int row = 0; row < 3; row++)
                        {
                            for (int col = 0; col < 3; col++)
                                tic_board[row][col] = ' ';
                        }

                        while (1)
                        {
                            system("cls");
                            printf("\n\n******************** WELCOME IN THE TIC TOC TOE GAME ********************\n");
                            printf("                    =================================\n\n\n");
                            printf("############### You play Against the 'Super' Smart Computer ##############\n\n");
                            printf("\n\n Player's Symbol :-  'X'");
                            printf("  ,  Smart_Computer's Symbol :-  'O'\n\n");
                            printf("\n\n Do you want to start first? (y/n) : ");
                            scanf("%c", &asked);
                            printf("\n\n\n");
                            if ((asked == 'y') || (asked == 'n'))
                                break;
                            if ((asked != 'y') || (asked != 'n'))
                                printf(" You Choose Wrong input!!.. \n");
                        }

                        if (asked == 'y')
                        {
                            while (1)
                            {

                                system("cls");
                                printf("\n\n############### You play Against the 'Super' Smart Computer ##############\n\n");
                                printf("\n\n Player's Symbol :-  'X'");
                                printf("  ,  Smart_Computer's Symbol :-  'O'\n\n\n");
                                Input_taken(tic_board);
                                p = check_Win(tic_board, user);
                                b = check_Win(tic_board, computer);
                                if (p == true)
                                {
                                    printf("\n Congratulation!!..... 'You Won'\n\n");
                                    printf("\n\n Please Enter Any Key To Go Back menu\n");
                                    getch();
                                    system("cls");
                                    break;
                                }
                                if (b == true)
                                {

                                    printf("\n 'You Lose'!!!!   For Better Luck 'Try Next Time....' \n ");
                                    printf(" \n Congratulation!!....'Smart_Computer Won'\n\n");
                                    printf("\n\n Please Enter Any Key To Go Back menu\n");
                                    getch();
                                    system("cls");
                                    break;
                                }
                                if (increatent == 8)
                                {
                                    printf("\n No Result..  'Match is Draw'\n");
                                    printf("\n\n Please Enter Any Key To Go Back menu\n");
                                    getch();
                                    system("cls");
                                    break;
                                }
                                Computer_Move_Second(tic_board);
                                p = check_Win(tic_board, user);
                                b = check_Win(tic_board, computer);
                                if (p == true)
                                {
                                    printf("\n Congratulation!!..... 'You Won'\n\n");
                                    printf("\n\n Please Enter Any Key To Go Back menu\n");
                                    getch();
                                    system("cls");
                                    break;
                                }
                                if (b == true)
                                {
                                    printf("\n 'You Lose'!!!!   For Better Luck 'Try Next Time....' \n ");
                                    printf(" \n Congratulation!!....'Smart_Computer Won'\n\n");
                                    printf("\n\n Please Enter Any Key To Go Back menu\n");
                                    getch();
                                    system("cls");
                                    break;
                                }
                                if (increatent == 8)
                                {
                                    printf("\n No Result..  'Match is Draw'\n");
                                    printf("\n\n Please.. Enter Any Key To Go Back menu\n");
                                    getch();
                                    system("cls");
                                    break;
                                }
                            }
                        }
                        if (asked == 'n')
                        {
                            while (1)
                            {
                                system("cls");
                                Computer_Move_First(tic_board);
                                p = check_Win(tic_board, user);
                                b = check_Win(tic_board, computer);
                                if (p == true)
                                {
                                    printf("\n Congratulation!!..... 'You Won'\n");
                                    printf("\n\n Please.. Enter Any Key To Go Back menu\n");
                                    getch();
                                    system("cls");
                                    break;
                                }
                                if (b == true)
                                {
                                    printf("\n 'You Lose'!!!!   For Better Luck 'Try Next Time....' \n ");
                                    printf(" \n Congratulation!!....'Smart_Computer Won'\n\n");
                                    printf("\n\n Please.. Enter Any Key To Go Back menu\n");
                                    getch();
                                    system("cls");
                                    break;
                                }
                                if (increatent == 8)
                                {
                                    printf("\n No Result..  'Match is Draw\n");
                                    printf("\n\n Please.. Enter Any Key To Go Back menu\n");
                                    getch();
                                    system("cls");
                                    break;
                                }
                                Input_taken(tic_board);
                                p = check_Win(tic_board, user);
                                b = check_Win(tic_board, computer);
                                if (p == true)
                                {
                                    printf("\n Congratulation!!..... 'You Won'n\n");
                                    printf("\n\n Please.. Enter Any Key To Go Back menu\n");
                                    getch();
                                    system("cls");
                                    break;
                                }
                                if (b == true)
                                {
                                    printf("\n 'You Lose'!!!!.....   Better Try For The Next Time.... \n ");
                                    printf(" \n Congratulation!!....'Smart_Computer Won'\n\n");
                                    printf("\n\n Please.. Enter Any Key To Go Back menu\n");
                                    getch();
                                    system("cls");
                                    break;
                                }
                                if (increatent == 8)
                                {
                                    printf("\n No Result..  'Match is Draw\n\n");
                                    printf("\n\n  Please.. Enter Any Key To Go Back menu\n");
                                    getch();
                                    system("cls");
                                    break;
                                }
                                system("cls");
                            }
                            system("cls");
                        }
                    }
                    break;
                    }

                    break;
                }

            case 2:
                system("cls");
                printf("\n\n ******************** GAME LEVEL ********************\n\n");
                printf("\n 1. Easy Level :-  'Play With Bot Friend'. \n");
                printf("\n 2. Hard Level :- 'Play With Pro Friend' \n");
                printf("\n    Please!!.... Enter Your Choice : ");
                scanf("%d", &SubChoiceThree);

                switch (SubChoiceThree)
                {
                case 1:

                    {
                        system("color E0");
                        char ch;
                        int k;

                    lab2:
                        system("cls");
                        gameName();
                        show();
                        start();
                        play();

                    lab3:
                        system("cls");
                        show();
                        play();
                        k = winning();
                        system("cls");
                        show();
                        if (count < 9)
                        {

                            if (k == 100)
                            {
                                printf("\n Congratulation.... 'Player 1 won' :");
                                count = 0;
                            }
                            else if (k == 200)
                            {
                               printf("\n Congratulation.... 'Player 2 won' :");
                                count = 0;
                            }
                            else
                                goto lab3;
                        }
                        else
                        {
                            printf("\nGame Draw :");
                            count = 0;
                        }

                        printf("\n\n Want to Play again..? Enter 'Y' for yes and 'n' for NO ");
                        fflush(stdin);
                        scanf("%c", &ch);
                        if (ch == 'y' || ch == 'Y')
                        {
                            arr[0] = '1';
                            arr[1] = '2';
                            arr[2] = '3';
                            arr[3] = '4';
                            arr[4] = '5';
                            arr[5] = '6';
                            arr[6] = '7';
                            arr[7] = '8';
                            arr[8] = '9';

                            goto lab2;
                        }
                    }
                    system("cls");
                    break;

                case 2:
                    system("cls");
                    {
                        system("color 0F");
                        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

                        char ch;
                        int player;
                        int choice;
                        player = 1;
                        int progress;
                        char mark;
                    label:
                        do
                        {
                            TicTacBoard();
                            player = (player % 2) ? 1 : 2;
                            SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
                            printf("\n Player %d, Enter the choice : ", player);
                            scanf("%d", &choice);
                            mark = (player == 1) ? 'X' : 'O';
                            if (choice == 1 && Array_initileze[1] == '1')
                                Array_initileze[1] = mark;
                            else if (choice == 2 && Array_initileze[2] == '2')
                                Array_initileze[2] = mark;
                            else if (choice == 3 && Array_initileze[3] == '3')
                                Array_initileze[3] = mark;
                            else if (choice == 4 && Array_initileze[4] == '4')
                                Array_initileze[4] = mark;
                            else if (choice == 5 && Array_initileze[5] == '5')
                                Array_initileze[5] = mark;
                            else if (choice == 6 && Array_initileze[6] == '6')
                                Array_initileze[6] = mark;
                            else if (choice == 7 && Array_initileze[7] == '7')
                                Array_initileze[7] = mark;
                            else if (choice == 8 && Array_initileze[8] == '8')
                                Array_initileze[8] = mark;
                            else if (choice == 9 && Array_initileze[9] == '9')
                                Array_initileze[9] = mark;

                            else
                            {
                                printf(" You Enter Wrong Input !");
                                player--;
                                getch();
                            }
                            progress = Winning_condition();
                            player++;

                        } while (progress == -1);

                        TicTacBoard();
                        if (progress == 1)
                        {
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                            printf("    \n\n Conguration !!!!.... Player %d won ", --player);
                            SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
                             printf("\n\n Want to Play again..? Enter 'Y' or 'y' for yes and 'n' for NO ");
                            fflush(stdin);
                            scanf("%c", &ch);
                            if (ch == 'y' || ch == 'Y')
                            {
                                Array_initileze[1] = '1';
                                Array_initileze[2] = '2';
                                Array_initileze[3] = '3';
                                Array_initileze[4] = '4';
                                Array_initileze[5] = '5';
                                Array_initileze[6] = '6';
                                Array_initileze[7] = '7';
                                Array_initileze[8] = '8';
                                Array_initileze[9] = '9';

                                goto label;
                            }
                        }
                        else
                        {
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                            printf("\n\n ***** Game draw ******\n\n");
                            SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
                            printf("\n Do You Want To Play Continues : Enter 'Y' or 'y' for yes and 'n' for NO ");
                            fflush(stdin);
                            scanf("%c", &ch);
                            if (ch == 'y' || ch == 'Y')
                            {
                                Array_initileze[1] = '1';
                                Array_initileze[2] = '2';
                                Array_initileze[3] = '3';
                                Array_initileze[4] = '4';
                                Array_initileze[5] = '5';
                                Array_initileze[6] = '6';
                                Array_initileze[7] = '7';
                                Array_initileze[8] = '8';
                                Array_initileze[9] = '9';
                                goto label;
                            }
                        }

                        system("cls");
                    }
                    break;
                }
                break;
            }

            break;

        case 3:
            system("cls");
            system("color 50");
            printf(" \n\n You Exit from the game.\n\n");
            printf("\n Thanks For Visiting...... \n\n");
            getch();
            exit(1);

        default:
            printf(" You Enter Wrong Choices \n");
            break;
        }
    }
    return 0;
}
