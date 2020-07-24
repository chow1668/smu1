/*
Name : Your Name 
Class: CS 3342 Programming Languages
Lab Assignment 1
Professor: Dr. Isaac Chow
Due Date:  September 13, 2020 (Sunday)
*/

#include <stdio.h>
int main() { 
   char ch1 = 'C';
   char ch2 = 'S';
   char name[20] = "Your Name";
   /* put your name here. */
   float effort = 110.23;
   int course_num = 3342;
   
   printf("The is %c%c", ch1,ch2);
   printf(" %d Prog Lang. \n" , course_num);
   printf("Student Name:%s \n", name);
   printf("I will give %f %% effort in this class \n", effort); 
   /* modify the above to have 2 digits after decimal for the number'effort'. */
   printf("Octal value of the course number %o \n", course_num);
   printf("Hexadecimal value of the course number is %x \n", course_num);
   return 0;
    
 }