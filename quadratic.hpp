#pragma once
#include <cmath>

double * quad(double a, double b, double c){
  double d = pow(b,2)-4*a*c;

  static double result[2];

  if (d < 0){ // If d is less that 0 the results would be an imaginary number
    throw 20;
  }

  else if (d == 0){ // Equation has one root
    result[0] = (-b+sqrt(d))/(2*a);
  }

  else { // Equation has two roots
    result[0] = (-b+sqrt(d))/(2*a);
    result[1] = (-b-sqrt(d))/(2*a);
  }

  return result;
}
