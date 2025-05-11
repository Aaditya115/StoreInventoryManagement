/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF
OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.*/

/*
 *function: write_inventory
 *purpose: saves the current inventory list to the file in specified format
 */

#include "lab4.h"

void write_inventory(const char* filename, Node* head) {
  FILE *file = fopen(filename, "w"); //open the file to write in

  fprintf(file, "%d\t%d\n", Day(2, 25, 2025), 2025); // Dummy date
  for (Node *current = head; current != NULL; current = current->next) { //loop throught and write through each grocery item to file
    fprintf(file, "%s\t%s\t%d\t%.2f\t%.2f\t%d\t%d\n",
	    current->grocery_item.item,
            current->grocery_item.department,
            current->grocery_item.stocknumber,
            current->grocery_item.pricing.wholesalePrice,
            current->grocery_item.pricing.retailPrice,
            current->grocery_item.pricing.wholesaleQuantity,
            current->grocery_item.pricing.retailQuantity);
  }
  fclose(file); // close the file
}
