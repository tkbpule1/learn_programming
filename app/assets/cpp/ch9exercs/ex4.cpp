/*
  Write a program that allows the user to enter 8 scores and outputs the points
  received by the contestant.
  Subtract the highest and lowest scores.
*/
#include <iostream>
#include <iomanip>

using namespace std;

void input(double score[]);
void output(double sum);

void highestScore(const double score[], double& sum);
void lowestScore(const double score[], double& sum);
void add(const double score[], double& sum);

int main()
{
  double sum = 0.0;
  double score[8];

  input(score);
  add(score, sum);
  highestScore(score, sum);
  lowestScore(score, sum);
  output(sum);

  return 0;
}

void input(double score[])
{
  double a;
  cout << "Enter 8 scores: ";
  for (int i = 0; i < 8; i++)
  {
    cin >> a;
    score[i] = a;
  }
}

void highestScore(const double score[], double& sum)
{
  double largest = score[0];

  for (int i = 0; i < 8; i++)
  {
    if (largest < score[i])
    {
      largest = score[i];
    }
  }
  sum = sum - largest;
}

void lowestScore(const double score[], double& sum)
{
  double smallest = score[0];

  for (int i = 0; i < 8; i++)
  {
    if (smallest > score[i])
    {
      smallest = score[i];
    }
  }
  sum = sum - smallest;
}

void add(const double score[], double& sum)
{
  for (int i = 0; i < 8; i++)
  {
    sum = sum + score[i];
  }
}


void output(double sum)
{

  cout << "The sum is: " << sum << endl;
}
