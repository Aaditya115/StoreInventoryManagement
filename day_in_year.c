/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF
OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.*/

/*
 *function: Day
 *Purpose: calculates the day of the year and takes into account whether it is a leap year and formats it with the month day and year format
 *Returns: returns the day of year in the proper format
 */

#include "lab4.h"

int Day(int month, int day, int year) {
  int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //create an array with the days in each month
  if (leap_year(year)) {
    days_in_month[1] = 29; // if leap year february will have 29 days
  }
  int day_of_year = 0;
  for (int i = 0; i < month - 1; i++) {
    day_of_year += days_in_month[i]; // adding for the number of months the number of days in each month
  }
  return day_of_year + day; //returning the days
}
