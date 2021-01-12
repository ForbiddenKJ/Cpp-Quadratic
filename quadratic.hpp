#pragma once
#include <cmath>

double * quad(double a, double b, double c){
  double d = pow(b,2)-4*a*c;

  static double result[2];

  if (d < 0){
    throw 20;
  }

  else if (d == 0){
    result[0] = (-b+sqrt(d))/(2*a);
  }

  else {
    //static double result[2] = {(-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a)};
    result[0] = (-b+sqrt(d))/(2*a);
    result[1] = (-b-sqrt(d))/(2*a);
  }

  return result;
}
