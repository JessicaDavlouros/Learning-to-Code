#include <iostream>
using namespace std;

int main () {
  cout << "Please enter your temperature in the format. e.g. 19.6C" << endl;
  double temperature;
  char units;

  cin >> temperature >> units;
  if (units == 'C' || units == 'c') {
    cout << (temperature / 5 * 9) + 32 << 'F' << endl;
  } else if (units == 'F' || units == 'f') {
    cout << (temperature - 32) * 5 / 9 << 'C' << endl;
  } else {
    cout << "Unknown units, please specify C or F" << endl;
  }
  
  return 0;
}
