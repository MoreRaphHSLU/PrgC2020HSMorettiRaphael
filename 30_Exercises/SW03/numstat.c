#include <stdio.h>
#include <stdlib.h>

int main( int argc, char* argv[] )
{

	float value1 = 0, value2 = 0, valuemin = 0, valuemax = 0, sum = 0, abs = 0, product = 0, ratio = 0;
	// make sure, we have exactly 3 arguments
	if( argc!= 3)
	{
		// usage message
		printf("usage: please write in the following format : 'numstat val1 val2' \n");
	}
	else
	{

		value1 = strtof(argv[1], NULL);
		value2 = strtof(argv[2], NULL);

		valuemin=value1;
		valuemax=value2;
		
		if (value1 > value2)
		valuemin=value2,valuemax=value1;
		
		sum = value1+value2;
		abs = valuemax-valuemin;
		product = value1*value2;
		ratio= value2/value1;
		
		printf("\na) Inputs: %.3f and %.3f\n", valuemin, valuemax);
		printf("b) Sum: %.3f\n", sum);
		printf("c) Absolute Difference: %.3f\n", abs);
		printf("d) Product: %.3f\n", product);
		printf("e) Ratio: %.3f\n\n", ratio);
			
				
		//}	
	}

	return 0;
}
