/* assignment 1 part A
 */

#include <stdio.h>
#include <string.h>


typedef struct 
{
    char last_name[100]; //would not compile on pcc server using [SIZE]
    double pay_rate;
}Employee;

void printPayroll(Employee list[], int count)
{

    printf("*** PAYROLL ***\n");
    
	for(int i = 0; i < count; i++)
    {
	printf("Last Name: %s\n", list[i].last_name);  
    printf("Pay Rate: %lf\n", list[i].pay_rate);
    }
}

void createPayroll(Employee list[], int *count)
{
    printf("how many employees?\n");
    scanf("%d", count);

    char tname[100];
    for(int i=0; i < *count; i++)
    {
	printf("For employee %d \n", i+1);
	
    printf("last name? ");
	scanf("%s", tname);
    strcpy(list[i].last_name, tname);

    printf("pay rate? ");
	scanf("%lf", &list[i].pay_rate);
    }
}

int main()
{
    Employee list[100];
    int count = 0;

    
    createPayroll(list, &count);

    printPayroll(list, count);
      
    return 0;
}
