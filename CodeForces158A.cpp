#include <iostream>
using namespace std;
int main() {
  int N;
  int K;
  cin >> N;
  cin >> K;
  int ARRAY[100];
  for (int i = 0; i < N; ++i){
    cin >> ARRAY[i];
  }
  int VAL = ARRAY[K-1];
  int count = 0;
  if (VAL != 0){
    for (int j = 0; j < N; ++j){
      if (ARRAY[j] >= VAL){
        ++count; 
      }
    }
  }
  else{
    for (int k = 0; k < N; ++k){
      if (ARRAY[k] > VAL){
        ++count;
      }
    }
  }
  cout << count << endl;
}