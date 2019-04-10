#ifndef __NUM_METHODS_H
#define __NUM_METHODS_H

typedef double (*fx)(double);

double TrapezodialRule(fx f, double start, double end, double step);

double Simpson_s_1_3rd_Rule(fx f, double start, double end, double step);

double Simpson_s_3_8th_Rule(fx f, double start, double end, double step);

#endif
