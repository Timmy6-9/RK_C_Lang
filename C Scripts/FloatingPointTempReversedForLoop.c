#include <stdio.h>
main()
{
	int fahr;
	
	for (fahr = 300; fahr >= 0; fahr = fahr - 10)
		printf("%6.1d %9.3f\n", fahr, (fahr - 32) * (5.0/9.0));
}