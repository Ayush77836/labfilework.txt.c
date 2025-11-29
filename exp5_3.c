#include <stdio.h>

int main() {
    int n, i, key, count = 0;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the number to find frequency: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key)
            count++;
    }

    printf("Frequency of %d = %d", key, count);
    return 0;
}
