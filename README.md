This project is a command-line inventory management system written in C, developed for a Systems Programming course (CSE 2421) at The Ohio State University. The program simulates backend inventory operations for a grocery store and focuses heavily on low-level programming concepts and data structure design.

The application reads inventory data from a file, parses and stores it in a dynamically allocated singly linked list sorted in descending order by stock number. It provides a menu-driven interface that allows the user to perform operations such as:

- Calculating total revenue, wholesale costs, inventory investment, and profit
- Printing in-stock and out-of-stock items
- Filtering inventory by department
- Adding new items or deleting existing ones
- Writing the updated inventory to an output file

Users launch the program with command-line arguments specifying the date and file paths. The date is processed to determine the age of the input data in days, and the user can choose to proceed or exit based on that.
