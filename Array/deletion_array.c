#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void indDeletion(int arr[], int size, int index)
{  
    // code for deletion
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[100] = {23, 45, 12, 56, 23};
    int index = 2, size = 5;
    display(arr, size);
    indDeletion(arr, size, index);
    size--;
    indDeletion(arr, size, index);
    size--;
    indDeletion(arr, size, index);
    size--;
    display(arr, size);

    return 0;
}