#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		printf("%d if(n>0) "is positive"\n else if(n<0) "is negetive"\n else if(n==0) "is zero"\n", n)
		return (0);
}
