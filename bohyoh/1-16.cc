#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand(time(NULL));
  cout << "1桁の正の乱数 " << 1 + rand() % 9 << endl;
  cout << "1桁の負の乱数 " << -1 - rand() % 9 << endl;
  cout << "2桁の正の乱数 " << 10 + rand() % 90 << endl;
  return 0;
}