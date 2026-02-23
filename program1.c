#include <stdio.h>

#define MAX 100

int main() {
    int arr[MAX];
    int size = 0;
    int choice, pos, value, i;

    while (1) {
        printf("\n----- Array Operations -----\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1: 
                if (size == MAX) {
                    printf("Array is full! Cannot insert.\n");
                } else {
                    printf("Enter position (1 to %d): ", size + 1);
                    scanf("%d", &pos);

                    if (pos < 1 || pos > size + 1) {
                        printf("Invalid position!\n");
                    } else {
                        printf("Enter value to insert: ");
                        scanf("%d", &value);

                        for (i = size; i >= pos; i--) {
                            arr[i] = arr[i - 1];
                        }

                        arr[pos - 1] = value;
                        size++;
                        printf("Element inserted successfully.\n");
                    }
                }
                break;

            case 2: 
                if (size == 0) {
                    printf("Array is empty! Cannot delete.\n");
                } else {
                    printf("Enter position (1 to %d): ", size);
                    scanf("%d", &pos);

                    if (pos < 1 || pos > size) {
                        printf("Invalid position!\n");
                    } else {
                        for (i = pos - 1; i < size - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        size--;
                        printf("Element deleted successfully.\n");
                    }
                }
                break;

            case 3: 
                if (size == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Array elements are: ");
                    for (i = 0; i < size; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 4: // Exit
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}