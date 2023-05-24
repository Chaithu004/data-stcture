#include <stdio.h>

int main() {
  int arr[100], n, i, pos, choice;

  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  printf("Enter the elements of the array:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  while (1) {
    printf("\nArray Operations:\n");
    printf("1. Insert an element\n");
    printf("2. Delete an element\n");
    printf("3. Display the array\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("\nEnter the position where you want to insert the element: ");
        scanf("%d", &pos);

        if (pos < 0 || pos > n) {
          printf("Invalid position!\n");
        } else {
          for (i = n - 1; i >= pos; i--) {
            arr[i + 1] = arr[i];
          }

          printf("Enter the element to be inserted: ");
          scanf("%d", &arr[pos]);
          n++;
        }

        break;

      case 2:
        printf("\nEnter the position of the element to be deleted: ");
        scanf("%d", &pos);

        if (pos < 0 || pos >= n) {
          printf("Invalid position!\n");
        } else {
          for (i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
          }

          n--;
        }

        break;

      case 3:
        printf("\nThe elements of the array are:\n");

        for (i = 0; i < n; i++) {
          printf("%d ", arr[i]);
        }

        printf("\n");

        break;

      case 4:
        return 0;

      default:
        printf("\nInvalid choice!\n");
    }
  }
}