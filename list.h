#ifndef list_h
#define list_h
#pragma once
#include <string>
#include <iostream>

class List
{
struct Node;

  
public:
List();
~List();
List(List && other); // move constructor -- List l{}
List & operator = (List && other);

List(List const& other); // Copy constructor -- List l{l2};
List & operator = (List const& other);
  
bool is_empty() const;
void insert(int value);
void print_helper(Node * curr) const;
void print() const;
int  getSize();  
int indexAt(int index) const;
void remove(int index);
private:
struct Node
{
  int value{};
  Node * next{};
   
};
Node * first{nullptr};
};

/*





/*
void List::print() const
{
Node * curr{first};



while(curr != nullptr)
{
std::cout << curr -> value;
curr = curr -> next;
}
}
*/



#endif
