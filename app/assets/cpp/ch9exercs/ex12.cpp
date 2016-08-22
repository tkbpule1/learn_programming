#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


void getTicketType(char& ticket, char& seat);
void checkTicketType(char& ticket, char& seat);
void seatChart(const string array[14][7], char ticket, char seat);
void getRow(int& row, char& column, char ticket, char seat);
void checkRow(int& row, char ticket, char seat);
void checkColumn(char& column, char ticket, char seat);
void checkSeatAvaliability(int row, char column, const string array[14][7]);
void updatedChart(string array[14][7], int row, char column);
void outputUpdatedArray(const string array[14][7]);


int main()
{
  int row;
  char column;
  char ticket;
  char seat;

  string array[14][7] = {{" ", "A", "B", "C", "D", "E", "F"},
                         {"Row 1", "*", "*", "X", "*", "X", "X"},
                         {"Row 2", "*", "X", "*", "X", "*", "X"},
                         {"Row 3", "*", "*", "X", "X", "*", "X"},
                         {"Row 4", "X", "*", "X", "*", "X", "X"},
                         {"Row 5", "*", "X", "*", "X", "*", "*"},
                         {"Row 6", "*", "X", "*", "*", "*", "X"},
                         {"Row 7", "X", "*", "*", "*", "X", "X"},
                         {"Row 8", "*", "X", "*", "X", "X", "*"},
                         {"Row 9", "X", "*", "X", "X", "*", "X"},
                         {"Row 10", "*", "X", "*", "X", "X", "X"},
                         {"Row 11", "*", "*", "X", "*", "X", "*"},
                         {"Row 12", "*", "*", "X", "X", "*", "X"},
                         {"Row 13", "*", "*", "*", "*", "X", "*"}};

  getTicketType(ticket, seat);
  checkTicketType(ticket, seat);
  seatChart(array, ticket, seat);
  getRow(row, column, ticket, seat);
  checkRow(row, ticket, seat);
  checkColumn(column, ticket, seat);
  checkSeatAvaliability(row, column, array);
  updatedChart(array, row, column);
  outputUpdatedArray(array);

  return 0;
}

void getTicketType(char& ticket, char& seat)
{
  cout << "Would you like to fly first class or economy(f, e): ";
  cin >> ticket;

  if (ticket == 'e')
  {
    cout << "Would you like smoking or non-smoking(s, n): ";
    cin >> seat;
  }
}

void checkTicketType(char& ticket, char& seat)
{
  bool correctTicket = false;
  bool correctSeat = false;
  while (correctTicket == false)
  {
    if (ticket == 'f' || ticket == 'e')
    {
      correctTicket = true;
    }
    else
    {
      cout << "Invalid ticket type" << endl;
      cout << "Would you like first class or economy(f, e): ";
      cin >> ticket;
    }
  }

  if (ticket == 'f')
  {
    correctSeat = true;
  }
  else
  {
    while (correctSeat == false)
    {
      if (seat == 's' || seat == 'n')
      {
        correctSeat = true;
      }
      else
      {
        cout << "Invalid seat type" << endl;
        cout << "Would you like smoking or non-smoking(s, n): ";
        cin >> seat;
      }
    }
  }
}

void getRow(int& row, char& column, char ticket, char seat)
{
  cout << "Enter the row of the seat you want: ";
  cin >> row;
  cout << "Enter the column of the seat you want: ";
  cin >> column;
}

void checkRow(int& row, char ticket, char seat)
{
  bool boolean = false;

  while (boolean != true)
  {
    if (ticket == 'f')
    {
      if (row > 0 && row < 3)
      {
        boolean = true;
      }
      else
      {
        cout << "Invalid Row." << endl;
        cout << "Enter a seat row number: ";
        cin >> row;
      }
    }
    else if (ticket == 'e' && seat == 's')
    {
      if (row > 2 && row < 8)
      {
        boolean = true;
      }
      else
      {
        cout << "Invalid Row." << endl;
        cout << "Enter a seat row number: ";
        cin >> row;
      }
    }
    else if (ticket == 'e' && seat == 'n')
    {
      if (row > 7 && row < 14)
      {
        boolean = true;
      }
      else
      {
        cout << "Invalid Row." << endl;
        cout << "Enter a seat row number: ";
        cin >> row;
      }
    }
  }
}

void checkColumn(char& column, char ticket, char seat)
{
  bool boolean = false;
  int col;
  while (boolean != true)
  {
    col = static_cast<int>(column);
    if (col > 64 && col < 71)
    {
      boolean = true;
    }
    else
    {
      cout << "Invalid Column." << endl;
      cout << "Enter a seat column letter: ";
      cin >> column;
    }
  }
}

void checkSeatAvaliability(int row, char column, const string array[14][7])
{
  int col;
  bool seatTaken = true;

  while (seatTaken == true)
  {
    col = static_cast<int>(column)-64;
    if (array[row][col] == "*")
    {
      seatTaken = false;
    }
    else
    {
      cout << "Seat Taken." << endl;
      cout << "Enter a different seat row: ";
      cin >> row;
      cout << "Enter a different seat column: ";
      cin >> column;
    }
  }

  cout << "Your seat number is " << row << column << "." << endl;
}


void updatedChart(string array[14][7], const int row, const char column)
{
  int col;
  col = static_cast<int>(column)-64;
  if (array[row][col] == "*")
  {
    array[row][col] = "YS";
  }

}

void outputUpdatedArray(const string array[14][7])
{
  for (int i = 0; i < 14; i++)
  {
    for (int j = 0; j < 7; j++)
    {
      if (j == 0)
      {
        cout << setw(10);
      }
      else
      {
        cout << setw(5);
      }
      cout << left << array[i][j];
    }
    cout << endl;
  }
}

void seatChart(const string array[14][7], char ticket, char seat)
{
  int i, j;
  if (ticket == 'f')
  {
    for (i = 0; i < 7; i++)
    {
      if (i == 0)
      {cout << left << setw(10);}
      else
      {cout << left << setw(5);}
      j = 0;
      cout << array[j][i];
    }
    cout << endl;
    for (i = 1; i < 3; i++)
    {
      for (j = 0; j < 7; j++)
      {
        if (j == 0)
        {cout << left << setw(10);}
        else
        {cout << left << setw(5);}
        cout << array[i][j];
      }
      cout << endl;
    }
  }
  else if (ticket == 'e')
  {
    if (seat == 's')
    {
      for (i = 0; i < 7; i++)
      {
        if (i == 0)
        {cout << left << setw(10);}
        else
        {cout << left << setw(5);}
        j = 0;
        cout << array[j][i];
      }
      cout << endl;
      for (i = 3; i < 8; i++)
      {
        for (j = 0; j < 7; j++)
        {
        if (j == 0)
        {cout << left << setw(10);}
        else
        {cout << left << setw(5);}
         cout << array[i][j];
        }
        cout << endl;
      }
    }
    else if (seat == 'n')
    {
      for (i = 0; i < 7; i++)
      {
        if (i == 0)
          {  cout << left << setw(10);  }
        else
          {  cout << left << setw(5);  }
        j = 0;
        cout << array[0][i];
      }
      cout << endl;
      for (i = 8; i < 14; i++)
      {
        for (j = 0; j < 7; j++)
        {
          if (j == 0)
            {  cout << left << setw(10);  }
          else
            {  cout << left << setw(5);  }
          cout << array[i][j];
        }
        cout << endl;
      }
    }
  }
}
