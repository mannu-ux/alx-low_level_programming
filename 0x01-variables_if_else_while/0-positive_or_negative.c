#include <time.h>
#include <stdio.h>


/**
 * main - Entry point
 *
@@ -17,19 +18,13 @@ int main(void)
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* my if statement */
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	/*my code*/
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
	{
		printf("%d is negative\n", n);
	}
		printf("%i is negative\n", n);

	return (0);
}
