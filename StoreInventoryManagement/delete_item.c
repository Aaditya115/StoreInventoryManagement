/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF
OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.*/

/*
 *Function: Delete_item
 *Purpose: Removes the item from the list based on the stock number inputed by the user
 *prints out at the end confirming it has been deleted.
 *
 */


#include "lab4.h"

void delete_item(Node** h) {
  int stockNumber; //first getting the stock number
  printf("Enter stock number to delete: "); //entering the stock number of which to delete
  scanf("%d", &stockNumber);
  
  *h = delete_node(*h, stockNumber); //delete the item
  
  printf("Item deleted successfully.\n"); //confirming with the user item has been deleted
}
