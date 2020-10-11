#include <stdio.h>
#include <stdlib.h>

int main( int argc, char* argv[] )
{
	int input = 0;
	printf("Enter a value between 1 and 3: ");
	scanf("%d", &input);
	
	
	switch(input)
	{
		case 1:
			printf("1\n");
			// break; // vergessen!
		case 2:
			printf("y\n");
			break;
		default:
			printf("neither 1 or 2\n");
			break;
	}
	return 0;
}
