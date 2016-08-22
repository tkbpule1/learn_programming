#include <iostream>
#include <string>

using namespace std;

void getData(char& s);

int main()
{
  char s;

  getData(s);

  return 0;
}

void getData(char& status)
{
  bool stat = false;

  cout << "Enter your status: ";
  cin >> status;

while (stat == false)
{
  if (status == 's' || status == 'S')
  {
    stat = true;
    cout << "single" << endl;
  }
  else if (status == 'm' || status == 'M')
  {
    stat = true;
    cout << "married" << endl;
  }
  else
  {
    cout << "invalid" << endl;
    cout << "Enter status: ";
    cin >> status;
  }

}


}
