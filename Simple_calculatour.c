#include <stdio.h>
#include <stdlib.h>

#define He 15
#define W 35

int a, b, result;
char op;

void border()
{

    for (int i = 0; i < He; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if ((j == 0 || j == W - 1) || (i == 0 || i == He - 1))
            {
                printf("#");
            }

            else
            {

                printf(" ");
            }
        }

        printf("\n");
    }

    printf("This calculatour can only perform basic calculations like \'+\',\'-\',\'*\',\'/\'");
    printf("\nDON'T PRESS ENTER 2 TIMES!");
}

void movecursour(int r, int c)
{

    printf("\033[%d;%dH", r, c);
}

int main()
{
    int f;

    border();

la1:
    movecursour(4, 12);
    printf("Enter values");

    movecursour(7, 10);
    scanf("%d %c %d", &a, &op, &b);

    movecursour(10, 8);
    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        if (b == 0)
        {
            printf("Divider cannont be 0\n");
        }

        else
        {
            result = a / b;
        }

        break;

    default:
        printf("Invalid operator");
        break;
    }
    printf("\tResult=%d", result);

    movecursour(13, 5);
    printf("1 to Run Again:");
    scanf("%d", &f);
    if (f == 1)
    {
        system("cls");
        border();
        goto la1;
    }
    movecursour(20, 0);
    if (f != 1)
    {
        printf("Thanks For using");
    }

    return 0;
}