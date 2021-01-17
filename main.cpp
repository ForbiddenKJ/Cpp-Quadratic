#include <iostream>
#include "quadratic.hpp"

int main(){

  /*
  double *p;
  solver Solver;
  p = Solver.quadraticRoot(1,6,9);
  std::cout << *(p+0) << "," << *(p+1);
  */


  double* p;
  double data[4] = {9, 13, 19, 27};
  solver Solution;
  p = Solution.quadraticNthTerm(data);
  //std::cout << *(p+0) << "," << *(p+1);
  //std::cout << *(p+0);
  for (int i = 0; i < 3; i++){
    std::cout << *(p+i) << ",";
  }

  return 0;
}
