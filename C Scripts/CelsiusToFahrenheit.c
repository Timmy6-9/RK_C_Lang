#include <stdio.h>

main()
{
	float fahr, celsius;
	float lower, upper, step;
	
	lower = 0.0;
	upper = 30.0;
	step = 2.0;
	
	celsius = lower;
	printf("Celsius | Fahrenheit\n-------------------- \n\n");
	while (celsius <= upper) 
	{
		fahr = (celsius * 9.0/5.0) + 32;
		printf("%8.1f %10.2f\n", celsius, fahr);
		celsius = celsius + step;
	}
}