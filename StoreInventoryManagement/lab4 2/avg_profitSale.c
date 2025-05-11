/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF
OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.*/


/*
 *function: avg_profitSale
 *Purpose/Job: this code produced the average profit sale using the revenue wholesale and investment and total sales and calcualtes it and prints it out
 */

#include "lab4.h"

void avg_profitSale(Node *h) {
  //initializing values that we will need
  float revenue = 0;
  float wholesale = 0;
  float investment = 0;
  int total_sales = 0;
  for (Node *current = h; current != NULL; current =  current->next) {
    revenue += current->grocery_item.pricing.retailPrice * current->grocery_item.pricing.retailQuantity; //calculate revenue
    wholesale += current->grocery_item.pricing.wholesalePrice * current->grocery_item.pricing.wholesaleQuantity; //calculate wholesale cost
    investment += current->grocery_item.pricing.wholesalePrice * (current->grocery_item.pricing.wholesaleQuantity - current->grocery_item.pricing.retailQuantity); //calculating investments
    total_sales += current->grocery_item.pricing.retailQuantity; //total sales
  }
  printf("Average Profit per Sale: $%.2f\n", (revenue - (wholesale + investment)) / total_sales); //calculation based on the description
}
