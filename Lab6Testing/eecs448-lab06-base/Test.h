#ifndef Test_H
#define Test_H
#include <iostream>
#include <string>
#include <vector>
#include "LinkedListOfInts.h"

class Test{
public:
  void runTests();
  void printList(std::vector<int> myVec);
  bool testSize(std::vector<int> myVec, LinkedListOfInts ls);
};
#endif
