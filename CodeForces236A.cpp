#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;
int main() {
  string INPUT;
  int MITEMS = 0;
  char ARRAY[101];
  ARRAY[0] = 'Z';
  getline(cin, INPUT);
  int LENGTH = INPUT.length();
  for (int i = 0; i < LENGTH; ++i){
    bool exists = std::find(0, MITEMS+1, INPUT[i]) != std::end(ARRAY);
    if (exists == false){
      ARRAY[MITEMS] = INPUT[i];
      ++MITEMS;
    }
  }
  if(MITEMS%2 == 0){
    cout << "CHAT WITH HER!";
  }
  else{
    cout << "IGNORE HIM!";
  }
}