#include <iostream>
#include <string>
using namespace std;
int main() {
  int NUM;
  cin >> NUM;
  int count = 0;
  for (int i = 0; i < NUM; ++i){
    string INPUT;
    cin.ignore();
    getline(cin, INPUT);
    if (INPUT[0] == '+' || INPUT[2] == '+'){
      ++count;
    }
    else{
      --count;
    }
  }
  cout << count << endl;
}