#include <stdio.h>

int main() {
    int arr[100], n, i, j, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers: ");
    for(i = 0; i < n; i++) {
        count = 0;

        if(arr[i] <= 1)
            continue;

        for(j = 2; j < arr[i]; j++) {
            if(arr[i] % j == 0) {
                count = 1;
                break;
            }
        }

        if(count == 0)
            printf("%d ", arr[i]);
    }

    return 0;
}
