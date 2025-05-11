/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF
OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.*/

/*
 *function: total_revenue
 *purpose: calculating total revenue based on the retail price and quantity product
 */


#include "lab4.h"

void total_revenue(Node* h) {
  float t = 0; //total revenue
  
  for (Node *current = h; current != NULL; current = current->next) {
    t += current->grocery_item.pricing.retailPrice * current->grocery_item.pricing.retailQuantity; // calculating total revenue based on lab4 description
  }
  
  printf("Total Revenue: $%.2f\n", t); //total revenue printed out
}
