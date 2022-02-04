/* PROGRAM Bookstore Order Estimation Calculator
 AUTHOR: Noah Romo
 FSU ID: ner20@my.fsu.edu
 RECITATION SECTION NUMBER: 3
 TA NAME: Faith
 COP 3363 - Fall 2020
 Project Number: 2
 Due Date: Wednesday 9/23/2020

SUMMARY

A bookstore wants to estimate the amount of a specific book they should buy based on how many students 
they believe will purchase the book and how many they already have in stock. If the bookstore needs to 
purchase more inventory from its supplier, the calculator will proceed to calculate how much the order 
is going to cost the bookstore and how much profit to expect. 

INPUT

The user is asked to enter the data of the specific textbook for the first four lines of the input and 
then enter answer two more questions about the book by entering a single character. 
- First piece of data is the book ID number 
- Second piece of data is the cost that the store has to pay its supplier per copy
- Third piece of data is the current volume of books the store has in stock
- Fourth piece of data is the expected class enrollment of the class using this textbook
- First question is whether the book is required by the class or suggested
- Second question is whether the book is new, meaning first time being used in this class, or old, meaning if it has been used in this course previously

OUTPUT

The output is first the number of books that need to be ordered, if any. 
Then the second is the total cost of this order, to cents. 
Finally is the expected profit on the books being ordered, to cents. 

ASSUMPTIONS

All input data is valid and is correctly entered by the user.
The store pays 80% of the list price to obtain the books from the supplier. 

*/ 

#include <iostream> 
#include <cmath>

using namespace std;

int main(){ //main

//Variables 
int book_id_number, //The book ID number 
    vol_current, //The current volume of books in the store
    exp_enroll, //The expected enrollment of students
    vol_order; //The number of books that need to be ordered 

double cost_copy, //Cost per copy of the book that the store needs to pay 
       sell_percent, //Percentage of enrolled students expected to buy the book
       order_cost, //Total cost of the books that the store will need to order 
       exp_profit; //Expected profit that the store will make from selling to students

char req_or_sug, //Whether or not the book is required or suggested
     new_or_old; //Whether or not the book is new or old 


cout<<endl<<"-----Welcome to our Bookstore Order Estimation Calculator-----"<<endl;

//Inputs 
cout<<"Enter the book ID number: ";
cin>>book_id_number;

cout<<"Enter the book's cost per copy: ";
cin>>cost_copy;

cout<<"Enter the current volume on hand: ";
cin>>vol_current;

cout<<"Enter the expected class enrollment: ";
cin>>exp_enroll;

cout<<"Is the book required (R) or suggested (S) ? ";
cin>>req_or_sug;

cout<<"Is the book new (N) or old (O) ? ";
cin>>new_or_old;


//Calculate percentage of students who will buy the book
if(req_or_sug=='R'&&new_or_old=='N'){ //if (req_or_sug is R and new_or_old is N)
sell_percent = 0.9;
} //if (req_or_sug is R and new_or_old is N)

if(req_or_sug=='R'&&new_or_old=='O'){ //if (req_or_sug is R and new_or_old is O)
sell_percent = 0.65;
} //if (req_or_sug is R and new_or_old is O)

if(req_or_sug=='S'&&new_or_old=='N'){ //if (req_or_sug is S and new_or_old is N)
sell_percent = 0.40;
} //if (req_or_sug is S and new_or_old is N)

if(req_or_sug=='S'&&new_or_old=='O'){ //if (req_or_sug is S and new_or_old is O)
sell_percent = 0.2;
} //if (req_or_sug is S and new_or_old is O)


//Calculate the numer of books to order
vol_order = (sell_percent * exp_enroll) - vol_current + 1;


if(vol_order>0){ //if (vol_order is greater than 3)

cout<<endl<<"BOOK ORDER ESTIMATION SUMMARY:"<<endl;

cout<<"------------------------------"<<endl;

cout<<endl;

cout<<"Information for book ID # "<<book_id_number<<endl;

cout<<"Number of books to order: "<<vol_order<<endl;

//Calculate the total cost of the order
order_cost = vol_order * cost_copy; 

cout<<"Total cost of this order: $"<<order_cost<<endl;

//Calculate the expected profit 
exp_profit = (order_cost / 0.8) - order_cost; 

cout<<"Expected profit on books ordered: $"<<exp_profit<<endl;

cout<<endl;

cout<<"Bookstore order calculator terminated."<<endl; 

cout<<endl;

} //if (vol_order is greater than 3)
else{ //else

cout<<endl<<"BOOK ORDER ESTIMATION SUMMARY:"<<endl;

cout<<"------------------------------"<<endl;

cout<<endl;

cout<<"Information for book ID # "<<book_id_number<<endl;

cout<<"Number of books to order: 0"<<endl;

cout<<endl;

cout<<"Bookstore order calculator terminated."<<endl;

cout<<endl; 

} //else

return 0;
} //main
