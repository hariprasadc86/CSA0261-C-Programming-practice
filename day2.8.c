#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int i, size, index;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index of the element to delete: ");
    scanf("%d", &index);

    if (index < 0 || index >= size) {
        printf("Invalid index!");
        return 0;
    }

    // Shift elements to the left
    for (i = index; i < size - 1; i++) {
        arr[i] = arr[i+1];
    }

    size--;

    printf("Array after deleting the element:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
