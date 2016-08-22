#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int A_RANGE = 25;
const int B_RANGE = 50;
const int C_RANGE = 75;
const int D_RANGE = 100;
const int E_RANGE = 125;
const int F_RANGE = 150;
const int G_RANGE = 175;
const int H_RANGE = 200;

void readfile(ifstream& infile, int list[], int& a, int& b, int& c,
              int& d, int& e, int& f, int& g, int& h);
void output(const int list[], int a, int b, int c, int d, int e,
            int f, int g, int h);
int main()
{
  int list[50];
  ifstream infile;
  infile.open("/home/tim/Desktop/cpp/ch9exercs/scores.txt");
  if (!infile)
  {
    cout << "Input failure" << endl;
    return 1;
  }

  int count;
  int a = 0;
  int b = 0;
  int c = 0;
  int d = 0;
  int e = 0;
  int f = 0;
  int g = 0;
  int h = 0;


  readfile(infile, list, a, b, c, d, e, f, g, h);
  output(list, a, b, c, d, e, f, g, h);

  infile.close();

  return 0;
}


void readfile(ifstream& infile, int list[], int& a, int& b, int& c,
              int& d, int& e, int& f, int& g, int& h)
{
  int num;

    for (int i = 0; i < 26; i++)
    {
      infile >> num;
      list[i] = num;
      if (num > 0 && num < A_RANGE)
      {
        a++;
      }
      else if (num >= A_RANGE && num < B_RANGE)
      {
        b++;
      }
      else if (num >= B_RANGE && num < C_RANGE)
      {
        c++;
      }
      else if (num >= C_RANGE && num < D_RANGE)
      {
        d++;
      }
      else if (num >= D_RANGE && num < E_RANGE)
      {
        e++;
      }
      else if (num >= E_RANGE && num < F_RANGE)
      {
        f++;
      }
      else if (num >= F_RANGE && num < G_RANGE)
      {
        g++;
      }
      else if (num >= G_RANGE && num <= H_RANGE)
      {
        h++;
      }
    }

}

void output(const int list[], int a, int b, int c, int d, int e,
            int f, int g, int h)
{
  for (int i = 0; i < 26; i++)
  {
    cout << list[i] << " ";
    if ((i + 1) % 5 == 0)
    {
      cout << endl;
    }
  }
  cout << endl << endl;

  cout << "Scores:" << endl;
  cout << left << setw(10) << "0 - 24" << right << setw(8) << a << endl;
  cout << left << setw(10) << "25 - 49" << right << setw(8) << b << endl;
  cout << left << setw(10) << "50 - 74" << right << setw(8) << c << endl;
  cout << left << setw(10) << "75 - 99" << right << setw(8) << d << endl;
  cout << left << setw(10) << "100 - 124" << right << setw(8) << e << endl;
  cout << left << setw(10) << "125 - 149" << right << setw(8) << f << endl;
  cout << left << setw(10) << "150 - 174" << right << setw(8) << g << endl;
  cout << left << setw(10) << "175 - 200" << right << setw(8) << h << endl;


}
