#include<stdio.h>
int main(){
int i=0x40302010;
unsigned char *cp;
cp = (unsigned char *) &i;
printf("%x",*cp);
}
