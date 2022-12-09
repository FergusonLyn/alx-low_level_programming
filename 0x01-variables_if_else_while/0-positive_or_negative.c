#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/*requesting user input*/
	printf("Enter user input: ");
	scanf("%d", &n);
	/*if statement to check if its positive/negative*/
	if (n > 0)
	{
	    printf("%d is positive \n", n);
	} else if (n < 0)
	{
	    printf("%d is negative \n", n);
	} else
	{
	    printf("%d is zero \n", n);
	}
	return (0);
}
