// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
#include <cmath>


double pown(double value, uint16_t n) {
  double x=0;
  x=pow(value, n);
  return x;
}

uint64_t fact(uint16_t n) {
int x = 0;
x = tgamma(n+1);
return x;
}

double calcItem(double x, uint16_t n) {
 return (pow(x, n) / fact(n));
}

double expn(double x, uint16_t count) {
 double c = 0;
    for (uint64_t i = 0; i <= count; i++) {
        c += (pow(x, i) / fact(i));
    }
    return c;
}

double sinn(double x, uint16_t count) {
double y = 0;
    double e = 0;
    for (uint64_t i = 1; i <= count; i++) {
        e += 1;
        y += pown(-1, e - 1) * ((pown(x, 2 * i - 1) / fact(2 * i - 1)));
    }
    return y;
}

double cosn(double x, uint16_t count) {
 double result = 0;
    double t = 0;
    for (uint64_t i = 1; i <= count; i++) {
        t += 1;
        result += pown(-1, t - 1) * ((pown(x, 2 * i - 2) / fact(2 * i - 2)));
    }
    return result;
}
