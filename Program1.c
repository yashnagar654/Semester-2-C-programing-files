//WAP to perfrom various operations in the array: -Insertion, Deletion, Display. Apply (Using Basic list Operations) / L3.
#include<stdio.h>
#define MAX 100
int arr[MAX];
int n;
void insert(int pos, int value) {
    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++;
}
void delete(int pos) {
    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}
void display() {
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int choice, pos, value;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    do {
        printf("\nMenu:\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter position to insert: ");
                scanf("%d", &pos);
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insert(pos, value);
                break;
            case 2:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                delete(pos);
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);
    return 0;
}
