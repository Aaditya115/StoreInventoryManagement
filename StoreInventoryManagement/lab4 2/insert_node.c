/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF
OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.*/

/*
 *Function: insert_node
 *Purpose: Inserts a new node into the linked list in sorted order based on stocknumber
 *return: the new head of the function
 *
 */

#include "lab4.h"

Node* insert_node(Node* head, Node* new_node) { // insert first if the list is empty or new node is smaller
  if (head == NULL || head->grocery_item.stocknumber < new_node->grocery_item.stocknumber) {
    new_node->next = head;
    return new_node;
  }
  Node *current = head; //descending order and going through the list
  while (current->next != NULL && current->next->grocery_item.stocknumber > new_node->grocery_item.stocknumber) {
    current = current->next;
  }
  new_node->next = current->next; //inserting the node in the correct place
  current->next = new_node;
  return head;
}
