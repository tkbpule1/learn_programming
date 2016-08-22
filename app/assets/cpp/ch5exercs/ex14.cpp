/*
  Number Guessing Game
  Only have five tries
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

  int guess;
  int num;
  int diff = 0;
  int x = 4;

  cout << "Enter a number between 1 and 99: ";
  cin >> guess;

  num = (rand() + time(0)) % 100;
  cout << num << endl;

  diff = abs(guess - num);

  for (int i = 1; i < 5; i++)
  {
    if (guess == num)
    {
    cout << "You win!" << endl;
    break;
    }
    else
    {
      cout << "Try again" << endl;
      cout << "You only have " << x-- << " more tries." << endl;

      while (guess != num)
      {
        if (diff >= 50)
        {
          if (guess < num)
            cout << "Your guess is very low" << endl;
          else
            cout << "Your guess is very high" << endl;
        }
        if (diff >= 30 && diff < 50)
        {
            if (guess < num)
              cout << "Your guess is low" << endl;
            else
              cout << "Your guess is high" << endl;
        }
        if (diff >= 15 && diff < 30)
        {
          if (guess < num)
            cout << "Your guess is moderately low" << endl;
          else
            cout << "Your guess is moderately high" << endl;
        }
        if (diff > 0 && diff < 15)
        {
          if (guess < num)
            cout << "Your guess is somewhat low" << endl;
          else
            cout << "Your guess is somewhat high" << endl;
        }
        cout << "Enter a number:";
        cin >> guess;
        diff = abs(guess - num);
        if (x == 0)
        cout << "You lose!" << endl;
      }
    }
  }

  return 0;
}
