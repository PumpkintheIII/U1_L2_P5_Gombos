/*
  UB C Programming Unit 1 Lesson 2 Program 5
  Height in Inches
  Max Gombos
*/
#include <stdio.h> //imports input and output functions

int main(void) { //declares main function
  int feet, inches, height; //initialize variables as integer

  printf("This program allows you to convert your height from feet and inches to inches only. You will get two different prompts to input your height in whole numbers:\n\t- Feet: Input your height in feet.\n\t- Inches: Input the remainder of inches.\nExample: If your height is 5\'6\":\n\t- Feet: 5\n\t- Inches: 6"); //instructions
  
  printf("\n\nFeet: ");
  //asks how tall you are in feet
  scanf("%d", &feet); //accepts user input and formats as integer
  printf("Inches: ");
  //asks how tall you are in inches
  scanf("%d", &inches); //accepts user input and formats it as integer
  
  height = feet*12; //converts feet to inches
  height += inches; //adds the inches

  printf("\nYour height of %d\'%d\" is equal to: %d inches", feet, inches, height);
  //^outputs the height in inches
  
  return 0;
}