//Teacher needs help grading a true/false test.
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>

using namespace std;


// Function Prototypes:
void getData(int& idLen, int& testLen, int& numStudents, int& totalPoints);

void declareAnswersArray(char* &answers, int testLen);

void declareStudAnsArray(char** &studAns, int numStudents, int testLen);

void declareStudentIdArray(char** &studentId, int numStudents, int idLen);

void declareGradeArray(double* &grade, int numStudents);

int openInputFile(ifstream& infile);

void getAnswers(ifstream& infile, string& str);

void storeAnswersInArray(string str, char* &answers, int testLen);

void readData(ifstream& infile, char** &studentId, char** &studAns,
                            int numStudents, int idLen, int testLen);

void compare(char *answers, char **studAns, double *grade,
                            int numStudents, int testLen, int totalPoints);

void output(char **studentId, char **studAns, double *grade,
                            int numStudents, int testLen, int idLen);

void destroy(char* &answers, char** &studentId, char** &studAns,
                                                              double* &grade);


int main()
{
  // Variables:
  int idLen;
  int testLen;
  int numStudents;
  int totalPoints;
  string str;

  // Pointers (Dynamic arrays):
  char *answers;
  char **studentId;
  char **studAns;
  double *grade;

  getData(idLen, testLen, numStudents, totalPoints);

  declareAnswersArray(answers, testLen);

  declareStudAnsArray(studAns, numStudents, testLen);

  declareStudentIdArray(studentId, numStudents, idLen);

  declareGradeArray(grade, numStudents);

  ifstream infile;

  openInputFile(infile);

  getAnswers(infile, str);

  storeAnswersInArray(str, answers, testLen);

  readData(infile, studentId, studAns, numStudents, idLen, testLen);

  compare(answers, studAns, grade, numStudents, testLen, totalPoints);

  cout << fixed << showpoint << setprecision(2);

  output(studentId, studAns, grade, numStudents, testLen, idLen);

  destroy(answers, studentId, studAns, grade);


  return 0;
}



void getData(int& idLen, int& testLen, int& numStudents, int& totalPoints)
{
  cout << endl;
  cout << "Enter the number of students: ";
  cin >> numStudents;

  cout << "Enter the length of the student id number: ";
  cin >> idLen;

  cout << "Enter the number of questions of the test: ";
  cin >> testLen;

  cout << "Enter the total points of the test: ";
  cin >> totalPoints;

}

void declareAnswersArray(char* &answers, int testLen)
{
  answers = new char[testLen + 1];
}

void declareStudentIdArray(char** &studentId, int numStudents, int idLen)
{
  studentId = new char*[numStudents + 1];
  for (int i = 0; i < numStudents; i++)
  {
    studentId[i] = new char[idLen];
  }
}

void declareStudAnsArray(char** &studAns, int numStudents, int testLen)
{
  studAns = new char*[numStudents + 1];
  for (int i = 0; i < numStudents; i++)
  {
    studAns[i] = new char[testLen];
  }
}

void declareGradeArray(double* &grade, int numStudents)
{
  grade = new double[numStudents + 1];
}

int openInputFile(ifstream& infile)
{
  infile.open("/home/tim/Desktop/cpp/ch9exercs/grade.txt");

  if(!infile)
  {
    cout << "Input Failture" << endl;
    return 1;
  }
}

void getAnswers(ifstream& infile, string& str)
{
  getline(infile, str);
}

void storeAnswersInArray(string str, char* &answers, int testLen)
{
  str = str.c_str();
  for (int i = 0; i < testLen; i++)
  {
    answers[i] = str[i];
  }
  cout << endl;
}

void readData(ifstream& infile, char** &studentId, char** &studAns,
                                    int numStudents, int idLen, int testLen)
{
  // Variable;
  char discard;

  // For loop;
  for (int i = 0; i < numStudents; i++)
  {
    string str;

    // Get student id;

    infile.get(studentId[i], idLen + 1);
    // Discard space character;
    infile.get(discard);

    // Get student answers;
    infile.get(studAns[i], testLen + 1);
    // Discard new line character;
    infile.get(discard);

  } // End for loop;

  cout << endl;
}

void compare(char *answers, char **studAns, double *grade,
                              int numStudents, int testLen, int totalPoints)
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

void output(char **studentId, char **studAns, double *grade,
                    int numStudents, int testLen, int idLen)
{
  // For loops;
  for (int i = 0; i < numStudents; i++)
  {
    // Output student id;
    cout << left << studentId[i];
    // Format output;
    cout << "     ";
    // Output student answers;
    cout << studAns[i];
    // Format output
    // Output grade;
    cout << "     " << right << setw(6) << grade[i];
    cout << endl;
  } // End of outer for loop;

  cout << endl;
}

void destroy(char* &answers, char** &studentId, char** &studAns,
                                                              double* &grade)
{
  delete [] answers;
  answers = NULL;
  delete [] studentId;
  studentId = NULL;
  delete [] studAns;
  studAns = NULL;
  delete [] grade;
  grade = NULL;
}
