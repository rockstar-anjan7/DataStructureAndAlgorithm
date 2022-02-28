#include <stdio.h>
 int TailRecursion(int n,int result)

{
    if (n == 0)
    {
        return result;
    }
    else
      return  TailRecursion(n-1,n*result);
}
int main()
{
    int fact, n;
    printf("Enter the number for finding factorial\n");
    scanf("%d", &n);
    printf("factorial of %d is %d\n",n,TailRecursion(n,1));

    return 0;
}