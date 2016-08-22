//Teacher needs help grading a true/false test.
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>

using namespace std;

// Constants;
const int idLen = 8;
const int testLen = 20;
const int numStudents = 10;
const int totalPoints = 40;

// Function prototypes;
void getAnswers(ifstream& infile, char answers[]);
void readData(ifstream& infile, char studentId[][idLen + 1],
              char studAns[][testLen + 1]);
void compare(const char answers[], const char studAns[][testLen + 1],
             double grade[]);
void output(const char studentId[][idLen + 1],
            const char studAns[][testLen + 1], const double grade[]);

int main()
{
  // Varialbes;
  double grade[10];

  // Arrays;
  char studAns[numStudents][testLen + 1];
  typedef char list[testLen + 1];
  list answers;
  typedef char array[numStudents][idLen + 1];
  array studentId;

  // input file stream variable;
  ifstream infile;
  infile.open("/home/tim/Desktop/cpp/ch9exercs/grade.txt");
  if(!infile)
  {
    cout << "Input Failture" << endl;
    return 1;
  }

  // Format output;
  cout << fixed << showpoint << setprecision(2);

  // Call functions;
  getAnswers(infile, answers);
  readData(infile, studentId, studAns);
  compare(answers, studAns, grade);
  output(studentId, studAns, grade);

  cout << studentId[0][5] << endl;
  cout << studAns[0][0] << endl;

  return 0;
}

// Function Definitions;
void getAnswers(ifstream& infile, char answers[])
{
  // Variable;
  char discard;
  // Get test answers;
  infile.get(answers, testLen + 1);
  // Discard new line character;
  infile.get(discard);

}

void readData(ifstream& infile, char studentId[][idLen + 1],
              char studAns[][testLen + 1])
{
  // Variable;
  char discard;
  // For loop;
  for (int i = 0; i < numStudents; i++)
  {
    // Get student id; need +1 for the null character;
    infile.get(studentId[i], idLen + 1);
    // Discard space character;
    infile.get(discard);
    // Get student answers; nned +1 for null character;
    infile.get(studAns[i], testLen + 1);
    // Discard new line character;
    infile.get(discard);
  } // End for loop;
  cout << endl;
}


void compare(const char answers[], const char studAns[][testLen + 1],
             double grade[])
{
  // Variables;
  double points = 0;
  int numCorrect = 0;
  int numWrong = 0;
  int numBlank = 0;
  // For loops;
  for (int i = 0; i < numStudents; i++)
  {
    for (int j = 0; j < testLen; j++)
    {
      // Variables;
      char a, b;
      a = answers[j];
      b = studAns[i][j];
      // if-else statements
      if (a == b)
      {
        // correct answer receives 2 points;
        points = points + 2;
        numCorrect++;
      }
      else if (a != b)
      {
        if (b == ' ')
        {
          // blank answer receives 0 points;
          points = points;
          numBlank++;
        }
        else
        {
          // wrong answer takes away 1 point;
          points = points - 1;
          numWrong++;
        }
      }
    } // end inner for loop;
    grade[i] = (points/totalPoints)*100;
    // Reset variables to 0;
    numCorrect = 0;
    numWrong = 0;
    numBlank = 0;
    points = 0;
  } // End of outer for loop;
  cout << endl;
}

void output(const char studentId[][idLen + 1],
            const char studAns[][testLen + 1], const double grade[])
{
  // For loops;
  for (int i = 0; i < numStudents; i++)
  {
    for (int j = 0; j < idLen; j++)
    {
      // Output student id;
      cout << left << studentId[i][j];
    } // end of fist inner for loop;
    // Format output;
    cout << "     ";
    for (int k = 0; k < testLen; k++)
    {
      // Output student answers;
      cout << studAns[i][k];
    } // end of second inner for loop;
    // Format output
    // Output grade;
    cout << "     " << left << setw(6) << grade[i];
    cout << endl;
  } // End of outer for loop;
}
