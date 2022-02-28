// Write a program in C to read n number of values in an array and display it in reverse order.
#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
}
void ReverseArray(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        printf(" %d ", arr[i]);
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
    printf("After Reverse Of Array\n");
    ReverseArray(arr, n);
    return 0;
}