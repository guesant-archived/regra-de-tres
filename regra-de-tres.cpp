#include <iostream>
// #include <string>

using namespace std;

float calcular(float val1, float val2, float val3) {
	return val2 * val3 / val1;
}

int main() {
  string grandeza1;
  string gradeza2;

  // cout << "Nome da primeira unidade: ";
  cout << "Grandeza1: ";
  cin >> grandeza1;

  cout << "Grandeza2: ";
  cin >> gradeza2;

  float val1;
  float val2;
  float val3;

  cout << endl << grandeza1 << "1: ";
  cin >> val1;

  cout << gradeza2 << "1: ";
  cin >> val2;

  cout << endl << grandeza1 << "2: ";
  cin >> val3;

  float val4 = calcular(val1, val2, val3);

  cout << grandeza2 << "2: " << val4 << endl;
  return 0;
}
