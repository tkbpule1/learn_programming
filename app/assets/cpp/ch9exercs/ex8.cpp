#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

void getData(ifstream& infile, string names[], double scores[]);
double classAvg(const double scores[]);
void studBelowClassAvg(const string names[], const double scores[],
                       double avg, string below[], int& belowSize);
void highestScores(const string names[], const double scores[],
                   double& highScore, string highest[], int& highestSize);
void output(double avg, const string below[], int belowSize,
            double highScore, const string highest[], int highestSize);

const int classSize = 50;

int main()
{
  int belowSize;
  int highestSize;
  double average;
  double highScore;
  ifstream infile;

  string names[classSize];
  string belowAvg[classSize];
  string highest[classSize];
  double scores[classSize];

  infile.open("/home/tim/Desktop/cpp/ch9exercs/class.txt");

  getData(infile, names, scores);
  average = classAvg(scores);
  studBelowClassAvg(names, scores, average, belowAvg, belowSize);
  highestScores(names, scores, highScore, highest, highestSize);
  output(average, belowAvg, belowSize, highScore, highest, highestSize);

  infile.close();
  return 0;
}

void getData(ifstream& infile, string names[], double scores[])
{
  for (int i = 0; i < classSize; i++)
  {
    infile >> names[i];
    infile >> scores[i];
  }
}

double classAvg(const double scores[])
{
  double sum = 0;
  double avg;

  for (int i = 0; i < classSize; i++)
  {
    sum += scores[i];
  }
  avg = sum / classSize;
  return avg;
}

void studBelowClassAvg(const string names[], const double scores[],
                                     double avg, string below[], int& belowSize)
{
  int j = 0;
  for (int i = 0; i < classSize; i++)
  {
    if(scores[i] < avg)
    {
      below[j] = names[i];
      j++;
    }
  }
  belowSize = j;
}

void highestScores(const string names[], const double scores[],
                   double& highScore, string highest[], int& highestSize)
{
  int j = 0;
  highScore = scores[0];

  for (int i = 0; i < classSize; i++)
  {
    if(highScore < scores[i])
    {
      highScore = scores[i];
    }
  }

  for (int i = 0; i < classSize; i++)
  {
    if (scores[i] == highScore)
    {
      highest[j] = names[i];
      j++;
    }
  }
  highestSize = j;
}

void output(double avg, const string below[], int belowSize,
            double highScore, const string highest[], int highestSize)
{
  cout << "Class average: " << avg << endl;
  cout << "Students below class average: " << endl;
  for (int i = 0; i < belowSize; i++)
  {
    cout << below[i] << endl;
  }
  cout << "Highest score: " << highScore << endl;
  cout << "Students that acheived the highest score: " << endl;
  for (int i = 0; i < highestSize; i++)
  {
    cout << highest[i] << endl;
  }
}
