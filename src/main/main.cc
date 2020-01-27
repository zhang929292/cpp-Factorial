#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    int n = 4;
    int m = 5;
    std::cout << "The factorial of 4 is " << solution.Factorial(n) << std::endl;
    std::cout << "The factorial of 5 is " << solution.FactorialRecursive(m) << std::endl;
    


    return EXIT_SUCCESS;
}