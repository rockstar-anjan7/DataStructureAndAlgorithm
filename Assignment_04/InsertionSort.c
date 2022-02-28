#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void InsertionSort(int *arr, int n)
{
    int j, key;

    // loop for passes
    for (int i = 0; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        //    loop for each pass
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int arr[] = {14, 33, 27, 10, 35, 19, 42, 44}, n;
    n = sizeof(arr) / sizeof(int);
    printf("Array before sorting\n");
    display(arr, n);
    InsertionSort(arr, n);
    printf("Array after sorting\n");
    display(arr, n);
    return 0;
}