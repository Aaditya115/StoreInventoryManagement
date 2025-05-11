/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF
OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.*/

/*
 *function: items_out
 *purpose: prints the items that are out of stock 
 */
#include "lab4.h"

void items_out(Node* h) {
  printf("Grocery Items Out of Stock:\n");
  //going through the list
  for (Node* current = h; current != NULL; current = current->next) {
    
    //checking for the items that are in stock again and calculating that
    int in_stock = current->grocery_item.pricing.wholesaleQuantity - current->grocery_item.pricing.retailQuantity;

    // out of stock would be 0 so it would be any in_stock calculation at 0 and printing those out
    if (in_stock == 0) {
      printf("%d\t%s\t%s\n", current->grocery_item.stocknumber, current->grocery_item.department, current->grocery_item.item);
    }
  }
}

