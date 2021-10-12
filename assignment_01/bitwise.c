/* assignment 1 - part B
 *  In the program there is a function that takes an unsigned integer num (note this is always
positive or zero) and an int position pos (0..31) and returns the value of the (pos)th bit as an integer (this will be either 1, 0 or -1 for error). Check for pos being between 0 and 31 and if it's not return a -1.
--Need to use at least one bitwise logic operator and at least one shift operator in your function somewhere.
 */

#include <stdio.h>



int bit_value(unsigned number, int pos)
{
    int bit = (number >> pos) & 1;
    return bit;
}

int main()
{
    

    int num, pos, value;
    printf("enter number: ");
    scanf("%d",&num);
    printf("enter position (0 to 31): ");
    scanf("%d",&pos);
    value = bit_value(num, pos);
    printf("value is %d\n", value);
    
    return 0;
}
