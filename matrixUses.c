#include <stdio.h>

int main() {

  int mat[4][4];
  int i, j;
  int sum = 0, diagonale=0, times=1, big=0;

  for (i = 3; i >= 0; i--) {
    for (j = 3; j >= 0; j--) {
      printf("mat[%i][%i]: ", i, j);
      scanf("%i", &mat[i][j]);
    }
  }
  
  for (i = 3; i >= 0; i--) {
    for (j = 3; j >= 0; j--) {
      if (mat[i] == mat[j]) {
        sum += 1;
        diagonale = diagonale + mat[i][j];
      }
    }
  }
  printf("\n\n");

  for (i = 3; i >= 0; i--) {
    for (j = 3; j >= 0; j--) {
      if (mat[i] == mat[j]) {
        printf("\033[1m%i \033[0m", mat[i][j]);
      } else
      printf("%i ", mat[i][j]);
    }
    printf("\n");
  }

  for(j=3; j>=0; j--) {
    times *= mat[2][j];
  }

  for(i=3; i>=0; i--) {
    if(mat[i][1] > big) {
      big = mat[i][1];
    }
  }
  
  printf("\nN of main(in diagonal) matrix: %i", sum);
  printf("\nSUM of Nmain(in diagonal) matrix: %i", diagonale);
  printf("\nMultiplication of values from the 2nd line: %i", times);
  printf("\nBiggest num on 3rd column: %i", big);
  return 0;
}
