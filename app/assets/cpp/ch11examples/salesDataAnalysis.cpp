#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const int numSalesPersons = 6;


struct salesPersonRecord
{
  string ID;
  double salesByQuarter[4];
  double totalSales;
};

void initialize(ifstream& infile, salesPersonRecord list[], int listSize);
void getData(ifstream& infile, salesPersonRecord list[], int listSize);
void quarterlySales(salesPersonRecord list[], int listSize,
                    double totalSalesByQuarter[]);
void totalSaleByPerson(salesPersonRecord list[], int listSize);
void maxSaleByPerson(ofstream& outfile, salesPersonRecord list[],
                      int listSize);
void maxSaleByQuarter(ofstream& outfile, double totalSalesByQuarter[]);
void printReport(ofstream& outfile, salesPersonRecord list[], int listSize,
                  double totalSalesByQuarter[]);

int main()
{
  ifstream infile;
  ofstream outfile;
  infile.open("/home/tim/Desktop/cpp/ch11examples/salesID.txt");
  if(!infile)
  {
    cout << "input failure 2" << endl;
    return 1;
  }

  salesPersonRecord salesPersonList[numSalesPersons];
  double totalSalesByQuarter[4];
  double totalSales;  // person's yearly sales amount;

  initialize(infile, salesPersonList, numSalesPersons);

  infile.close();
  infile.clear();

  infile.open("/home/tim/Desktop/cpp/ch11examples/salesData.txt");
  if(!infile)
  {
    cout << "input failure 2" << endl;
    return 1;
  }

  getData(infile, salesPersonList, numSalesPersons);

  infile.close();
  infile.clear();

  quarterlySales(salesPersonList, numSalesPersons, totalSalesByQuarter);

  totalSaleByPerson(salesPersonList, numSalesPersons);

  outfile.open("/home/tim/Desktop/cpp/ch11examples/salesReport.txt");

  outfile << fixed << showpoint << setprecision(2);

  printReport(outfile, salesPersonList, numSalesPersons,
                totalSalesByQuarter);

  maxSaleByPerson(outfile, salesPersonList, numSalesPersons);
  maxSaleByQuarter(outfile, totalSalesByQuarter);


  outfile.close();

  return 0;
}

void initialize(ifstream& infile, salesPersonRecord list[], int listSize)
{
  int quarter;

  for (int i = 0; i < listSize; i++)
  {
    infile >> list[i].ID;

    for (quarter = 0; quarter < 4; quarter++)
    {
      list[i].salesByQuarter[quarter] = 0;
    }
    list[i].totalSales = 0;
  }
}

void getData(ifstream& infile, salesPersonRecord list[], int listSize)
{
  string id;
  int month;
  double amount;
  int i;
  int quarter;

  infile >> id;
  while (infile)
  {
    infile >> month >> amount;

    for (i = 0; i < listSize; i++)
    {
      if (id == list[i].ID)
      {
        break;
      }
    }// end for loop

    if (month >= 1 && month <= 3)
    {
      quarter = 0;
    }
    else if (month >= 4 && month <= 6)
    {
      quarter = 1;
    }
    else if (month >= 7 && month <= 9)
    {
      quarter = 2;
    }
    else
    {
      quarter = 3;
    }
    // end if-else statement
    if (i < listSize)
    {
      list[i].salesByQuarter[quarter] += amount;
    }
    else
    {
      cout << "Invalid sales person's id." << endl;
    }
    // end if-else statement
    infile >> id;
  }// end while
}

void quarterlySales(salesPersonRecord list[], int listSize,
                    double totalSalesByQuarter[])
{
  int quarter;
  int i;

  for (quarter = 0; quarter < 4; quarter++)
  {
    totalSalesByQuarter[quarter] = 0.0;
  }

  for (quarter = 0; quarter < 4; quarter++)
  {
    for (i = 0; i < listSize; i++)
    {
      totalSalesByQuarter[quarter] += list[i].salesByQuarter[quarter];
    }
  }
}

void totalSaleByPerson(salesPersonRecord list[], int listSize)
{
  for (int i = 0; i < listSize; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      list[i].totalSales += list[i].salesByQuarter[j];
    }
  }
}

void maxSaleByPerson(ofstream& outfile, salesPersonRecord list[],
                      int listSize)
{
  int maxIndex = 0;

  for (int i = 0; i < listSize; i++)
  {
    if (list[maxIndex].totalSales < list[i].totalSales)
    {
      maxIndex = i;
    }
  }

  outfile << "Max Sale by Sales Person: ID = "
          << list[maxIndex].ID
          << ", Amount = $" << list[maxIndex].totalSales
          << endl;
}

void maxSaleByQuarter(ofstream& outfile, double totalSalesByQuarter[])
{
  int maxIndex;

  for (int i = 0; i < 4; i++)
  {
    if (totalSalesByQuarter[maxIndex] < totalSalesByQuarter[i])
    {
      maxIndex = i;
    }
  }

  outfile << "Max Sale by Quarter: Quarter = "
          << maxIndex + 1
          << ", Amount = $" << totalSalesByQuarter[maxIndex]
          << endl;
}

void printReport(ofstream& outfile, salesPersonRecord list[], int listSize,
                  double totalSalesByQuarter[])
{
  int index;
  int quarter;

  outfile << left << setw(13) << setfill('-') << '-'
          << "  Annual Sales Report  "
          << setw(13) << setfill('-') << '-'
          << endl;

  outfile << right << setw(4) << setfill(' ') << "ID"
          << setw(12) << "QT1" << setw(12) << "QT2"
          << setw(12) << "QT3" << setw(12) << "QT4"
          << setw(12) << "Total"
          << endl;


  outfile << setw(70) << setfill('_') << '_' << endl;
  outfile << setfill(' ');

  for (index = 0; index < listSize; index++)
  {
    outfile << left << setw(6) << list[index].ID;

    for (quarter = 0; quarter < 4; quarter++)
    {
      outfile << right << setw(12)
              << list[index].salesByQuarter[quarter];
    }
    outfile << setw(12) << list[index].totalSales << endl;
  }

  outfile << endl;

  outfile << left << setw(6) << "Total:";

  for (quarter = 0; quarter < 4; quarter++)
  {
    outfile << right << setw(12) << totalSalesByQuarter[quarter];
  }

  outfile << endl << endl;

  cout << "Processing" << endl;
}
