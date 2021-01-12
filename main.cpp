#include <iostream>
#include "quadratic.hpp"

int main(){
  double *p;
  p = quad(1,3,2);
  std::cout << *(p+0) << "," << *(p+1);

  return 0;
}
