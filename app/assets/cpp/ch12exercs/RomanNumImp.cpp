#include <iostream>
#include <cstring>
#include "RomanNum.h"



void romanType::getRoman()
{
  std::cout << "Enter a Roman Numeral(MXII): ";

  std::cin >> romanType::romanNumeral;
}


void romanType::convertRoman()
{
  for (int i = 0; i < strlen(romanNumeral); i++)
  {
    if (romanNumeral[i] == 'M')
    {
      dec += 1000;
    }
    else if (romanNumeral[i] == 'D')
    {
      dec += 500;
    }
    if (romanNumeral[i] == 'C')
    {
      dec += 100;
    }
    else if (romanNumeral[i] == 'L')
    {
      dec += 50;
    }
    else if (romanNumeral[i] == 'X')
    {
      dec += 10;
    }
    else if (romanNumeral[i] == 'V')
    {
      dec += 5;
    }
    else if (romanNumeral[i] == 'I')
    {
      dec += 1;
    }
  }
}


void romanType::print()
{

  std::cout << "The decimal conversion of ";

  std::cout << romanNumeral;

  std::cout << " is: " << dec << std::endl;
}



romanType::romanType()
{
  dec = 0;
}
