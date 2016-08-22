#include <iostream>
#include <iomanip>
#include "ticTacToe.h"


void ticTacToe::getPlayerOneLetter()
{
  bool valid = false;

  while (valid == false)
  {
    std::cout << "Enter player one's choice of letter (X or O): ";
    std::cin >> playerOneLetter;

    if (playerOneLetter == 'X' || playerOneLetter == 'O')
    {
      valid = true;
    }
    else
    {
      std::cout << "Invalid Input" << std::endl;
    }
  }
}

void ticTacToe::setPlayerTwoLetter()
{
  if (playerOneLetter == 'X')
  {
    playerTwoLetter = 'O';
  }
  else
  {
    playerTwoLetter = 'X';
  }
}

void ticTacToe::getPlayerOneLocation()
{
  bool validity = false;

  while (!validity)
  {
    std::cout << "Player1: Enter the location where you would like to place your"
    << " letter (row column) ex.(1 3): ";
    std::cin >> row >> col;


    validity = ticTacToe::checkValidity(row, col);
  }


  ticTacToe::updateBoard(playerOneLetter, row, col);

  ticTacToe::print();

  // ticTacToe::determineWinner();
}

void ticTacToe::getPlayerTwoLocation()
{
  bool validity = false;

  while (!validity)
  {
    std::cout << "Player2: Enter the location where you would like to place your"
    << " letter (row column) ex.(1 3): ";
    std::cin >> row >> col;

    validity = ticTacToe::checkValidity(row, col);
  }

  ticTacToe::updateBoard(playerTwoLetter, row, col);

  ticTacToe::print();

  // ticTacToe::determineWinner();
}

void ticTacToe::print()
{
  std::cout << std::right;
  std::cout << std::setw(15) << "Col 1" << std::setw(8) << "Col 2" << std::setw(8) << "Col 3";
  std::cout << std::endl;


  for (int i = 0; i < 3; i++)
  {
    std::cout << std::setw(5) << std::left;
    std::cout << "Row " << i + 1;
    for (int j = 0; j < 3; j++)
    {
      std::cout << std::right;
      std::cout << std::setw(8);
      std::cout << array[i][j];
    }
    std::cout << std::endl;
  }
}

void ticTacToe::updateBoard(char playerLetter, int r, int c)
{
  array[r - 1][c - 1] = playerLetter;
}

bool ticTacToe::checkValidity(int r, int c)
{
  bool cValid = false;
  bool rValid = false;
  bool valid = false;

  if (c >= 1 && c <= 3)
  {
    if (array[r - 1][c - 1] != 'X' && array[r - 1][c - 1] != 'O')
    {
      cValid = true;
    }
  }
  else
  {
    std::cout << "Invalid Column." << std::endl;
  }

  if (r >= 1 && r <= 3)
  {
    if (array[r - 1][c - 1] != 'X' && array[r - 1][c - 1] != 'O')
    {
      rValid = true;
    }
  }
  else
  {
    std::cout << "Invalid Row." << std::endl;
  }

  if (rValid && cValid)
  {
    valid = true;
  }

  return valid;
}

bool ticTacToe::determineWinner()
{
  bool winner = false;

  char a, b, c;
  a = array[0][0];
  b = array[0][1];
  c = array[0][2];

  if (a == b && b == c && a != ' ')
  {
    if (a == playerOneLetter)
    {
      std::cout << "Player 1 Wins!!!!" << std::endl;
      winner = true;
    }
    else
    {
      std::cout << "Player 2 Wins!" << std::endl;
      winner = true;
    }
  }

  a = array[0][0];
  b = array[1][0];
  c = array[2][0];

  if (a == b && b == c && a != ' ')
  {
    if (a == playerOneLetter)
    {
      std::cout << "Player 1 Wins!" << std::endl;
      winner = true;
    }
    else
    {
      std::cout << "Player 2 Wins!" << std::endl;
      winner = true;
    }
  }

  a = array[1][0];
  b = array[1][1];
  c = array[1][2];

  if (a == b && b == c && a != ' ')
  {
    if (a == playerOneLetter)
    {
      std::cout << "Player 1 Wins!" << std::endl;
      winner = true;
    }
    else
    {
      std::cout << "Player 2 Wins!" << std::endl;
      winner = true;
    }
  }

  a = array[0][1];
  b = array[1][1];
  c = array[2][1];

  if (a == b && b == c && a != ' ')
  {
    if (a == playerOneLetter)
    {
      std::cout << "Player 1 Wins!" << std::endl;
      winner = true;
    }
    else
    {
      std::cout << "Player 2 Wins!" << std::endl;
      winner = true;
    }
  }

  a = array[2][0];
  b = array[2][1];
  c = array[2][2];

  if (a == b && b == c && a != ' ')
  {
    if (a == playerOneLetter)
    {
      std::cout << "Player 1 Wins!" << std::endl;
      winner = true;
    }
    else
    {
      std::cout << "Player 2 Wins!" << std::endl;
      winner = true;
    }
  }

  a = array[0][2];
  b = array[1][2];
  c = array[2][2];

  if (a == b && b == c && a != ' ')
  {
    if (a == playerOneLetter)
    {
      std::cout << "Player 1 Wins!" << std::endl;
      winner = true;
    }
    else
    {
      std::cout << "Player 2 Wins!" << std::endl;
      winner = true;
    }
  }

  a = array[0][0];
  b = array[1][1];
  c = array[2][2];

  if (a == b && b == c && a != ' ')
  {
    if (a == playerOneLetter)
    {
      std::cout << "Player 1 Wins!" << std::endl;
      winner = true;
    }
    else
    {
      std::cout << "Player 2 Wins!" << std::endl;
      winner = true;
    }
  }

  a = array[2][0];
  b = array[1][1];
  c = array[0][2];

  if (a == b && b == c && a != ' ')
  {
    if (a == playerOneLetter)
    {
      std::cout << "Player 1 Wins!" << std::endl;
      winner = true;
    }
    else
    {
      std::cout << "Player 2 Wins!" << std::endl;
      winner = true;
    }
  }


  return winner;
}

bool ticTacToe::gameOver()
{
  bool gameOver = false;
  int count = 0;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (array[i][j] != ' ')
      {
        count++;
      }
    }
  }

  if (count == 9)
  {
    gameOver = true;
    std::cout << std::endl;
    std::cout << "Draw" << std::endl << std::endl;
  }
  return gameOver;
}


ticTacToe::ticTacToe()
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      array[i][j] = ' ';
    }
  }

  playerOneLetter = 'X';

}
