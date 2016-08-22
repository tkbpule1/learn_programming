#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

const int SIZE = 100;

void getData(ifstream& infile, int array[]);
void getLen(const int array[], int& length);
void uniqueNums(const int array[], int list[], int arraylen, int& comparelen);
void sort(int list[], int comparelen);
void numOfOccur(const int array[], const int list[], int numOccur[],
                int arraylen, int comparelen);
void output(const int unique[], const int numOccur[], const int comparelen);


int main()
{
  int arraylen;
  int comparelen;

  int array[SIZE];
  int unique[comparelen];
  int numOccur[comparelen];
  // int length[100];

  ifstream infile;

  infile.open("/home/tim/Desktop/cpp/ch9exercs/data.txt");
  if(!infile)
  {
    cout << "Input Failure" << endl;
    return 1;
  }

  getData(infile, array);
  getLen(array, arraylen);
  uniqueNums(array, unique, arraylen, comparelen);
  sort(unique, comparelen);
  numOfOccur(array, unique, numOccur, arraylen, comparelen);
  output(unique, numOccur, comparelen);

  return 0;
}

void getData(ifstream& infile, int array[])
{
  for (int i = 0; i < SIZE; i++)
  {
    int num;
    infile >> num;
    if (num != -999)
    {
      array[i] = num;
    }
    else
    {
      array[i] = 0;
    }
  }
}

void getLen(const int array[], int& length)
{
  length = 0;
  for (int i = 0; i < SIZE; i++)
  {
    if (array[i] != 0)
    {
      length++;
    }
  }
}


void uniqueNums(const int array[], int list[], int arraylen, int& comparelen)
{
  comparelen = 1;
  bool same = false;
  int k = 1;

  list[0] = array[0];

  for (int i = 1; i < arraylen; i++)
  {
    for (int j = 0; j < i; j++)
    {
      if (list[j] == array[i])
      {
        same = true;
      }
    }
    if (same == false)
    {
      comparelen++;
      list[k] = array[i];
      k++;
    }
    same = false;
  }
}

void sort(int list[], int comparelen)
{
  int temp;

  for (int i = 0; i < comparelen; i++)
  {
    for (int j = 0; j < i; j++)
    {
      if (list[i] < list[j])
      {
        temp = list[j];
        list[j] = list[i];
        list[i] = temp;
      }
    }
  }
}

void numOfOccur(const int array[], const int list[], int numOccur[],
                int arraylen, int comparelen)
{
  int count = 0;

  for (int i = 0; i < comparelen; i++)
  {
    for (int j = 0; j < arraylen; j++)
    {
      if (array[j] == list[i])
      {
        count++;
      }
    }
    numOccur[i] = count;
    count = 0;
  }
}

void output(const int unique[], const int numOccur[], const int comparelen)
{
  cout << left << setw(10) << "Number"
       << right << setw(8) << "Count";
  cout << endl;
  for (int i = 0; i < comparelen; i++)
  {
    cout << left << setw(13) << unique[i]
         << right << setw(3) << numOccur[i];
    cout << endl;
  }
}
