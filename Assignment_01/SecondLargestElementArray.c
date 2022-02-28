#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
}
void FindSecondLargestElement(int arr[], int n)
{
    int first, second;
    first = arr[0];
    second = arr[1];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] < first)
        {
            second = arr[i];
        }
    }
    printf("Second Largest Element Of array Is %d", second);
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
    FindSecondLargestElement(arr, n);

    return 0;
}