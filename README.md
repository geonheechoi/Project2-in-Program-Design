# Project2-in-Program-Design
Project 2,
Program Design Problem 1 – Stopping Panic Buying (50 points) Panic buying is the act of buying large amounts of a product in anticipation of an emergency. The most recent example is the shortage of items such as face masks, food, bottled water, milk, and toilet paper in the beginning of the COVID-19 pandemic. To avoid this problem, a local grocery store has adopted the following policy for certain items. For an item with cost C, the client will pay C dollars for the first unit purchased, 2×C dollars for the second unit purchased, 3×C dollars for the third unit purchased, and so on. Thus, a client must pay i×C dollars for the i-th unit purchased. If a client must buy N units of an item with cost C and has D dollars in his wallet, will the client have enough money? If not, how many extra dollars will the client need to complete this purchase? 1. The program takes the price per unit (C) of a certain item, the desired number of units (N) and an amount of dollars (D) as input. It computes the total cost of N units and checks if D dollars are enough to complete the purchase. If yes, the program prints a message. Otherwise, it prints how many extra dollars are necessary to complete the purchase. 2. Input validation: the program validates the input price (greater than 0), number of units (greater than 0), and amount of dollars (greater than or equal to 0). If any of the three inputs is invalid, the program prints a message and exits.

Problem 2 – Characters (50 points)
In this program, we define an input to be in order if the characters of the input
1. are alphabetic letters, lower case or upper case.
2. any two neighboring letters (regardless of case) are in order, for example, ‘c’ and
‘k’ are in order but ‘s’ and ‘b’ is not in order because ‘c’ is less than ‘k’ and ‘s’ is
greater than ‘b’, considering their ASCII values.
3. if two neighboring letters are same, they are considered in order.
Write a program that determines if the input is in order.
1) Assume the input contains two or more characters.
2) Convert input characters to lower case before comparison.
3) The user input ends with the user pressing the enter key (a new line character).
4) Use getchar() to read in the input. Character handling functions are allowed.
