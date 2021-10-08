/* assignment 1 part A
 */

#include <stdio.h>
#include <string.h>


const int SIZE = 100;

typedef struct 
{
    char last_name[SIZE];
    double pay_rate;
}Employee;

void printPayroll(Employee list[], int *count)
{

    printf("*** PAYROLL ***\n");
    printf("count: %p\n", count);
    // printf("countER: %p\n", counter);
    for(int i = 0; i < count; i++)
    {
	printf("Last Name: %s\n", list[i].last_name);  
    printf("Pay Rate: %lf\n", list[i].pay_rate);

    }
}

void createPayroll(Employee list[], int *count)
{
    // int tempCount = 0;
    printf("how many employees?\n");
    scanf("%d", count);

    // count = tempCount;
    printf(">>>>count is now: %d\n", *count);

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
    // count = tempCount;
    printf("count is NOW: %d\n", count);
    // return;
}

int main()
{
    Employee list[SIZE];
    int count = 0;
    // int *countPtr = &count;

    
    createPayroll(list, &count);

    printf("count in main: %d", count);
    // printf("countptr in main: %d\n", countPtr);

    printf("list.name: %s\n", list[1].last_name);

    printPayroll(list, count);
      
    return 0;
}
