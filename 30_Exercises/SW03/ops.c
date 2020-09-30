#include <stdio.h>

int main( int argc, char* argv[] )
{

//hier passiert ein Integer overflow, er kommt bei der oberen Grenze drüberraus und fängt wieder von vorne an bei -32000 irgendwas
	short largeShort = 32760;
	printf("before: %d ", largeShort);
	largeShort = largeShort +12345;
	printf("after: %d \n\n", largeShort);

	int numerator = 19, denominator = 5, result = 0;
	printf("before: num %d, den %d, res %d \n", numerator, denominator, result);
	result = numerator/denominator;
	printf("after: num %d, den %d, res %d \n\n", numerator, denominator, result);	

//hier ein f nach dem e, damit e auch wirklich als float gespeichert wird und nicht nur als double
	float e = 2.718281828f;
	printf("before: %f \n", e);
	e++;
	printf("after ++: %f \n", e);
	e--;
	printf("after --: %f \n", e);	


//
	double dblNumber = 12.8;
	printf("before: %f \n", dblNumber);
	//nicht zulässig
	//dblNumber = dblNumber%3;
	//printf("after: %f \n", dblNumber);
	return 0;
}
