// Five candidates are in a local election. Output the name and the number of votes each candidate received, the percentage of the total votes, and the winner
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

// Function Prototypes;
void getData(ifstream& infile, string name[5], int votes[]);
void percentage(const int votes[], double perc[], int& sum);
void winner(const string name[], const int votes[], string& win);
void output(const string name[5], const int votes[],
                         const double perc[], const int sum, string winner);

int main()
{
  int sum;
  double perc[5];
  string name[5];
  string win;
  int votes[6];

  ifstream infile;
  infile.open("/home/tim/Desktop/cpp/ch9exercs/election.txt");
  if (!infile)
  {
    cout << "Input Failure" << endl;
    return 1;
  }

  cout << fixed << showpoint << setprecision(2);

  getData(infile, name, votes);
  percentage(votes, perc, sum);
  winner(name, votes, win);
  output(name, votes, perc, sum, win);

  infile.close();

  return 0;
}

void getData(ifstream& infile, string name[5], int votes[])
{
  char ch;
  int count = 0;
  for (int i = 0; i < 5; i++)
  {
    cout << "Enter a name: ";
    infile >> name[i];
    cout << "Enter the number of votes: ";
    infile >> votes[i];
  }
}

void percentage(const int votes[], double perc[], int& sum)
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

void winner(const string name[], const int votes[], string& win)
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
  cout << win << endl;
}

void output(const string name[5], const int votes[],
                         const double perc[], const int sum, string winner)
{
  cout << left << setw(20) << "Candidate"
  << setw(25) << "Votes Received"
  << right << setw(20) << static_cast<char>(37) << " of Total Votes" << endl;

  for (int i = 0; i < 5; i++)
  {
    cout << left << setw(26) << name[i]
         << setw(32) << votes[i]
         << right << setw(5) << perc[i];
    cout << endl;
  }
  cout << left << setw(26) << "Total"
       << setw(10) << sum << endl;
  cout << left << "The winner of the Election is " << winner << endl;
}
