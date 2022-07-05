#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* * assign a random number to the variable n each time it is executed and
* print the last digit of the number stored
*return zero
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    if(n > 5)
    {
	printf("Last digit of %d is " ,n);
    }
    if(n == 0)
    {
        printf"0");
    }
    if(n < 6 && n != 0)
    {
        printf("Less than 6 and not zero ");
    }
    printf("\n")
	return (0);
}