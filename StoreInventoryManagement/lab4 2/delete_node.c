/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF
OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.*/

#include "lab4.h"

Node* delete_node(Node* h, int stock_number) {
  if (h->grocery_item.stocknumber == stock_number) { //checking the first node to delete
    Node *temp = h->next;
    free(h); //free up h
    return temp; //return the new head of list
  }
  Node *current = h; 
  while (current->next != NULL && current->next->grocery_item.stocknumber != stock_number) { //going through the list to find what to delete
    current = current->next;
  }
  if (current->next != NULL) { //if found delete the node
    Node *temp = current->next;
    current->next = temp->next;
    free(temp);
  }
  return h; //return the head once done
}
