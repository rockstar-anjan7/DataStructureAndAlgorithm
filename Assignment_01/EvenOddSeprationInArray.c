#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
}
void SeprateEvenOdd(int a[], int n)
{
    int Even[50], Odd[50], j = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            Even[j] = a[i];
            j++;
        }
        else
        {
            Odd[k] = a[i];
            k++;
        }
    }
    printf("Even Number Of Your Array is \n");
    for (int i = 0; i < j; i++)
    {
        printf("%d ", Even[i]);
    }
    printf("\n");
    printf("Odd Number Of Your Array is \n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", Odd[i]);
    }
}
int main()
{
    int arr[100], n;
    printf("enter the size of array\n");
    scanf("%d", &n);
    printf("enter one by one of your %d element\n ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Your %d element are\n", n);
    display(arr, n);
    printf("\n");

    SeprateEvenOdd(arr, n);
    return 0;
}