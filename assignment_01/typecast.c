/*  assignment 1 part D
 * PUT YOUR NAME AND ANSWERS HERE
 *  
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
