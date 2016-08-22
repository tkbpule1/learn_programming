//   Magic Square

#include <iostream>
#include <iomanip>

using namespace std;

const int size = 16;
const int NumRows = 4;

void createArithmeticSeq(int array[size]);
void printCreateArithmeticSeq(const int array[size]);
void matricize(const int array[size], int list[NumRows][NumRows]);
void reverseDiagonal(int list[NumRows][NumRows]);
void magicCheck(const int array[size], const int list[NumRows][NumRows],
                const int size, const int NumRows);
void printMatricize(const int list[NumRows][NumRows]);


int main()
{
  int array[size];
  int matrix[NumRows][NumRows];

  createArithmeticSeq(array);
  printCreateArithmeticSeq(array);
  matricize(array, matrix);
  printMatricize(matrix);
  reverseDiagonal(matrix);
  printMatricize(matrix);
  magicCheck(array, matrix, size, NumRows);

  return 0;
}

void createArithmeticSeq(int array[size])
{
  int first, diff;
  cout << "Enter an integer: ";
  cin >> first;

  cout << "Enter another integer: ";
  cin >> diff;

  array[0] = first;

  for (int i = 1; i < size; i++)
  {
    array[i] = array[i-1] + diff;
  }
}

void printCreateArithmeticSeq(const int array[size])
{
  for (int i = 0; i < size; i++)
  {
    cout << array[i] << " ";
  }
  cout << endl << endl;
}

void matricize(const int array[size], int list[NumRows][NumRows])
{
  for (int i = 0; i < NumRows; i++)
  {
    for (int j = 0; j < NumRows; j++)
    {
      list[i][j] = array[(i * NumRows) + j];
    }
  }
}


void reverseDiagonal(int list[NumRows][NumRows])
{
  int temp;

  for (int row = 0; row < NumRows / 2; row++)
  {
    temp = list[row][row];
    list[row][row] = list[NumRows - 1 - row][NumRows - 1 - row];
    list[NumRows - 1 - row][NumRows - 1 - row] = temp;
  }

  for (int row = 0; row < NumRows / 2; row++)
  {
    temp = list[row][NumRows - 1 - row];
    list[row][NumRows - 1 - row] = list[NumRows - 1 - row][row];
    list[NumRows - 1 - row][row] = temp;
  }
}

void magicCheck(const int array[size], const int list[NumRows][NumRows],
                const int size, const int NumRows)
{
  int magicNum = 0;
  int sum = 0;
  int count = 0;

  for (int i = 0; i < size; i++)
  {
    sum += array[i];
  }
  magicNum = sum / 4;
  cout << magicNum << endl;

  sum = 0;
  for (int i = 0; i < NumRows; i++)
  {
    for (int j = 0; j < NumRows; j++)
    {
      sum += list[i][j];
    }
    cout << sum << endl;
    if (sum == magicNum)
    {
      count++;
      cout << count << endl;
    }
    sum = 0;
  }

  sum = 0;
  for (int i = 0; i < NumRows; i++)
  {
    sum += list[i][i];
  }
  cout << sum << endl;
  if (sum == magicNum)
  {
    count++;
    cout << count << endl;
  }

  sum = 0;
  for (int i = 0; i < NumRows; i++)
  {
    sum += list[i][NumRows - 1 - i];
  }
  cout << sum << endl;
  if (sum == magicNum)
  {
    count++;
    cout << count << endl;
  }

  if (count == 6)
  {
    cout << "It is a Magic Square!" << endl;
  }
  else
  {
    cout << "It is not a Magic Square" << endl;
  }

}


void printMatricize(const int list[NumRows][NumRows])
{
  for (int i = 0; i < NumRows; i++)
  {
    for (int j = 0; j < NumRows; j++)
    {
      cout << left << setw(5) << list[i][j];
    }
    cout << endl;
  }
  cout << endl;
}
