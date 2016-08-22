#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int MAX_CODE_SIZE = 250;

void readCode(ifstream& infile, int array[], int& length, bool& lenCodeOk);
void compareCode(ifstream& infile, ofstream& outfile, int array[], int length);

int main()
{
  int array[MAX_CODE_SIZE];
  int codeLength;
  bool lenCodeOk;
  char inputFile[50];
  char outputFile[50];

  /*
  cout << "Enter the input file name: ";
  cin >> inputFile;
  infile.open(inputFile);
  */

  ifstream infile;
  infile.open("/home/tim/Desktop/cpp/ch9examples/code.txt");
  if (!infile)
  {
    cout << "Input file error" << endl;
    return 1;
  }

  /*
  cout << "Enter the output file name: ";
  cin >> outputFile;
  outfile.open(outputFile);
  */
  ofstream outfile;
  outfile.open("/home/tim/Desktop/cpp/ch9examples/isCodeErrorFree.txt");

  readCode(infile, array, codeLength, lenCodeOk);

  if (lenCodeOk)
  {
    compareCode(infile, outfile, array, codeLength);
  }
  else
  {
    cout << "The length of the secret code must be <= " << MAX_CODE_SIZE
         << endl;
  }

  infile.close();
  outfile.close();

  return 0;
}

void readCode(ifstream& infile, int array[], int& length, bool& lenCodeOk)
{
  lenCodeOk = true;

  infile >> length;

  if (length > MAX_CODE_SIZE)
  {
    lenCodeOk = false;
    return;
  }

  for (int i = 0; i < length; i++)
  {
    infile >> array[i];
  }
}

void compareCode(ifstream& infile, ofstream& outfile, int array[], int length)
{
  int length2;
  int digit;
  bool codeOk;

  codeOk = true;

  infile >> length2;

  if (length != length2)
  {
    cout << "The original code and its copy are not of the same length."
         << endl;
    return;
  }

  outfile << "Code Digit    Copy Code Digit" << endl;

  for (int i = 0; i < length; i++)
  {
    infile >> digit;
    outfile << right << setw(5) << array[i] << right << setw(17) << digit;

    if (digit != array[i])
    {
      outfile << "  code digits do not match" << endl;
      codeOk = false;
    }
    else
    {
      outfile << endl;
    }
  }
  if (codeOk)
  {
    outfile << "Message transmission okay." << endl;
  }
  else
  {
    outfile << "Error in transmission. Retransmit!!" << endl;
  }
}
