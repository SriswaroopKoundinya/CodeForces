#include <iostream>
#include <string>
using namespace std;
int main() {
  string IN1, IN2;
  getline(cin, IN1);
  getline(cin, IN2);
  string REVERSE = " ";
  for (int j = 0; j < IN1.length()-1; ++j){
    REVERSE = std::string(REVERSE) + " ";
  }
  for (int i = 0; i < IN1.length(); ++i){
    REVERSE[IN1.length() - i - 1] = IN1[i];
  }
  if (REVERSE == IN2){
    cout << "YES" << endl;
  }
  else{
    cout << "NO" << endl;
  }
}