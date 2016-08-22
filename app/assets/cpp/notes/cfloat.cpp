#include <iostream>
#include <cfloat>


using namespace std;

int main()
{
  cout << "Approximate number of significant digits in a float value: "
       << FLT_DIG << endl;// 6
  cout << "Maximum positive float value: " << FLT_MAX << endl;// 3.40282e+38
  cout << "Minimum positive float value: " << FLT_MIN << endl;// 1.17549e-38
  cout << "Approximate number of significant digits in a double value: "
       << DBL_DIG << endl;// 15
  cout << "Maximum positive double value: " << DBL_MAX << endl;// 1.79769e+308
  cout << "Minimum positive double value: " << DBL_MIN << endl;// 2.22507e-308
  cout << "Approximate number of significant digits in a long double value: "
       << LDBL_DIG << endl;// 18
  cout << "Maximum positive long double value: " << LDBL_MAX << endl;
  // 1.18973e+4932
  cout << "Minimum positive long double value: " << LDBL_MIN << endl;
  // 3.3621e-4932
  return 0;
}
