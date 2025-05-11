/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF
OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.*/

/*
 * function:items_department
 * purpose: prints all grocery items that belong in the department the user specifies
 */

#include "lab4.h"

void items_department(Node* h) {
  char department[30]; //declaring the string to store the users deperatment
  
  printf("Enter department name: ");
  scanf(" %29[^\n]", department);
  printf("Grocery Items in %s:\n", department); //reading in the department name
  
  for (Node *current = h; current != NULL; current = current->next) { //go through the department list names
    
    if (strstr(current->grocery_item.department, department) != NULL) {
      int in_stock = current->grocery_item.pricing.wholesaleQuantity - current->grocery_item.pricing.retailQuantity;
      printf("%d\t%s\t%s\n", in_stock, current->grocery_item.department, current->grocery_item.item); //printing item details.
    }
  }
}
