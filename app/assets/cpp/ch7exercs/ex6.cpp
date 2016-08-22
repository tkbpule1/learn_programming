#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void calcAvg(ifstream& inf, ofstream& outp, double& avg);
char calcGrade(ifstream& inp, int avg);

int main()
{
  string name;
  double average = 0;

  ifstream infile;
  ofstream outfile;

  infile.open("/home/tim/Desktop/cpp/ch7exercs/scores.txt");
  outfile.open("/home/tim/Desktop/cpp/ch7exercs/avg.txt");
  outfile << fixed << showpoint << setprecision(2);

  outfile << left << setw(10) << "Student"
          << left << setw(6) << "Test1" << left << setw(6) << "Test2"
          << left << setw(6) << "Test3" << left << setw(6) << "Test4"
          << left << setw(6) << "Test5" << left << setw(8) << "Average"
          << left << setw(7) << "Grade" << endl;

  while(infile)
  {
    infile >> name;
    if (name == "-999")
    {
      return 0;
    }
    outfile << left << setw(12) << name;
    calcAvg(infile, outfile, average);
    outfile << left << setw(8) << average;
    calcGrade(infile, average);
    outfile << right << setw(1) << calcGrade(infile, average) << endl;

  }// end while

  infile.close();
  outfile.close();
  return 0;
}// end main

void calcAvg(ifstream& inf, ofstream& outp, double& avg)
{
  int sum = 0;
  int count = 0;
  int score;

  for (int i = 1; i <= 5; i++)
  {
    inf >> score;
    outp << setw(6) << score;
    sum = sum + score;
    count++;
  }
  avg = sum / count;
}

char calcGrade(ifstream& inp, int avg)
{
  char grade;
  switch(avg / 10)
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      grade = 'F';
      break;
    case 6:
      grade = 'D';
      break;
    case 7:
      grade = 'C';
      break;
    case 8:
      grade = 'B';
      break;
    case 9:
      grade = 'A';
      break;
  }
  return grade;
}
