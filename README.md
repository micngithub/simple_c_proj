# simple_c_proj

Overview

This project is a simple C program designed for Jenkins build testing. It consists of a single main.c file that implements basic arithmetic functions.

Features

The main.c file contains the following functions:

sum(int a, int b): Returns the sum of two integers.

minus(int a, int b): Returns the difference between two integers.

multiple(int a, int b): Returns the product of two integers (not used in main).

The main function calls sum and minus, prints their results using printf, and does not utilize the multiple function.

Usage

This project is intended for Jenkins build testing and serves as a minimal example of a C program with basic functionality.

Compilation

To compile the project, use the following command:

:gcc main.c -o main

Execution

Run the compiled executable with:

:!./main

License

This project is licensed under the GNU General Public License v3.0. See the LICENSE file for details.
