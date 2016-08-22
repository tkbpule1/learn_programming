#include <iostream>
#include <iomanip>
using namespace std;

const int NUMBER_OF_ROWS = 7;
const int NUMBER_OF_COLUMNS = 6;

int main()
{
  int matrix[NUMBER_OF_ROWS][NUMBER_OF_COLUMNS] = {{0, 1, 2, 3, 4, 5},
                                                   {1, 2, 3, 4, 5, 6},
                                                   {2, 3, 4, 5, 6, 7},
                                                   {3, 4, 5, 6, 7, 8},
                                                   {4, 5, 6, 7, 8, 9},
                                                   {5, 6, 7, 8, 9, 0},
                                                   {6, 7, 8, 9, 0, 1}};

  int array[4][4] = {{1, 8, 10, 11},
                     {34, 2, 12, 45},
                     {0, 13, 3, 20},
                     {14, 35, 56, 4}};

  int row;
  int col;
  int sum;
  int largest;
  int temp;

// Output the array;
  for (row = 0; row < NUMBER_OF_ROWS; row++)
  {
    for (col = 0; col < NUMBER_OF_COLUMNS; col++)
    {
      cout << left << setw(2) << matrix[row][col];
      // use cin for input;
      // cin >> matrix[row][col];
    }
    cout << endl;
  }


  sum = 0;
  row = 5;
  for (col = 0; col < NUMBER_OF_COLUMNS; col++)
  {
    cout << matrix[row][col] << ": ";
    sum = sum + matrix[row][col];
    cout << sum << endl;
  }
  cout << endl;

  row = 4;
  for (col = 0; col < NUMBER_OF_COLUMNS; col++)
  {
    matrix[row][col] = 0;
  }

  for (row = 0; row < NUMBER_OF_ROWS; row++)
  {
    for (col = 0; col < NUMBER_OF_COLUMNS; col++)
    {
      cout << left << setw(2) << matrix[row][col];
    }
    cout << endl;
  }

  sum = 0;
  col = 2;
  for (row = 0; row < NUMBER_OF_ROWS; row++)
  {
    cout << matrix[row][col] << ": ";
    sum = sum + matrix[row][col];
    cout << sum << endl;
  }
// Get input from user and store in array;
  // row = 4;
  for (row = 0; row < NUMBER_OF_ROWS; row++){
  for (col = 0; col < NUMBER_OF_COLUMNS; col++)
  {
    cout << "Enter the value for row " << row << " and column " << col
         << ": ";
    cin >> matrix[row][col];
  }}

  for (row = 0; row < NUMBER_OF_ROWS; row++)
  {
    for (col = 0; col < NUMBER_OF_COLUMNS; col++)
    {
      cout << left << setw(2) << matrix[row][col];
    }
    cout << endl;
  }

  sum = 0;
  col = 2;
  for (row = 0; row < NUMBER_OF_ROWS; row++)
  {
    cout << matrix[row][col] << ": ";
    sum = sum + matrix[row][col];
    cout << sum << endl;
  }


  cout << "Sum by row: " << endl;
  for (row = 0; row < NUMBER_OF_ROWS; row++)
  {
    sum = 0;
    for (col = 0; col < NUMBER_OF_COLUMNS; col++)
    {
      sum = sum + matrix[row][col];
    }
    cout << "Sum of row " << row+1 << " = " << sum << endl;
  }
  cout << endl;

  cout << "Sum by column: " << endl;
  for (col = 0; col < NUMBER_OF_COLUMNS; col++)
  {
    sum = 0;
    for (row = 0; row < NUMBER_OF_ROWS; row++)
    {
      sum = sum + matrix[row][col];
    }
    cout << "Sum of column " << col+1 << " = " << sum << endl;
  }
  cout << endl;

// Largest element in each row;
  for (row = 0; row < NUMBER_OF_ROWS; row++)
  {
    int largest = matrix[row][0];
    for (col = 0; col < NUMBER_OF_COLUMNS; col++)
    {
      if (largest < matrix[row][col])
      {
        largest = matrix[row][col];
      }
    }
    cout << "The largest element in row " << row+1 << ": "
    << largest << endl;
  }
  cout << endl;

// Largest element in each column;
  for (col = 0; col < NUMBER_OF_COLUMNS; col++)
  {
    int largest = matrix[0][col];
    for (row = 0; row < NUMBER_OF_ROWS; row++)
    {
      if (largest < matrix[row][col])
      {
        largest = matrix[row][col];
      }
    }
    cout << "The largest element in column " << col+1 << ": "
         << largest << endl;
  }
  cout << endl;

// Largest element in array;
  largest = matrix[0][0];
  for (row = 0; row < NUMBER_OF_ROWS; row++)
  {
    for (col = 0; col < NUMBER_OF_COLUMNS; col++)
    {
      if(largest < matrix[row][col])
      {
        largest = matrix[row][col];
      }
    }
  }
  cout << "Largest item in array: " << largest << endl << endl;


  // output array
  const int ARRAY_ROWS = 4;
    for (row = 0; row < ARRAY_ROWS; row++)
    {
      for (col = 0; col < ARRAY_ROWS; col++)
      {
        cout << setw(3) << array[row][col];
      }
      cout << endl;
    }
    cout << endl;

// Reverse main diagonal of array [0][0], [1][1], [2][2], [3][3];
// Clearly, we need to swap [0][0] & [3][3] && [1][1] & [2][2];
  for (row = 0; row < ARRAY_ROWS / 2; row++)
  {
    temp = array[row][row];
    array[row][row] =
    array[ARRAY_ROWS - 1 - row][ARRAY_ROWS -1 - row];
    array[ARRAY_ROWS - 1 - row][ARRAY_ROWS - 1 - row] = temp;
  }
  cout << endl;

// output array
  for (row = 0; row < ARRAY_ROWS; row++)
  {
    for (col = 0; col < ARRAY_ROWS; col++)
    {
      cout << setw(3) << array[row][col];
    }
    cout << endl;
  }
  cout << endl;

// Reverse the opposite diagonal [0][3], [1][2], [2][1], [3][0];
  for (row = 0; row < ARRAY_ROWS / 2; row++)
  {
    temp = array[row][ARRAY_ROWS - 1 - row];
    array[row][ARRAY_ROWS - 1 - row] = array[ARRAY_ROWS - 1 - row][row];
    array[ARRAY_ROWS - 1 - row][row] = temp;
  }
  for (row = 0; row < ARRAY_ROWS; row++)
  {
    for (col = 0; col < ARRAY_ROWS; col++)
    {
      cout << setw(3) << array[row][col];
    }
    cout << endl;
  }
  cout << endl;

  return 0;
}
