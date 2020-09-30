#include <stdio.h>

int main( int argc, char* argv[] )
{

	int a = 0, b = 0;
	//hier wird a zuerst inkrementiert und dann abgegriffen
	printf("a: %d\n", ++a);
	//hier wird zuerst abgegriffen und erst dann inkrementiert
	printf("b; %d\n", b++);
	
	//hier sind dann beide Werte 1
	printf("a: %d, b: %d\n", a, b);


	return 0;
}
