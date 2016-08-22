#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

const int NumCands = 6;
const int NumRegions = 4;

void printHeading(ofstream& outfile);
void initialize(int vbRegion[][NumRegions], int tVotes[], int numRows);
void getCandidatesName(ifstream& infile, string cNames[], int numRows);
void sortCandidatesName(string cNames[], int numRows);
int binSearch(string cNames[], int numRows, string name);
void processVotes(ifstream& infile, string cNames[],
                  int vbRegion[][NumRegions], int numRows);
void addRegionsVote(int vbRegion[][NumRegions], int tVotes[], int numRows);
void printResults(ofstream& outfile, string cNames[],
                  int vbRegion[][NumRegions], int tVotes[], int numRows);


int main()
{
  string candidatesName[NumCands];
  int votesByRegion[NumCands][NumRegions];
  int totalVotes[NumCands];

  ifstream infile;
  ofstream outfile;


  infile.open("/home/tim/Desktop/cpp/ch10examples/candidateData.txt");
  if (!infile)
  {
    cout << "Input Failure1" << endl;
    return 1;
  }


  getCandidatesName(infile, candidatesName, NumCands);
  sortCandidatesName(candidatesName, NumCands);


  infile.close();
  infile.clear();


  infile.open("/home/tim/Desktop/cpp/ch10examples/voteData.txt");
  if (!infile)
  {
    cout << "Input Failure2" << endl;
    return 1;
  }


  initialize(votesByRegion, totalVotes, NumCands);
  processVotes(infile, candidatesName, votesByRegion, NumCands);
  addRegionsVote(votesByRegion, totalVotes, NumCands);


  infile.close();


  outfile.open("/home/tim/Desktop/cpp/ch10examples/electionResults.txt");
  printHeading(outfile);
  printResults(outfile, candidatesName, votesByRegion, totalVotes, NumCands);

  outfile.close();

  return 0;
}

void printHeading(ofstream& outfile)
{
  outfile << left << setw(4) << setfill(' ') << " " << right << setw(30)
          << setfill('-') << "Election Results" << setw(14)
          << setfill('-') << '-' << endl << endl;

  outfile << left << setw(29) << setfill(' ') << "Candidate" << "Votes"
          << endl;
  outfile << setw(12) << "Name" << setw(12) << "Region 1"
       << setw(12) << "Region 2" << setw(12) << "Region 3"
       << setw(12) << "Region 4" << "Total" << endl;
  for (int i = 0; i < 5; i++)
  {
    outfile << setw(9) << setfill('-') << setw(3) << setfill(' ');
  }
  outfile << endl;
}

void initialize(int vbRegion[][NumRegions], int tVotes[], int numRows)
{
  for (int i = 0; i < numRows; i++)
  {
    for (int j = 0; j < NumRegions; j++)
    {
      vbRegion[i][j] = 0;
    }
  }

  for (int i = 0; i < numRows; i++)
  {
    tVotes[i] = 0;
  }
}

void getCandidatesName(ifstream& infile, string cNames[], int numRows)
{
  for (int i = 0; i < numRows; i++)
  {
    infile >> cNames[i];
  }
}

void sortCandidatesName(string cNames[], int numRows)
{
  int min;
  // selection sort
  for (int i = 0; i < numRows; i++)
  {
    min = i;
    for (int j = i + 1; j < numRows; j++)
    {
      if (cNames[j] < cNames[min])
      {
        min = j;
      }
    }
    cNames[i].swap(cNames[min]);
  }
}

int binSearch(string cNames[], int numRows, string name)
{
  int first, last, mid;
  bool found;

  first = 0;
  last = numRows - 1;
  found = false;

  while (!found && first <= last)
  {
    mid = (first + last) / 2;

    if (cNames[mid] == name)
    {
      found = true;
    }
    else if (cNames[mid] > name)
    {
      last = mid - 1;
    }
    else
    {
      first = mid + 1;
    }
  }
  if (found)
  {
    return mid;
  }
  else
  {
    return -1;
  }
}

void processVotes(ifstream& infile, string cNames[],
                  int vbRegion[][NumRegions], int numRows)
{
  string candName;
  int region;
  int numVotes;
  int loc;

  infile >> candName >> region >> numVotes;

  while (infile)
  {
    loc = binSearch(cNames, numRows, candName);

    if (loc != -1)
    {
      vbRegion[loc][region - 1] += numVotes;
    }

    infile >> candName >> region >> numVotes;
  }
}

void addRegionsVote(int vbRegion[][NumRegions], int tVotes[], int numRows)
{
  for (int i = 0; i < numRows; i++)
  {
    for (int j = 0; j < NumRegions; j++)
    {
      tVotes[i] += vbRegion[i][j];
    }
  }
}

void printResults(ofstream& outfile, string cNames[],
                  int vbRegion[][NumRegions], int tVotes[], int numRows)
{
  int largest = 0;
  int winLoc = 0;
  int sumVotes = 0;

  for (int i = 0; i < numRows; i++)
  {
    if (largest < tVotes[i])
    {
      largest = tVotes[i];
      winLoc = i;
    }

    sumVotes += tVotes[i];

    outfile << left;
    outfile << setw(12) << cNames[i];
    outfile << right;
    for (int j = 0; j < NumRegions; j++)
    {
      outfile << setw(8) << vbRegion[i][j];
      outfile << setw(4) << setfill(' ') << ' ';
    }
    outfile << setw(5) << tVotes[i] << endl;
  }

  outfile << endl << endl << "Winner: " << cNames[winLoc]
       << ", Votes Received: " << tVotes[winLoc] << endl << endl;

  outfile << "Total votes polled: " << sumVotes << endl;



}
