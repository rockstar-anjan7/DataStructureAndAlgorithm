#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n ; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void SelectionSort(int *arr, int n)
{
    int indexofMin, temp;
    printf("Selection sort is Running.....\n");
    for (int i = 0; i < n - 1; i++)
    {
        indexofMin = i;
        for (int j = i + 1; j < n ; j++)
        {
            if (arr[j] < arr[indexofMin])
            {
                indexofMin = j;
            }
        }
            temp = arr[i];
            arr[i] = arr[indexofMin];
            arr[indexofMin] = temp;
    }
}

int main()
{
     int a[] = {4, 1, 63, 15, 89}, n;
    n = sizeof(a) / sizeof(int);
    printf("all  element before sorting\n");
    display(a, n);
    SelectionSort(a, n);
    printf("all  element after sorting\n");
    display(a, n);
    return 0;
}