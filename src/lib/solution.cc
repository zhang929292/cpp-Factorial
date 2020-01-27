#include "solution.h"
#include <iostream>

int Solution::Factorial(int n) { 
  int i = 1;
  if(n <= 0){
    return -1;
  }else if(n == 1){
    return 1;
  }else
    for(int j = 1; j <= n; j++){
      i *= j;
    }
    return i;
}

int Solution::FactorialRecursive(int m) { 
  if(m <= 0){
    return -1;
  }else if(m == 1){
    return 1;
  }else
      m = m *= FactorialRecursive(m-1);
    return m;
}

