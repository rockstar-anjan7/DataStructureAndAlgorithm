#include <stdio.h>

int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
    mid = (low + high) / 2;
        for (int i = 0; i < size; i++)
        {
            if (arr[mid] == element)
            {
                return mid;
            }
            if (arr[mid] < element)
            {
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {5, 7, 10, 15, 35, 45, 74};

    int size = sizeof(arr) / sizeof(int);
    int element;
    printf("please enter the element for finding in array\n");
    scanf("%d", &element);
    int d = binarySearch(arr, size, element);
    printf("the given %d found at %d index", element, d);

    return 0;
}
