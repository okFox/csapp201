/* assignment 1 - part B
 *  
 */

#include <stdio.h>



int bit_value(unsigned number, int pos)
{
    // add your code here
    return 0;
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
