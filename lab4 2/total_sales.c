/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF
OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.*/

/*
 *function: total_sales 
 *purpose: prints the calculated total sales based on the retailquantity
 */

#include "lab4.h"

void total_sales(Node* h) {
  
  int t = 0; // creating the int for the total sales
  
  for (Node *current = h; current != NULL; current = current->next) { //checking the head of list
    t += current->grocery_item.pricing.retailQuantity; //calculating total sales based off of lab4 description of it
  }
  
  printf("Total Sales: %d\n", t); //printing the total sales
}
