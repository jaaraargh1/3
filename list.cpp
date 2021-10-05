#include "list.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

List::List():first{nullptr}{}
bool List::is_empty() const {
    return first == NULL;
}


void List::insert(int value) {
   Node* tmp = new Node(value);
   tmp->value = value;

  if (is_empty()) {
    //  tmp->next = first;
    first = tmp;
  }

}
  
  /*
  else {
    struct Node* tmp2 = new Node();
    tmp2 = *first;
  while(tmp2->next != nullptr && tmp2->next->value < tmp->value) {
    tmp2 = tmp2->next;
  }
  tmp->next = tmp2->next;
  tmp2->next = tmp;
  }

}
  */
