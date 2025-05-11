/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF
OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.*/


/*
 * Name: Pavan Thota
 *Problem/Approach: The program that I was needing to make was a an inventory
 * system where it manages the business records and items and profits.
 * allows the user to get through and create the inventory and have an input file
 * and an output file to store results in. The implementation uses singly linked lists
 * and structures and pointers and makes sure no memory allocation is leftover or no leaks
 * using the valgrind software.
 *
 * 
 */



#include "lab4.h"

int main(int c, char *v[]) {

  int month;
  int day;
  int year;

  if (c != 4) {  // We need at least 2 arguments (v[1] and v[2])
    printf("correct input required try again");
    return 1; // Exit with an error code
  }
  const char *input_filename = v[2]; // Input file
  const char *output_filename = v[3]; // Output file
  if (sscanf(v[1], "%d/%d/%d", &month, &day, &year) != 3) {
    printf("Invalid date format. Please use MM/DD/YYYY.\n"); //checking if valid input is made so segmentation faults are avoided
    return 1;
  }
  int current_day = Day(month, day, year);

  int days_gone;
  Node *inventory_head = read_inventory(v[2], &days_gone); //reading in the inventory head

  printf("data in file is %d days old. would you like to continue? (y/n): ", days_gone); //showing the days gone and if the user wishes to proceed
  char answer;
  scanf(" %c", &answer);
  if (answer != 'y' && answer != 'Y') {
    free_list(inventory_head);
    return 0;
  }
  void (*options[11])(Node*) = { //pointer array for functions to allow pointing to certain functions when called
    total_revenue, total_wholesale, current_investment,
    total_profit, total_sales, avg_profitSale,
    items_in_stock, items_out, items_department,
    (void (*)(Node*))add_new,  // had to use type casting as the add_new and delete_new are pointers to pointers
    (void (*)(Node*))delete_item,
};
  while (1) {
    printf("\nOptions:\n"); //showing the options which will correspond to which options function will be executed
    printf("1. Total Revenue\n");
    printf("2. Total Wholesale Cost\n");
    printf("3. Current Investment\n");
    printf("4. Total Profit\n");
    printf("5. Total Sales\n");
    printf("6. Average Profit per Sale\n");
    printf("7. Items in Stock\n");
    printf("8. Items Out of Stock\n");
    printf("9. Items by Department\n");
    printf("10. Add New Item\n");
    printf("11. Delete Item\n");
    printf("12. Save and Exit\n");
    printf("Enter your choice: ");

    int option;
    scanf("%d", &option);
    if (option >= 1 && option <= 12) {
      if (option == 12) {
	save_exit(inventory_head, output_filename); //saving and exiting out of the program
	break;
      } else {
	options[option - 1](inventory_head);
      }
    }
  }
  free_list(inventory_head); //must free up the inventory memory and end program
  return 0;
}
