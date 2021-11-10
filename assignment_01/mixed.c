/* Assignment 1 part C
 * PUT YOUR NAME AND ANSWERS HERE
 * Sarah Mayfield
 * 
 * Explain the output of the following
 * values: 20, -20, 200, -200
 * ----------
 in order to compare 2 numbers they must be of the same type.  If an unsigned 
 and a signed number are compared the signed number is implicitly type cast to unsigned.  
 Unsigned's minimum is 0.  So the signed number is converted to unsigned.  
 If the signed number being converted is negative, 
 the compiler will at the int's MAX_RANGE + 1 (multiple times if necessary).  
 This makes the converted number very big. This is why -20 and -200 show up as greater than 100.
 * 
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

    int s = (int)b; //cast unsigned to signed

    if(a > s)
    {
	printf("a (%d) > b (%d)\n", a, s);
    }
    else
    {
	printf("a (%d) <= b (%d)", a, s);
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
