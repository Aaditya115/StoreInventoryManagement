/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF
OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.*/

#ifndef LAB4_H
#define LAB4_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//creating the structure that has the cost that will be used for future use
struct Cost {
  float wholesalePrice;
  float retailPrice;
  int wholesaleQuantity;
  int retailQuantity; 
};

//data data structure created
struct Data {
  char item[50];
  char department[30];
  int stocknumber;
  struct Cost pricing;
};


typedef struct Node {
  struct Data grocery_item;
  struct Node *next;
} Node;

int Day(int month, int day, int year);
int leap_year(int year);
int date_difference(int day1, int day2, int year1, int year2);

// File Utilities
Node* read_inventory(const char* filename, int* days_old);
void write_inventory(const char* filename, Node* head);

// Linked List Utilities
Node* insert_node(Node* h, Node* new_node);
Node* delete_node(Node* h, int stock_number);
void free_list(Node* h);

// User Options
void total_revenue(Node* h);
void total_wholesale(Node* h);
void current_investment(Node* h);
void total_profit(Node* h);
void total_sales(Node* h);
void avg_profitSale(Node* h);
void items_in_stock(Node* h);
void items_out(Node* h);
void items_department(Node* h);

//Add and Delete and Save options
void add_new(Node** h);
void delete_item(Node** h);
void save_exit(Node* h, const char* filename);

#endif
