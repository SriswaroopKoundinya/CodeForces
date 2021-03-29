#include <iostream>
using namespace std;
int main() {
  int a;
  int b;
  cin >> a;
  cin >> b;
  int count = 0;
  while(a<=b){
    a *= 3;
    b *= 2;
    count+=1;
  }
  cout << count << endl;
}