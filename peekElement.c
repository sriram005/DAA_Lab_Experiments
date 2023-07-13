#include <stdio.h>

int findPeekElement(int arr[], int low, int high, int n)
{
    int mid = (low + high) / 2;
    if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid] >= arr[mid + 1]))
        return arr[mid];
    else if (arr[mid] < arr[mid - 1])
        return findPeekElement(arr, low, mid, n);
    else
        return findPeekElement(arr, mid, high, n);
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
    printf("The peek Element is : %d", findPeekElement(arr, 0, n, n));
}