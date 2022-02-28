#include <stdio.h>
 int DirectRecursion(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
        return (n * DirectRecursion(n - 1));
}
int main()
{
    int fact, n;
    printf("Enter the number for finding factorial\n");
    scanf("%d", &n);
    printf("factorial of %d is %d\n",n,DirectRecursion(n));

    return 0;
}