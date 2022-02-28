#include <stdio.h>
void displayMatrix(int arr[100][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d", arr[i][j]);
        }
        printf("\n");
    }
}

void SparseMatrixOrNot(int arr[100][100], int m, int n)
{
    int count;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (count > (m * n) / 2)
    {
        printf("Given Matrix is Sparse Matrix...!");
    }
    else
        printf("Given matrix Is not Sparse Matrix....!");
}
int main()
{
    int matrix[100][100], m, n;
    printf("enter the size of row and column of your array \n");
    scanf("%d%d", &m, &n);
    printf("enter the element of your array one by one\n ");
    printf("Enter your all %d element\n", m * n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    SparseMatrixOrNot(matrix, m, n);
    printf("Because Your Matrix is .......this....\n");
    displayMatrix(matrix, m, n);

    return 0;
}