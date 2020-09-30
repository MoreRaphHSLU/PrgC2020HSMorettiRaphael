#include <stdio.h>
#include <stdlib.h>

int main( int argc, char* argv[] )
{
	int value1 = 0, value2 = 0, value3 = 0;
	// make sure, we have exactly 3 arguments
	if( argc!= 4)
	{
		// usage message
		printf("usage: logicOperators val1 val2 val3\n");
	}
	else
	{
		value1 = atoi(argv[1]);
		value2 = atoi(argv[2]);
		value3 = atoi(argv[3]);
		

	
		if((value1>0&&value2>0&&value3>0))
		{
			printf("\nValue1 =%d, Value2 =%d, Value3 =%d\n\n", value1, value2, value3);
			
			if((value1>value2)&&(value1>value3)&&(value2 > value3))
			{
				printf("kleinste Zahl: %d, grösste Zahl: %d\n",value3, value1);
			}
			else if((value1>value2)&&(value1>value3)&&(value3 > value2))
			{
				printf("kleinste Zahl: %d, grösste Zahl: %d\n",value2, value1);
			}
		
		
			else if((value2>value1)&&(value2>value3)&&(value3 > value1))
			{
				printf("kleinste Zahl: %d, grösste Zahl: %d\n",value1, value2);
			}
			else if((value2>value1)&&(value2>value3)&&(value1 > value3))
			{
			printf("kleinste Zahl: %d, grösste Zahl: %d\n",value3, value2);
			}
		
		
			else if((value3>value1)&&(value3>value2)&&(value2 > value1))
			{
				printf("kleinste Zahl: %d, grösste Zahl: %d\n",value1, value3);
			}
			else if((value3>value1)&&(value3>value2)&&(value1 > value2))
			{
				printf("kleinste Zahl: %d, grösste Zahl: %d\n",value2, value3);
			}
		}
		else
			{
			printf("ungültige Eingabe. Die Zahlen müssen positiv sein\n");
			return 0;
			}
	}
	return 0;
}
