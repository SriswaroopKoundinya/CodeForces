#include <iostream>
using namespace std;
int main() {
  int K, N, W;
  cin >> K;
  cin >> N;
  cin >> W;
  int pay = 0;
  for (int i = 0; i < W; ++i){
    pay += K*(i+1);
  }
  int ANSWER = pay-N;
  if(ANSWER <= 0){
    cout << 0 << endl;
  }
  else{
    cout << ANSWER << endl;
  }
}