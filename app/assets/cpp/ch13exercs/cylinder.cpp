#include <iostream>
#include "cylinder.h"

using namespace std;

int main()
{
  cylinderType cyl;

  cyl.printCyl();

  cyl.setCylData(1, 1, 5, 10);

  cyl.printCyl();

  cyl.calcSurfArea();

  cyl.calcVolume();

  cyl.printCyl();


  return 0;
}
