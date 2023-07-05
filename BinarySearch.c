#include <stdio.h>

int BinarySearch(int arr[], int low, int high, int x)
{
    if (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            return BinarySearch(arr, low, mid - 1, x);
        else
            return BinarySearch(arr, mid + 1, high, x);
    }
    return -1;
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
    int x;
    printf("Enetr the elements to search : ");
    scanf("%d", &x);
    printf("%d is found at the position : %d", x, BinarySearch(arr, 0, n - 1, x));
}