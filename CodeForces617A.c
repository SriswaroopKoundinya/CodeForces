#include <stdio.h>

int main() {
  int INPUT;
  scanf("%i", &INPUT);
  int count = 0;
  while (INPUT != 0){
    if(INPUT > 5){
      INPUT -= 5;
      ++count;
    }
    else{
      ++count;
      break;
    }
  }
  printf("%i", count);
}