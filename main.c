/*
  UB C Programming Unit 1 Lesson 2 Program 5
  Height in Inches
  Max Gombos
*/
#include <stdio.h> //imports input and output functions

int main(void) { //declares main function
  int feet, inches, height; //initialize variables as integer
  
  printf("How tall are you in feet only: ");
  //asks how tall you are in feet
  scanf("%d", &feet); //accepts user input and formats as integer
  printf("How tall are you in inches only: ");
  //asks how tall you are in inches
  scanf("%d", &inches); //accepts user input and formats it as integer
  
  printf("Feet: %d", feet); //prints feet
  printf("\nInches %d", inches); //prints inches
  
  return 0;
}