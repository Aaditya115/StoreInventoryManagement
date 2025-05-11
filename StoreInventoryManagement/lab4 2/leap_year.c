/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF
OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.*/


/*
 *function: leap_year
 *purpose: returns what is the leap year based on the defintion of leap year
 */

#include "lab4.h"

int leap_year(int year) {
  return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)); //if its divisible by 4 not including 100 and including 400 it will be true for leap year
}
