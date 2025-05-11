/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF
OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.*/

/*
 *function: save_exit
 *purpose:  saves the current grocery inventory to output file and 
 *frees allocated memory and terminates the program
 */


#include "lab4.h"

void save_exit(Node* h, const char* filename) {
  write_inventory(filename, h); //write the inventory into output file
  free_list(h); //frees the memory
  printf("Inventory saved to %s\n", filename); //confirming where the output file is saved
  exit(0);
}

