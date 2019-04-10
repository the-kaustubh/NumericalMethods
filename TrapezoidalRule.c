#include <stdlib.h>
#include <stdio.h>
#include "NumericalMethods.h"

double TrapezodialRule(fx f, double start, double end, double step) {
  double result = 0.5 * (f(start) + f(end));
  double i;
  for(i = start + step; i <= (end-step); i += step) {
    result += f(i);
  }
  printf("i = %lf\n", i );
  return result;
}
