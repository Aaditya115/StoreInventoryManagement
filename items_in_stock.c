/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF
OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.*/

/*
 *function: items_in_stock
 *purpose: prints the items that are currently in stock.
 *
 */

#include "lab4.h"

void items_in_stock(Node* h) {
  printf("Grocery items in Stock:\n "); //prints out the grocery items in stock

  //go through the linked list
  for (Node *current = h; current != NULL; current = current->next) {
    // calculate the items in stock
    int in_stock = current->grocery_item.pricing.wholesaleQuantity - current->grocery_item.pricing.retailQuantity;
    
    //checking to make sure the printed items are in stock aka greater than 0
    if (in_stock > 0) {
      printf("%d\t%s\t%s\n", in_stock, current->grocery_item.department, current->grocery_item.item);
    }
  }
}
