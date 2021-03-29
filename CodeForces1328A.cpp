#include <iostream>
using namespace std;
int main() {
  int t;
  cin >> t;
  int ARRAY[20000];
  for (int i = 0; i < (2*t); i += 2){
    cin >> ARRAY[i];
    cin >> ARRAY[i+1];
  }
  for(int j = 0; j < (2*t); j += 2){
    int MOD = ARRAY[j] % ARRAY[j+1];
    if (MOD != 0){
      cout << ARRAY[j+1] - MOD << endl;
    }
    else{
      cout << 0 << endl;
    }
  }
}