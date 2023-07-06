#include <stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (1)
    {
        while (arr[i] < pivot && i <= high)
            i++;
        while (arr[j] > pivot && j >= low)
            j--;
        if (i >= j)
            return j;
        swap(arr + i, arr + j);
    }
}
void quicksort(int arr[], int low, int high)
{
    if (low <= high)
    {
        int p = partition(arr, low, high);
        quicksort(arr, low, p - 1);
        quicksort(arr, p + 1, high);
    }
}

int main()
{
    int n, i;
    printf("Enter no of Elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("The array Elements are: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    quicksort(arr, 0, n - 1);
    printf("\nThe array Elements after Sorting: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}