/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF
OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.*/

/*
 *function: read_inventory
 *purpose: reads in the inventory creates a linked list of grocery items and returns the head of the list.
 */

#include "lab4.h"

Node* read_inventory(const char* filename, int* days_old) {
  FILE *file = fopen(filename, "r"); //open file for reading
  if (file == NULL) {
    printf("Error: Could not open file %s\n", filename); //returning null if file cannot be opened
    return NULL;
  }
  int file_day, file_year;
  fscanf(file, "%d\t%d\n", &file_day, &file_year); //read data and store in a file
  

  *days_old = date_difference(Day(2, 25, 2025), file_day, 2025, file_year); //date difference based on the day and year 

  Node *head = NULL;
  while(!feof(file)) {
    //reading in the grocery lists and storing in a new node
    Node *new_node = (Node*)malloc(sizeof(Node));
    fscanf(file, "%[^\t]\t%[^\t]\t%d\t%f\t%f\t%d\t%d\n",
	   new_node->grocery_item.item,
           new_node->grocery_item.department,
           &new_node->grocery_item.stocknumber,
           &new_node->grocery_item.pricing.wholesalePrice,
           &new_node->grocery_item.pricing.retailPrice,
           &new_node->grocery_item.pricing.wholesaleQuantity,
           &new_node->grocery_item.pricing.retailQuantity);
    new_node -> next = NULL;
    
    //inserting list in descending order based on stock number
    head = insert_node(head, new_node);
  }
  fclose(file);
  // close file and return head of the list
  return head;
  
}
