#include <stdio.h>

int main() {
  long int n;
  int k;
  scanf("%li%i", &n, &k);
  int i = 0;
  while (i < k){
    if(n%10 == 0){
      n /= 10;
    }
    else{
      n -= 1;
    }
    ++i;
  }
  printf("%li", n);
}