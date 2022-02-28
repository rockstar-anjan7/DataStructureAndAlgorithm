#include <stdio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void bubbleSort(int *A, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++) // For number of pass
    {

        for (int j = 0; j < n - 1 - i; j++) // For comparison in each pass
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int A[] = {1, 2, 5, 6, 12, 54, 625, 7, 23, 9, 987};
    int n = 11;
    printf("Printing the array before sorting..\n");
    printArray(A, n);
    bubbleSort(A, n);
    printf("Printing the array before sorting....\n");
    printArray(A, n);
    return 0;
}