#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entery
 * Description : poritive or negative number
 * Return : 0 (success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0)
		printf("%i is positive\n",n)
			else if(n<0)
				printf("%i is negative\n",n)
	else(n==0)
						printf("%i is zero\n",n)

		
	return (0);
}
