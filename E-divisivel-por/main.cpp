#include "DivTres.hpp"
#include <iostream>
using namespace std;
int main()
{
  DivTres  calc;

  calc.getNumbers();
  calc.printResults();

  cout << "\n\nFim." << endl;
  while(1);
  return 0;

}