#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int ANSWER = 0;
  int ARRAY[n];
  for (int i = 0; i < n; ++i){
    int a,b;
    cin >> a;
    cin >> b;
    ANSWER = ANSWER - a + b;
    ARRAY[i] = ANSWER;
  }
  int answer = 0;
  for(int j = 0; j < n; ++j){
    if (ARRAY[j] > answer){
      answer = ARRAY[j];
    }
  }
  cout << answer;
}