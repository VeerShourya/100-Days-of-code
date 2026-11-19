#include <stdio.h>

int main() {
    int arr[100], n, i, key;
    int low, high, mid;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter sorted elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Element found at index %d", mid);
            return 0;
        }
        else if(key > arr[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    printf("Element not found");

    return 0;
}