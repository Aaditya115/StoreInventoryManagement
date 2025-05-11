/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF
OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.*/

/*
 *function: total_profit
 *purpose: calculates and displays the total profits for the grocery store
 */


#include "lab4.h"

void total_profit(Node* h) {
  float revenue = 0;
  float wholesale = 0;
  float investment = 0; //creating the variables needed to get total profit

  for (Node *current = h; current != NULL; current = current->next) {
    revenue += current->grocery_item.pricing.retailPrice * current->grocery_item.pricing.retailQuantity; //calculating revenue
    wholesale += current->grocery_item.pricing.wholesalePrice * current->grocery_item.pricing.wholesaleQuantity;//creating wholesale cost
    investment += current->grocery_item.pricing.wholesalePrice * (current->grocery_item.pricing.wholesaleQuantity - current->grocery_item.pricing.retailQuantity); //creating investment
  }
  printf("Total Profit: $%.2f\n", revenue - (wholesale + investment)); //printing out the calculation based on lab4 description

}
