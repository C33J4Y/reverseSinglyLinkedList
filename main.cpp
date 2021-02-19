#include <iostream>


using namespace std;
class Node{
public:
int data;
Node* next;
};

int main() {
  Node* head = new Node();
  Node* curr = head;
  Node* second = new Node();
  Node* third = new Node();
  Node* fourth = new Node();
  Node* fifth = new Node();
  Node* prev = NULL;
  Node* next ;

  head->data = 11;
  head->next = second;
  second->data= 22;
  second->next = third;
  third->data = 33;
  third->next = fourth;
  fourth->data = 44;
  fourth->next = fifth;
  fifth->data = 55;
  fifth->next = NULL;

  cout << "\n\nPrinting Linked List: \n\n";
  while(curr->next != NULL){
    
    cout << curr->data << endl;
    curr = curr->next;
  } 

  cout << curr->data << endl;



  curr = head;
  
  while(curr != NULL){
    
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
    


  }
  head = prev;

  cout << "\n\nPrinting Reversed Linked List: \n\n";
  curr = head;
 
  
  while(curr->next != NULL){
    cout << curr->data << endl;
    curr = curr->next;

  }
    cout << curr->data << endl;

  
 return 0;
}