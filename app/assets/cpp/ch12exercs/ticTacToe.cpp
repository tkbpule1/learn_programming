#include <iostream>
#include "ticTacToe.h"


int main()
{
  bool win = false;
  bool endGame = false;

  ticTacToe game;



  game.getPlayerOneLetter();

  game.setPlayerTwoLetter();

  game.print();

  while (win == false && endGame == false)
  {
    game.getPlayerOneLocation();
    endGame = game.gameOver();

    if (endGame == true)
    {
      return 1;
    }

    win = game.determineWinner();

    if (win)
    {
      game.print();
      break;
    }

    game.getPlayerTwoLocation();
    win = game.determineWinner();

  }





  return 0;
}
