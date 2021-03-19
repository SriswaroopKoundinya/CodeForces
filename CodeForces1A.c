#include <stdio.h>
#include <math.h>
int main(){
  double N;
  double M;
  double A;
  scanf("%lf%lf%lf", &N, &M, &A);
  int count = 0;
  long int nCopy = N*1;
  while (nCopy != 0) {
      nCopy /= 10;     // n = n/10
      ++count;
    }
  if (count>8){
	  long long int LQ1 = ceil(N/A);
	  long long int LQ2 = ceil(M/A);
	  long long int LFINAL = LQ1*LQ2;
	  printf("%lli", LFINAL);
  }
  else{
  int Q1 = ceil(N/A);
  int Q2 = ceil(M/A);
  int FINAL = Q1*Q2;
  printf("%i", FINAL);
  }
}