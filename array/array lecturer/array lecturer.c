#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int condition();
void gotoxy();
int dx = 1;
int dy = 1;
int x = 0;
int y = 0;
int num = 1;

int main()
{
    condition(6);
}

int condition(int n)
{
    system("cls");
    for (int i = n; i >= 1; i--)
    {
        x += dx;
        for (int j = 1; j <= i; j++)
        {
            if (num == 10)
            {
                num = 1;
            }
            gotoxy(x, y);
            printf("%i", num);
            num++;
            if (j != i)
            {
                x += dx;
            }
        }
        dx *= -1;
        y += dy;
        for (int j = 1; j <= i; j++)
        {
            if (num == 10)
            {
                num = 1;
            }
            gotoxy(x, y);
            printf("%i", num);
            num++;
            if (j != i)
            {
                y += dy;
            }
        }
        dy *= -1;
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
}


