#pragma once
#include <string>
#include <iostream>
/*
imp konstru
Implementera konstruktor (sätt first till nullptr)
Implementera insert (sätt in ett första värde)
Implementera print (se till så att första värdet skrivs ut)
*/

class List
{
struct Node;

  
public:
List();
//~List();  
bool is_empty() const;
void insert(int value);
private:
struct Node
{
  int value{};
  Node * next{};
   
};
Node * first{nullptr};
};


  /*
 
List(List const& other); //List l{l2};
List(List && other); //List l{}


  
List & operator = (List const& other);
List & operator = (List && other);


 void remove(int index);
 void print() const;
 int at(int index) const;
 //int size() const;

 private:
 struct Node;
 void print_helper(Node * curr) const;


};


void List::print() const
{
print_helper(first);
//done with recursion
}

void List::print_helper(Node * curr) const
{
if(curr != nullptr)
{
std::cout << curr -> value;
print_helper(curr -> next);
}
}

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

/*
List l2;
l2.insert(1);
List l{std::move(l2)};
CHECK(print(l) == "1");
*/

