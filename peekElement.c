#include <stdio.h>

int findPeekElement(int arr[], int low, int high)
{
    int mid = (low + high) / 2;
    if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        return arr[mid];
    else if (arr[mid - 1] > arr[mid])
        return findPeekElement(arr, low, mid);
    else
        return findPeekElement(arr, mid, high);
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
    printf("The peek Element is : %d", findPeekElement(arr, 0, n - 1));
}