/*  assignment 2
 *  PUT YOUR NAME HERE
 *  
 * 
 */ 

#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <math.h>

/* Part B: 10 points
 * See instructions on how to do this part.
 * See the web site:
 *  http://www.ibiblio.org/gferg/ldp/GCC-Inline-Assembly-HOWTO.html#s4
 * for information on how to write gcc inline 
 * assembly.
 */
int regular_pay_asm(int payrate, int hours)
{
	// remember to put any register names
	// you are directly using in the
	// clobber list.
	// gpay - %0  hours - %1  payrate - %2
	int gpay=0;
    asm(""
    : "=r"(gpay) /* output */
    : "r"(hours), "r"(payrate)/* input */
    :             /* clobbered register */
    );
	
	return gpay;
}


int regular_pay_c(int pay_rate, int hours)
{
	
	return 0;
}

int main()
{
   int pay_rate = 15;
   int hours = 30;
   
   printf("enter pay rate: ");
   scanf("%d",&pay_rate);
   printf("enter hours: ");
   scanf("%d",&hours);
   
   int rpay_c = regular_pay_c(pay_rate, hours);
   int rpay_asm = regular_pay_asm(pay_rate, hours);
   printf("regular pay (C) is: %d \n",rpay_c);
   printf("regular pay (asm) is: %d \n", rpay_asm);
   
   return 0;
}
