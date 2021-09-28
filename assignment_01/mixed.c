/* Assignment 1 part C
 * PUT YOUR NAME AND ANSWERS HERE
 * Explain the output of the following
 * values: 20, -20, 200, -200
 * Then fix the function to work correctly.
 * NOTE: ONLY change the function.
 * And don't change the types.
 */

#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

void compare(int a)
{
    /* Change this function so it works correctly
     * test it with both positive, negative and zero
     * values. You don't need to worry about overflow.
     */ 
     
    // an unsigned is an unsigned int type
    unsigned b = 100;

    if(a > b)
    {
	printf("a (%d) > b (%d)\n", a, b);
    }
    else
    {
	printf("a (%d) <= b (%d)", a, b);
    }
}



int main()
{
    int num=0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    compare(num);
    
    return 0;
}
