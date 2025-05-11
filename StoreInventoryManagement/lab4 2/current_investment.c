/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF
OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.*/

/*
 *function: current_investment
 *Job: this block of code provides the current investments by taking the total t and checking if the head of list is not empty and then adding to the total
 *the total is calcualted with the whole sale price multiplied by the quantity  minus the retail quantity this is then printed out
 */

#include "lab4.h"

void current_investment(Node* h) {
  //total investment as a float initialized
  float t = 0;

  for (Node *current = h; current != NULL; current = current->next) {
    t += current->grocery_item.pricing.wholesalePrice * (current->grocery_item.pricing.wholesaleQuantity - current->grocery_item.pricing.retailQuantity); //calculating and adding total invstment
  }
  printf("Current Investment: $%.2f\n", t); //printing it out

}

