#include <iostream>
using namespace std;
int main() {
  string input;
  getline(cin, input);
  double a = 0;
  double not_a = 0;
  for(int i = 0; i < input.length(); ++i){
    if(input[i] == 'a'){
      ++a;
    }
    else{
      ++not_a;
    }
  }
  if(a/(a+not_a) > 0.50){
    cout << input.length();
  }
  else{
    while(a/(a+not_a) <= 0.50){
      --not_a;
    }
    cout << a+not_a;
  }
}