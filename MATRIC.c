#include <stdio.h>

int main() {
  int m, n, p, q, i, j, k;
  printf("Enter the number of rows and columns of the first matrix: ");
  scanf("%d %d", &m, &n);
  printf("Enter the number of rows and columns of the second matrix: ");
  scanf("%d %d", &p, &q);

  if (n != p) {
    printf("Matrices cannot be multiplied.\n");
    return 0;
  }

  int first[m][n], second[p][q], result[m][q];

  printf("Enter elements of first matrix:\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &first[i][j]);
    }
  }

  printf("Enter elements of second matrix:\n");
  for (i = 0; i < p; i++) {
    for (j = 0; j < q; j++) {
      scanf("%d", &second[i][j]);
    }
  }

  for (i = 0; i < m; i++) {
    for (j = 0; j < q; j++) {
      result[i][j] = 0;
      for (k = 0; k < n; k++) {
        result[i][j] += first[i][k] * second[k][j];
      }
    }
  }

  printf("Product of the matrices:\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < q; j++) {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }

  return 0;
}