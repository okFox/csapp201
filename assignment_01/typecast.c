/*  assignment 1 part D
 * PUT YOUR NAME AND ANSWERS HERE
 * ---------------------
 *  Sarah Mayfield
 *  1000:
 ->unsigned int: 1000 ==> same, within range of unsigned int
 ->unsigned char (as decimal) 232 ==>
 ->char (as decimal) -24
 ->unsigned long: 1000 ==> same, within range of unsigned int
 ->long: 1000 ==> same, within range of unsigned int


 -1000 :
 ->unsigned int: 4294966296 ==> overflows to become umax of unsigned int (32bits)
 ->unsigned char (as decimal) 24
 ->char (as decimal) 24
 ->unsigned long: 18446744073709550616 ==>overflows to become umax of unsigned long (64bits)
 ->long: -1000 ==>same, within range of unsigned int


 100 :
 ->unsigned int: 100
 ->unsigned char (as decimal) 100
 ->char (as decimal) 100
 ->unsigned long: 100
 ->long: 100


 -100 :
 ->unsigned int: 4294967196 ==> overflows to become umax of unsigned int (32bits)
 ->unsigned char (as decimal) 156
 ->char (as decimal) -100
 ->unsigned long: 18446744073709551516 ==>overflows to become umax of unsigned long (64bits)
 ->long: - ==>same, within range of (signed) long
 * 
 */ 


#include <stdio.h>
#include <stdbool.h>
#include <limits.h>


void typecast(int a)
{
    unsigned b = (unsigned) a;
    unsigned char c = (unsigned char) a;
    char d = (char) a;
    unsigned long e = (unsigned long) a;
    long f = (long) a;
    
    // this illustrates some 
    printf(" %d : \n",a);
    printf(" ->unsigned int: %u\n",b);
    printf(" ->unsigned char (as decimal) %u\n",c);
    printf(" ->char (as decimal) %d\n",d);
    printf(" ->unsigned long: %lu\n",e);
    printf(" ->long: %ld\n",f);
    
}


int main()
{
    int num=0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    typecast(num);
    
    return 0;
}
