#include <stdio.h>

// Declare Functions
void scalarMultiply (int nRows, int nCols, int[nRows][nCols], int);
void displayMatrix (int nRows, int nCols, int[nRows][nCols]);

int main(void) {

  // Declare and Define matrix
  int sampleMatrix[3][5] = {
  {  7, 16, 55, 13, 12 }, 
  { 12, 10, 52,  0,  7 },
  { -2,  1,  2,  4,  9 }
  };

  // Print original matrix
  printf ("Original matrix:\n");
  displayMatrix(3, 5, sampleMatrix);

  // Multiply matrix by 2
  scalarMultiply (3, 5, sampleMatrix, 2);

  // Print new matrix 
  printf ("\nMultiplied by 2:\n");
  displayMatrix (3, 5, sampleMatrix);

  // Multiply matrix by -1
  scalarMultiply (3, 5, sampleMatrix, -1);

  // Print new matrix
  printf ("\nMultiplied by -1:\n");
  displayMatrix (3, 5, sampleMatrix);
  
  return 0;
}

// Define Functions
void scalarMultiply (int nRows, int nCols, int matrix [nRows][nCols], int scalar) {
  for (int row = 0; row < nRows; row++) {
   for (int column = 0; column < nCols; column++)
     matrix[row][column] *= scalar;
  }
}

void displayMatrix (int nRows, int nCols, int matrix [nRows][nCols]) {
  for (int row = 0; row < nRows; row++) {
    for (int column = 0; column < nCols; column++) {
      printf ("%5i", matrix[row][column]);
    }
    printf ("\n");
  }
  printf ("\n");
}