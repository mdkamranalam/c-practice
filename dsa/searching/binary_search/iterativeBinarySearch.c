#include <stdio.h>

int binarySearch(int arr[], int size, int key);

int main(void)
{
    int arr[] = {17, 12, 37, 41, 5, 66, 74, 800, 91, 10, 5, 2, 7, 8, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Enter the number: ");
    scanf("%d", &key);

    int result = binarySearch(arr, size, key);

    if (result == -1)
    {
        printf("%d is not found\n", key);
    }
    else
    {
        printf("%d is found at index %d\n", key, result);
    }

    return 0;
}

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}
