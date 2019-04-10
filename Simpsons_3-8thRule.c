#include <stdio.h>
#include <stdlib.h>

#define SQR(x) ((x) * (x))

typedef float (*fn)(float);

float fx(float x) {

  return 1/(1+x);
}

float Simpson_3_8(fn fx, float ll, float ul, float h) {

  int i  = 0;
  float inc = ll;
  int n = (int)((ul - ll)/h);
  float * y = malloc( n * sizeof(float));

  printf("\nx\t\ty" );
  while(inc <= ul) {
    y[i] = fx(inc);
    inc += h;
    printf("\n%f\t%f", inc, y[i]);
    i++;
  }
  printf("\n\n" );

  float sum = y[0] + y[n];

  for(int i = 1; i < n; i++) {
    if(!(i % 3)) {
      sum += (2 * y[i]);
    }
    else {
      sum += (3 * y[i]);
    }
  }
  sum *= (3 * h / 8);
  return sum;
}

int main(int argc, char const *argv[]) {
  int n, sizeReq, i = 0;
  float h, ll, ul, ans;

  printf("Enter value of h:\t" );
  scanf("%f", &h);

  printf("Enter lower limit:\t" );
  scanf("%f", &ll);

  printf("Enter upper limit: \t" );
  scanf("%f", &ul);

  ans = Simpson_3_8(&fx, ll, ul, h);

  printf("By Simpson's 3/8th Rule:\n");
  printf("\n I = %f\n", ans);

  return 0;
}
