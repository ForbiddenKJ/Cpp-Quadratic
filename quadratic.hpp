#pragma once
#include <cmath>

class solver{
public:
  double * quadraticRoot(double a, double b, double c){
    double d = pow(b,2)-4*a*c;

    static double result[2];

    // If d is less that 0 the results would be an imaginary number

    if (d < 0){
      throw 20;
    }

    // Equation has one root

    else if (d == 0){
      result[0] = (-b+sqrt(d))/(2*a);
    }

    // Equation has two roots

    else {
      result[0] = (-b+sqrt(d))/(2*a);
      result[1] = (-b-sqrt(d))/(2*a);
    }

    return result;
  }

  double * quadraticNthTerm(double * sequence){

    // Find Quadratic

    double firstDiff1 = sequence[1] - sequence[0];
    double firstDiff2 = sequence[2] - sequence[1];
    double secondDiff = firstDiff2 - firstDiff1;
    double a = secondDiff/2;
    double aSequence[4];
    double linearSequence[4];

    for (int i = 1; i < 6; i++){
      aSequence[i-1] = (a*(i*i));
    }

    for (int i = 0; i < 5; i++){
      linearSequence[i] = sequence[i] - aSequence[i];
    }

    // Find Linear

    double b = linearSequence[1] - linearSequence[0];
    double c = linearSequence[0] - b;

    // Return Results

    static double result[3] = {a, b, c};

    return result;
  }
};
