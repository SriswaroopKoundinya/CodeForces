#include <iostream>
using namespace std;
int main() {
  double n;
  cin >> n;
  int ARRAY[100];
  for(int i = 0; i < n; ++i){
    cin >> ARRAY[i];
  }
  double SUM = 0;
  for(int j = 0; j < n; ++j){
    SUM += ARRAY[j];
  }
  double QUOTIENT = SUM/n;
  cout << QUOTIENT << endl;
}