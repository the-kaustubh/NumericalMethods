#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "NumericalMethods.h"

double X_inv(double x) {
  return (1/x);
}

double DOQ(double x) {
  return 1/(1+(x));
}
int main(int argc, char const *argv[]) {
  double I = TrapezodialRule( DOQ,\
                              atof(argv[1]),\
                              atof(argv[2]),\
                              atof(argv[3]));
  printf("%lf\n", I);
  return 0;
}
