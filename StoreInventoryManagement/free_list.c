/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF
OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.*/

/*
 *function: free_list
 *Purpose: frees all nodes and releasing the memory allocated for the nodes.
 *
 */


#include "lab4.h"

void free_list(Node* head) {
  while (head != NULL) {
    Node *temp = head; //save current node
    head = head->next; //Move to the next node
    free(temp); //freeing up memory
  }
}
