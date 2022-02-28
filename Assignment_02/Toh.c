#include <stdio.h>
void Toh(int n, char beg, char aux, char end)
{
    /*beg=beginning A=beg,B=aux,C=end;
    aux=auxillary
    end=end*/

    if (n >= 1)
    {
        Toh(n - 1, beg, end, aux);
        printf("move disk no. %d from %c to %c\n", n, beg, end);
        Toh(n - 1, aux, beg, end);
    }
}

int main()
{
    int n, b, e, a;
    printf("enter the number of disk for finding soultion\n");
    scanf("%d", &n);
    Toh(n, 'A', 'B', 'C');
    return 0;
}