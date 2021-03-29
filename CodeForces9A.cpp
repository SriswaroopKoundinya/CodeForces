#include <iostream>
using namespace std;
int main() {
  int INPUT[2];
  for (int i = 0; i < 2; ++i){
    cin >> INPUT[i];
  }
  int max = 0;
  for (int j = 0; j < 2; ++j){
    if (INPUT[j] > max){
      max = INPUT[j];
    }
  }
  int N = (6-max)+1;
  if (N == 3){
    cout << 1 << "/" << "2";
  }
  else if (N == 4){
    cout << 2 << "/" << "3";
  }
  else if (N == 2){
    cout << 1 << "/" << "3";
  }
  else if (N == 0){
    cout << 0 << "/" << "1";
  }
  else if (N == 6){
    cout << 1 << "/" << "1";
  }
  else{
    cout << N << "/" << "6";
  }
}