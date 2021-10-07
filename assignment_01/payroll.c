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

void printPayroll(Employee list[], int count) //does list need to be a []?
{
    printf("*** PAYROLL ***\n");

    for(int i = 0; i < count; i++)
    {

        //pointer because it's char array?
	printf("Last Name: %c \n", *list[i].last_name);  
    printf("Pay Rate: %lf \n", list[i].pay_rate);

    }
}

void createPayroll(Employee list[], int count)
{
    // int tempCount = 0;
    // printf("this is tempCount now %d \n", tempCount);
    // printf("this is *count %d \n", count);
    printf("how many employees?\n");
    scanf("%d", &count);
    //printf("this is tempCount now %d \n", tempCount);
    //*count = tempCount;
    
    char tname[100];
    for(int i=0; i < count; i++)
    {
	

	printf("For employee %d \n", i+1);
	
    printf("last name? ");
	scanf("%s", tname);
    printf("Tname>>> %s", tname);
    strcpy(list[i].last_name, tname);

    printf("lastname? %s", list[i].last_name);

    printf("pay rate? ");
	scanf("%lf\n", &list[i].pay_rate);
    }
    
}

int main()
{
    Employee list[SIZE];
    int count = 0;
    
    createPayroll(list, count);
    
    printPayroll(list, count);
      
    return 0;
}
