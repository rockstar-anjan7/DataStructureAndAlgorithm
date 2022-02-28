#include <stdio.h>
int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {45, 7, 58, 36, 896, 42, 57, 59, 6, 3, 4, 52};
    int size = sizeof(arr) / sizeof(int);
    int element;
    printf("please enter the element for finding in array\n");
    scanf("%d", &element);
    int d = linearSearch(arr, size, element);
    printf("the given %d found at %d index", element, d);

    return 0;
}
