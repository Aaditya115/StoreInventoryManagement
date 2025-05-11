/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF
OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.*/

/*
 *function: items_wholesale
 *purpose: prints the wholesale cost based ont he price of wholesale and the quantity
 */

#include "lab4.h"

void total_wholesale(Node* h) {
  float t = 0; // total

  for (Node *current = h; current != NULL; current = current->next) { //multiplying price with quantity so as long it's not null
    t += current->grocery_item.pricing.wholesalePrice * current->grocery_item.pricing.wholesaleQuantity; 
  }

  printf("Total Wholesale Cost: $%.2f\n", t); //printing the wholesale
}

