#include <stdio.h>

int main() {
  int INPUT;
  scanf("%d", &INPUT);
  if (INPUT%2 == 0 && INPUT != 2){
    printf("YES");
  }
  else{
    printf("NO");
  }
}