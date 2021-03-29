#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
  int ARRAY[2];
  for (int i = 0; i < 5; ++i){
    for (int j = 0 ; j < 5; ++j){
      int INPUT;
      cin >> INPUT;
      if (INPUT == 1){\
        int k = i+1;
        int l = j+1;
        ARRAY[0] = k;
        ARRAY[1] = l;
      }
    }
  }
  int ADDEND1 = abs(3-ARRAY[0]);
  int ADDEND2 = abs(3-ARRAY[1]);
  cout << ADDEND1+ADDEND2 << endl;
}