// Simple C program to display "Hello World"
  
// Header file for input output functions
#include <stdio.h>
  
// main function -
// where the execution of program begins
int main()
{
  char	name[50];
  int	age;
  
    printf("Enter your name followed by a space then your age\n");
    scanf("%s %d", name, &age);

    printf("name %s age %d\n", name, age);

    // prints hello world
    printf("Hello World\n");
  
    return 0;
}

