/*  Data Comparison;
    1. How to read data from more than one file
    2. How to send output to a file
    3. How to generate a bar graph
    4. How to use the same program segments on different, but similar data sets
        using functions and parameter passing
    5. How to use structured design to solve a problem and how to perform
        parameter passing
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

  // Function Prototypes
void calcAvg(ifstream& inp, double& courseAvg);
void printResult(ofstream& outp, string courseID, int groupNo, double avg);
void printResults(ofstream& out, string courseId, int groupNum, double Avg);
void printHeading(ofstream& outp);

int main()
{
  // Declare variables;
  string courseID1;     // course ID for group 1
  string courseID2;      // course ID for group 2
  int numberOfCourses;
  double avg1;          // avg score for a course in group 1
  double avg2;          // avg score for a course in group 2
  double avgGroup1;     // avg score for group 1
  double avgGroup2;     // avg score for group 2
  ifstream group1;      // input stream variable for group 1
  ifstream group2;      // input stream variable for group 2
  ofstream outfile;     // output stream variable

  group1.open("/home/tim/Desktop/cpp/ch7examples/group1.txt");
  group2.open("/home/tim/Desktop/cpp/ch7examples/group2.txt");

  if (!group1 || !group2)
  {
    cout << "Unable to open files." << endl;
    cout << "Program terminates." << endl;
    return 1;
  }

  outfile.open("/home/tim/Desktop/cpp/ch7examples/students.txt");
  outfile << fixed << showpoint << setprecision(2);

  numberOfCourses = 0;

  // outfile << "Course No.     Group No.     Course Average" << endl;


  group1 >> courseID1;
  group2 >> courseID2;

// // printResult
//   while (group1 && group2)
//   {
//     if (courseID1 != courseID2)
//     {
//       cout << "Data error: Course IDs do not match" << endl;
//       cout << "Program terminates" << endl;
//       return 1;
//     }
//
//     else
//     {
//       calcAvg(group1, avg1);
//       calcAvg(group2, avg2);
//       printResult(outfile, courseID1, 1, avg1);
//       printResult(outfile, courseID2, 2, avg2);
//       avgGroup1 = avgGroup1 + avg1;
//       avgGroup2 = avgGroup2 + avg2;
//       outfile << endl;
//       numberOfCourses++;
//     } // end if-else statements
//     group1 >> courseID1;
//     group2 >> courseID2;
//   } // end while loop

// printResults
printHeading(outfile);
while (group1 && group2)
{
  if (courseID1 != courseID2)
  {
    cout << "Data error: Course IDs do not match" << endl;
    cout << "Program terminates" << endl;
    return 1;
  }

  else
  {
    calcAvg(group1, avg1);
    calcAvg(group2, avg2);
    printResults(outfile, courseID1, 1, avg1);
    printResults(outfile, courseID2, 2, avg2);
    avgGroup1 = avgGroup1 + avg1;
    avgGroup2 = avgGroup2 + avg2;
    outfile << endl;
    numberOfCourses++;
  } // end if-else statements
  group1 >> courseID1;
  group2 >> courseID2;
} // end while loop

  if (group1 && !group2)
  {
    cout << "Ran out of data for group 2 before group 1.";
  }
  else if (!group1 && group2)
  {
    cout << "Ran out of data for group 1 before group 2.";
  }
  else
  {
    outfile << "Group 1 --- ****" << endl;
    outfile << "Group 2 --- ####" << endl;
    outfile << "Avg for group 1: " << avgGroup1 / numberOfCourses << endl;
    outfile << "Avg for group 2: " << avgGroup2 / numberOfCourses << endl;
  }

  group1.close();
  group2.close();
  outfile.close();

  return 0;
} // end main function


  // Calculate average function
void calcAvg(ifstream& inp, double& courseAvg)
{
  double totalScore = 0;
  int numberOfStudents = 0;
  int score;

  inp >> score;
  while(score != -999)
  {
    totalScore += score;
    numberOfStudents++;
    inp >> score;
  } // end while loop;

  courseAvg = totalScore / numberOfStudents;

} // end calculate average function;


  // Print result function;
void printResult(ofstream& outp, string courseID, int groupNo, double avg)
{
  if (groupNo == 1)
  {
    outp << "   " << courseID << "    ";
  }
  else
  {
    outp << "        ";
  }
  outp << setw(4) << groupNo << setw(17) << avg << endl;


} // end print result function;


  // Print Results function;
void printResults(ofstream& out, string courseId, int groupNum, double Avg)
{
  int noOfSymbols;
  int count;

  if (groupNum == 1)
  {
    out << left << setw(13) << courseId;
  }
  else
  {
    out << "             ";
  }

  noOfSymbols = static_cast<int>(Avg / 2);

  if (groupNum == 1)
  {
    for (count = 1; count <= noOfSymbols; count++)
    {
      out << '*';
    }
  }
  else
  {
    for (count = 1; count <= noOfSymbols; count++)
    {
      out << '#';
    }
  }
  out << endl;
} // end print results function;


  // Print Heading
void printHeading(ofstream& outp)
{
  outp << "Course ID                Course Average" << endl;
  outp << "             0    0   20   30   40   50   60   70   80   90   100"
      << endl;
  outp << "             |....|....|....|....|....|....|....|....|....|....|"
      << endl;
}
