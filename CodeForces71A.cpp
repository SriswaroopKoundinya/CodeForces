#include <iostream>
#include <string>
using namespace std;
int main() {
  int NUM;
  cin >> NUM;
  for (int i = 0; i < NUM+1; ++i){
    string INPUT;
    getline(cin, INPUT);
    int LENGTH = INPUT.length();
    if (LENGTH <= 10){
      cout << INPUT << endl;
    }
    else{
      cout << INPUT[0] << std::to_string(LENGTH - 2) << INPUT[LENGTH-1] << endl;
    }
  }
}