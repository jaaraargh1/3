#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "list.h"
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

TEST_CASE("IS EMPTY"){
  List l{};
  CHECK(l.is_empty()==true);

}  
// Goals
/*
# Created a declaration file related to list-lab
# Introduce the problem in an illustrative way.
# Discuss questions related to the declarations

- What should the class representing the entire list look like? what responsibility does it have?
- What does the Node element inside of the List look like? What responsibility does it have?
- Which public member functions should exist inside of the List class?
- Which public member functions should exist inside of the Node class?
- Which private members should exist in respective class/struct?
- How should the List class be tested to cover as many causes of errors as possible?

*/


//List l2;
//l2.insert(1);
//List l{std::move(l2)};
//CHECK(print(l) == "1");
