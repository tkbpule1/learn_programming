#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

void initialize(int& lc, int list[]);
void copyText(ifstream& infile, ofstream& outfile, char& ch, int list[]);
void characterCount(char ch, int list[]);
void writeTotal(ofstream& outfile, int lc, int list[]);

int main()
{
  int lineCount;
  int letterCount[26];
  char ch;
  ifstream infile;
  ofstream outfile;

  infile.open("/home/tim/Desktop/cpp/ch9examples/textin.txt");
  if (!infile)
  {
    cout << "Input error" << endl;
    return 1;
  }

  outfile.open("/home/tim/Desktop/cpp/ch9examples/textout.txt");

  initialize(lineCount, letterCount);

  infile.get(ch);

  while (infile)
  {
    copyText(infile, outfile, ch, letterCount);
    lineCount++;
    infile.get(ch);
  }

  writeTotal(outfile, lineCount, letterCount);

  infile.close();
  outfile.close();

  return 0;
}

void initialize(int& lc, int list[])
{
  lc = 0;

  for (int i = 0; i < 26; i++)
  {
    list[i] = 0;
  }
}

void copyText(ifstream& infile, ofstream& outfile, char& ch, int list[])
{
  while (ch != '\n')
  {
    outfile << ch;
    characterCount(ch, list);
    infile.get(ch);
  }

  outfile << ch;
}

void characterCount(char ch, int list[])
{
  int index;
  ch = toupper(ch);

  index = static_cast<int>(ch) - static_cast<int>('A');

  if (index >= 0 && index < 26)
  {
    list[index]++;
  }
}

void writeTotal(ofstream& outfile, int lc, int list[])
{
  outfile << endl << endl;
  outfile << "The number of lines = " << lc << endl;

  for (int i = 0; i < 26; i++)
  {
    outfile << static_cast<char>(i + static_cast<int>('A'))
            << " count = " << list[i] << endl;
  }
}
