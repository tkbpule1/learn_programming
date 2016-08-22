// Arrays of Class Objects and Constructors

#include <iostream>
using namespace std;

class clockType
{
public:
  void setTime(int, int, int);
  void printTime() const;
  clockType();
private:
  int hr;
  int min;
  int sec;
};

int main()
{
  clockType arrivalTime[10];
  arrivalTime[1].setTime(8, 5, 10);
  for (int i = 0; i < 10; i++)
  {
    arrivalTime[i].printTime();
    cout << endl;    
  }
  return 0;
}

void clockType::setTime(int hours, int minutes, int seconds)
{
  hr = hours;
  min = minutes;
  sec = seconds;
}
void clockType::printTime() const
{
  cout << hr << ":" << min << ":" << sec << endl;
}
clockType::clockType()
{
  hr = 0;
  min = 0;
  sec = 0;
}
