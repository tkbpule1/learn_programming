// Five candidates are in a local election. Output the name and the number of votes each candidate received, the percentage of the total votes, and the winner
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

// Function Prototypes;
void getInfo(int& num);
void declareArrays(char** &name, int* &votes, double* &perc, int num);
void getData(ifstream& infile, char** &name, int* &votes);
void percentage(int* votes, double* &perc, int& sum);
void winner(char** name, int* votes, string& win);
void output(char** name, int* votes, double* perc, int sum, string win);
void destroy(char** &name, int* &votes, double* &perc);

int main()
{
  int sum;
  int numCandidates;
  int *votes;
  char **name;
  string win;
  double *perc;

  ifstream infile;
  infile.open("/home/tim/Desktop/cpp/ch9exercs/election.txt");
  if (!infile)
  {
    cout << "Input Failure" << endl;
    return 1;
  }

  cout << fixed << showpoint << setprecision(2);

  getInfo(numCandidates);
  declareArrays(name, votes, perc, numCandidates);

  getData(infile, name, votes);
  // cout << "problem" << endl;
  percentage(votes, perc, sum);
  winner(name, votes, win);
  output(name, votes, perc, sum, win);
  destroy(name, votes, perc);

  infile.close();

  return 0;
}

void getInfo(int& num)
{
  cout << endl;
  cout << "Enter the number of candidates: ";
  cin >> num;
}

void declareArrays(char** &name, int* &votes, double* &perc, int num)
{
  // Declare name array:
  name = new char*[num];
  for (int i = 0; i < num; i++)
  {
    name[i] = new char[12];
  }

  // Declare votes array:
  votes = new int[num];

  // Declare percentage array:
  perc = new double[num];
}

void getData(ifstream& infile, char** &name, int* &votes)
{
  char ch;
  int count = 0;
  for (int i = 0; i < 5; i++)
  {
    infile >> name[i];
    infile >> votes[i];
  }
}

void percentage(int* votes, double* &perc, int& sum)
{
  sum = 0;
  for (int i = 0; i < 5; i++)
  {
    sum = sum + votes[i];
  }
  for (int i = 0; i < 5; i++)
  {
    perc[i] = (votes[i] / static_cast<double>(sum)) * 100;
  }
}

void winner(char** name, int* votes, string& win)
{
  int index;
  int largest = votes[0];
  for (int i = 0; i < 5; i++)
  {
    if (largest < votes[i])
    {
      largest = votes[i];
      index = i;
    }
  }
  win = name[index];
}

void output(char** name, int* votes, double* perc, int sum, string win)
{
  cout << endl << endl;

  cout << left << setw(20) << "Candidate"
  << setw(25) << "Votes Received"
  << right << static_cast<char>(37) << " of Total Votes" << endl;

  for (int i = 0; i < 5; i++)
  {
    cout << left << setw(25) << name[i]
         << setw(25) << votes[i]
         << right << perc[i];
    cout << endl;
  }
  cout << left << setw(26) << "Total"
       << setw(10) << sum << endl;
  cout << left << "The winner of the Election is " << win << endl;

  cout << endl << endl;
}

void destroy(char** &name, int* &votes, double* &perc)
{
  delete [] name;
  name = NULL;
  delete [] votes;
  votes = NULL;
  delete [] perc;
  perc = NULL;
}
