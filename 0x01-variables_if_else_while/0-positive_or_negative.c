#include <stdlib.h>
#include <time.h>
/**
* prints if random number is positive or negative
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%lld id positive", n);
	else if (n < 0)
		printf("%lld is negative", n);
	else
		printf("%lld is zero", n);
	return (0);
}
