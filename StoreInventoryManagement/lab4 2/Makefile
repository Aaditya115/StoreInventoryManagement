# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.

# Compiler
gcc_opt = -std=c99 -pedantic -Wimplicit-function-declaration -Wreturn-type -Wformat -g -c

# Target 'all' means all targets currently defined in this file
all: lab4.zip lab4

# This target is the .zip file that must be submitted
lab4.zip: lab4main.c Makefile lab4.h add_new.c avg_profitSale.c current_investment.c date_difference.c day_in_year.c delete_item.c delete_node.c free_list.c insert_node.c items_department.c items_in_stock.c items_out.c leap_year.c read_inventory.c save_exit.c total_profit.c total_revenue.c total_sales.c total_wholesale.c write_inventory.c
	zip lab4.zip lab4main.c Makefile lab4.h add_new.c avg_profitSale.c current_investment.c date_difference.c day_in_year.c delete_item.c delete_node.c free_list.c insert_node.c items_department.c items_in_stock.c items_out.c leap_year.c read_inventory.c save_exit.c total_profit.c total_revenue.c total_sales.c total_wholesale.c write_inventory.c

# This target is the main
lab4: lab4main.o add_new.o avg_profitSale.o current_investment.o date_difference.o day_in_year.o delete_item.o delete_node.o free_list.o insert_node.o items_department.o items_in_stock.o items_out.o leap_year.o read_inventory.o save_exit.o total_profit.o total_revenue.o total_sales.o total_wholesale.o write_inventory.o
	gcc lab4main.o add_new.o  avg_profitSale.o current_investment.o date_difference.o day_in_year.o delete_item.o delete_node.o free_list.o insert_node.o items_department.o items_in_stock.o items_out.o leap_year.o read_inventory.o save_exit.o total_profit.o total_revenue.o total_sales.o total_wholesale.o write_inventory.o -o lab4

# Dependency for lab4main
lab4main.o: lab4main.c lab4.h
	gcc $(gcc_opt) lab4main.c

# Dependency for add_new
add_new.o: add_new.c lab4.h
	gcc $(gcc_opt) add_new.c

# Dependency for avg_profitSale
avg_profitSale.o: avg_profitSale.c lab4.h
	gcc $(gcc_opt) avg_profitSale.c

# Dependency for current_investment
current_investment.o: current_investment.c lab4.h
	gcc $(gcc_opt) current_investment.c

# Dependency for date_difference
date_difference.o: date_difference.c lab4.h
	gcc $(gcc_opt) date_difference.c

# Dependency for day_in_year
day_in_year.o: day_in_year.c lab4.h
	gcc $(gcc_opt) day_in_year.c

# Dependency for delete_item
delete_item.o: delete_item.c lab4.h
	gcc $(gcc_opt) delete_item.c

# Dependency for delete_node
delete_node.o: delete_node.c lab4.h
	gcc $(gcc_opt) delete_node.c

# Dependency for free_list
free_list.o: free_list.c lab4.h
	gcc $(gcc_opt) free_list.c

# Dependency for insert_node
insert_node.o: insert_node.c lab4.h
	gcc $(gcc_opt) insert_node.c

# Dependency for items_department
items_department.o: items_department.c lab4.h
	gcc $(gcc_opt) items_department.c

# Dependency for items_in_stock
items_in_stock.o: items_in_stock.c lab4.h
	gcc $(gcc_opt) items_in_stock.c

# Dependency for items_out
items_out.o: items_out.c lab4.h
	gcc $(gcc_opt) items_out.c

# Dependency for leap_year
leap_year.o: leap_year.c lab4.h
	gcc $(gcc_opt) leap_year.c

# Dependency for read_inventory
read_inventory.o: read_inventory.c lab4.h
	gcc $(gcc_opt) read_inventory.c

# Dependency for save_exit
save_exit.o: save_exit.c lab4.h
	gcc $(gcc_opt) save_exit.c

# Dependency for total_profit
total_profit.o: total_profit.c lab4.h
	gcc $(gcc_opt) total_profit.c

# Dependency for total_revenue
total_revenue.o: total_revenue.c lab4.h
	gcc $(gcc_opt) total_revenue.c

# Dependency for total_sales
total_sales.o: total_sales.c lab4.h
	gcc $(gcc_opt) total_sales.c

# Dependency for total_wholesale
total_wholesale.o: total_wholesale.c lab4.h
	gcc $(gcc_opt) total_wholesale.c

# Dependency for write_inventory
write_inventory.o: write_inventory.c lab4.h
	gcc $(gcc_opt) write_inventory.c

# This target deletes all files produced from the Makefile
clean:
	rm -rf *.o lab4 lab4.zip
