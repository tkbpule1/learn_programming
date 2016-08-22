#include <iostream>
using namespace std;

void test(int first, int& second);

int main()
{
  int num;
  num = 5;

  test(24, num);
  cout << num << endl;

  test(num, num);
  cout << num << endl;

  test(num * num, num);
  cout << num << endl;

  test(num + num, num);
  cout << num << endl;

  return 0;
}

void test(int first, int& second)
{
  int third;

  cout << "first: " << first << ", second: " << second << endl;

  third = first + second * second + 2;
  cout << "third: " << third << endl;
  first = second - first;
  cout << "first: " << first << endl;
  second = 2 * second;
  cout << "second: " << second << endl;
}
