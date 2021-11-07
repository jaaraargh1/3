#include "list.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
//Need an empty list
List::List():first{nullptr}{}
  //want to remove our objects w/ the destructor.
List::~List(){
  Node* tmp{first};
  while (tmp != nullptr){
    Node* tmp2{tmp->next};
    delete tmp;
    tmp = tmp2;
  }
}
//move
List::List(List && other):first{nullptr}{}
//copy
List::List(List const& other):first{nullptr}{}  

bool List::is_empty() const {
  return first == NULL;
}

void List::insert(int value) {
  int size{0};
  Node* tmp = new Node();
  tmp->value = value;
  //if it is empty insert first
  if (is_empty()) {
    tmp->next = first;
    first = tmp;
  }
  // in the middle
  else  {
    struct Node* tmp2 = new Node();
    
    if(first->value > value) {
      tmp2 = first;  
      first = tmp;
      first->next =tmp2;
    }
    //insert at end if we reach nullptr
    else {
      tmp2 = first;
      while(tmp2->next != nullptr && tmp2->next->value < tmp->value) {
	tmp2 = tmp2->next;
      }
      tmp->next = tmp2->next;
      tmp2->next = tmp;
    }
  }
    
}

void List::print() const
{
  Node * curr{first};
 
  print_helper(curr);

  //  while(curr != nullptr)
  //    {
  //      std::cout << curr -> value << endl;
  //      curr = curr -> next;
  //    }
}
//used via the print function
void List::print_helper(Node * curr) const
{
  if(curr != nullptr)
    {
      std::cout << curr -> value << endl;
      print_helper(curr -> next);
    }
}

int  List::getSize(){
  
  int size{0}; 
  Node* tmp = first; 
  while (tmp != nullptr)
    {
      size++;
      tmp = tmp->next;
    }
  return size;
}

int List::indexAt(int index) const {
  Node* tmp = first;
  int currentPos = 0;
  
  while (tmp->next != nullptr){
    if (currentPos == index){

      break;}
    currentPos++;
    tmp=tmp->next;
  }
    
  
  
  return tmp->value;   
}

void List::remove(int index){
  Node* tmp = first;
  Node* previous = tmp;
  int tmpIndex{0};
  
  if (first->next == nullptr){  
  first = tmp->next;
  delete tmp;
  return;
  }
  
  while(tmp->next != nullptr){
    
    if (tmpIndex == index){
      previous->next = tmp->next;
      delete tmp;
      break;
    } 
    
    if(tmp->next->next == nullptr){
    delete tmp->next->next;
    tmp->next=nullptr;
    break;
    }
    previous = tmp;
    tmp = tmp->next;
    tmpIndex++;
    
  }
}

List & List::operator = (List const& other){

  
  Node **p = &first;

  for (Node *tmp = other.first; tmp; tmp = tmp->next)
    {
      Node* t = new Node;
      t->value = tmp->value;
      t->next = NULL;

      *p = t;
      p = &(t->next);

     
    }
  return * this;
}
//&& Is needed to for the move constructor which
//allows us to move non-
List & List::operator = (List && other){

  if (&other != this)
    {
        List L2(other);
	Node * tmp = other.first;
        std::swap(L2.first, other.first);
    }
    return *this;

}


