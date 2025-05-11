/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF
OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.*/

/*
 *function: date_difference
 *Purpose: computes the date difference based on two days and years and gives it in the day of the year format
 *returns: returns the days that was the difference between the two days presented.
 */

#include "lab4.h"

int date_difference(int day1, int year1, int day2, int year2) {
    int days = 0;
    if (year1 == year2) {
        return day1 - day2;
    }
    // If year1 is after year2
    if (year1 > year2) {
        // Add remaining days in year2 from day2 to end of year
        if (leap_year(year2)) {
            days += 366 - day2;
        } else {
            days += 365 - day2;
        }
        // Add days for full years in between
        for (int y = year2 + 1; y < year1; y++) {
            if (leap_year(y)) {
                days += 366;
            } else {
                days += 365;
            }
        }
        // Add days passed in the final year
        days += day1;
    } 
    // If year1 is before year2
    else {
        return -date_difference(day2, year2, day1, year1);
    }
    return days;
}
