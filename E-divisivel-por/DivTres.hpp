#ifndef  DIVTRES
#define  DIVTRES

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

const int totalNums = 6;

class DivTres
{
  public:
    DivTres();
    void getNumbers();
    void printResults();

  private:
    void numDivTres(int num[totalNums]);  
    int numbers[totalNums];               
    char found[totalNums+1];              
                                          

}; 

#endif 