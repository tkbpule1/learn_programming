#include <iostream>
#include <cmath>

int main()
{
  int counter;

  for (counter = 1; counter <= 100; counter++)
  {
    if (pow(floor(sqrt(counter + 0.0)), 2) == counter)
    {
      std::cout << "counter: " << counter << std::endl;
    }
  }
  std::cout << std::endl;
}
