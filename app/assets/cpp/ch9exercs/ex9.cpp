#include <iostream>
#include <iomanip>

using namespace std;


void setZero(int array[], int size);
void inputArray(int array[], int size);
void print(const int array[][4], int rows, int cols);
void doubleArray(const int array[], int list[], int size);
void copyGamma(int inStock[][4], const int gamma[]);
void copyAlphaBeta(int inStock[][4], const int array[], const int list[]);
void setInStock(int inStock[][4], const int delta[]);

int main()
{
  int inStock[10][4];
  int alpha[20];
  int beta[20];
  int gamma[4] = {11, 13, 15, 17};
  int delta[10] = {3, 5, 2, 6, 10, 9, 7, 11, 1, 8};

  inputArray(alpha, 20);
  doubleArray(alpha, beta, 20);
  copyGamma(inStock, gamma);
  copyAlphaBeta(inStock, alpha, beta);
  setInStock(inStock, delta);
  print(inStock, 10, 4);

  return 0;
}

void setZero(int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    array[i] = 0;
  }
}

void inputArray(int array[], int size)
{
  cout << "Enter 20 integers: ";
  for (int i = 0; i < size; i++)
  {
    cin >> array[i];
  }
}

void doubleArray(const int array[], int list[], int size)
{
  for (int i = 0; i < size; i++)
  {
    list[i] = 2 * array[i];
  }
}

void copyGamma(int inStock[][4], const int gamma[])
{
  for (int i = 0; i < 4; i++)
  {
    inStock[0][i] = gamma[i];
  }
  for (int i = 1; i < 10; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      inStock[i][j] = inStock[i-1][j] * 3;
    }
  }

}

void copyAlphaBeta(int inStock[][4], const int array[], const int list[])
{
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      inStock[i][j] = array[i*4+j];
    }
  }
  for (int i = 5; i < 10; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      inStock[i][j] = list[((i-5)*4)+j];
    }
  }
}

void print(const int array[][4], int rows, int cols)
{
  cout << "Array: " << endl;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cout << array[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}

void printOneDArray(const int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << array[i];
    if (i % 15 == 0)
    {
      cout << endl;
    }
  }
}

void setInStock(int inStock[][4], const int delta[])
{
  cout << "Enter 4 integers: ";

  for (int i = 0; i < 4; i++)
  {
    cin >> inStock[0][i];
  }

  for (int i = 1; i < 10; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      inStock[i][j] = 2 * inStock[i-1][j] - delta[j];
    }
  }
}
