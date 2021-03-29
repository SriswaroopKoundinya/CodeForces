#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int NUM;
  cin >> NUM;
  int RESULT = 0;
  for (int i = 0; i < NUM; ++i){
    int ARRAY[3];
    for (int j = 0; j < 3; ++j){
      int INPUT;
      cin >> INPUT;
      ARRAY[j] = INPUT;
    }
    sort(ARRAY, ARRAY+3);
    if (ARRAY[1] == 1 && ARRAY[2] == 1){
      ++RESULT;
    }
  }
  cout << RESULT << endl;
}