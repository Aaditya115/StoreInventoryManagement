/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF
OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.*/


/*
 *funcation: add_new
 *purpose: adds new grocery item to the list and prompts the user to enter in the details
 *
 */
#include "lab4.h"

void add_new(Node** head) {
  Node *new_node = (Node*)malloc(sizeof(Node)); //allocating memory for a new node
  printf("Enter item name: ");
  scanf(" %[^\n]", new_node->grocery_item.item); // entering item names based on input
  printf("Enter department: ");
  scanf(" %[^\n]", new_node->grocery_item.department); 
  printf("Enter stock number: ");
  scanf("%d", &new_node->grocery_item.stocknumber); //stocknumber prompted
  printf("Enter wholesale price: ");
  scanf("%f", &new_node->grocery_item.pricing.wholesalePrice); //wholesale prompted
  printf("Enter retail price: ");
  scanf("%f", &new_node->grocery_item.pricing.retailPrice);
  printf("Enter wholesale quantity: ");
  scanf("%d", &new_node->grocery_item.pricing.wholesaleQuantity); // wholesale quantity
  printf("Enter retail quantity: ");
  scanf("%d", &new_node->grocery_item.pricing.retailQuantity); //retail quantity
  new_node->next = NULL;
  *head = insert_node(*head, new_node);
  printf("Item added.\n"); //printing items added
}
