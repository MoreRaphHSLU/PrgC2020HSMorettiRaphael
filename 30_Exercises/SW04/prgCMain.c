#include <stdio.h>

typedef enum {
	MAIN_MENU = 1,
	NUMSTAT,
	CUBIC,
	FACTORIAL,
	NCHOOSEK,
	PRINTBINARY,
	EXIT = 99
} MenuItem;


// function declarations
MenuItem PrintMainMenu( void );
MenuItem numstatMenu( void );
long int ComputeCubic( long int x );
long int Factorial( long x );
long long nChooseK( long long n, long long k );
long long PrintBinary(int n );
int argc = 0;
char* argv = 0;

int main( int argc, char* argv[] )
{

	MenuItem menuSelected = MAIN_MENU;
	int run = 1;
	long int input = 0;	
	while(run)
	{
		switch(menuSelected){
			case MAIN_MENU:
				menuSelected = PrintMainMenu();
				break;
	
			case NUMSTAT:

				menuSelected = numstatMenu();
				break;

			case CUBIC:
				printf("\n***********************************\n");
				printf("CUBIC\n");
				printf("***********************************\n\n");
				printf("Enter a 'long int' number: ");
				scanf("%ld", &input);
				printf("%ld cubed is %ld\n\n", input, ComputeCubic(input));
				
				int decision = 0;			
				printf("to get back to MAIN_MENU write : '1' to Exit '0'\n");
				scanf("%d", &decision);
				MenuItem selection = CUBIC;
				if (decision == 1) 
				selection = MAIN_MENU;
				else selection = EXIT;	
				menuSelected = selection;
				break;
			
			case FACTORIAL:
				printf("\n***********************************\n");
				printf("FACTORIAL\n");
				printf("***********************************\n\n");
				
				printf("Enter a 'long' number: ");
				scanf("%ld", &input);
				printf("%ld factorial is %ld\n\n", input, Factorial(input));

				printf("to get back to MAIN_MENU write : '1' to Exit '0'\n");
				scanf("%d", &decision);				
				if (decision == 1) 
				selection = MAIN_MENU;
				else selection = EXIT;	
				menuSelected = selection;
				break;
				
			case NCHOOSEK:
				printf("\n***********************************\n");
				printf("NCHOOSEK\n");
				printf("***********************************\n\n");
					
				long long input1=0, input2=0;
				printf("N tief K, gib die Zahl 'n' ein und die Zahl 'k'\n");
				scanf("%lld %lld", &input1, &input2);
				if(input1<input2)
				printf("n muss grösser gleich k sein!\n\n");
				else
				{
				printf("%lld tief %lld beträgt %lld\n\n", input1, input2, nChooseK(input1, input2));



				printf("to get back to MAIN_MENU write : '1' to Exit '0'\n");
				scanf("%d", &decision);
				if (decision == 1) 
				selection = MAIN_MENU;
				else selection = EXIT;	
				menuSelected = selection;
				}
				break;
				
			case PRINTBINARY:
				printf("\n***********************************\n");
				printf("PRINTBINARY\n");
				printf("***********************************\n\n");
				long int input3 = 0;
				printf("Gib eine Dezimalzahl ein:");
				scanf("%ld", &input3);
				printf("%ld in binär-Form ist 0b%lld\n\n", input3, PrintBinary(input3));

				printf("to get back to MAIN_MENU write : '1' to Exit '0'\n");
				scanf("%d", &decision);
				if (decision == 1) 
				selection = MAIN_MENU;
				else selection = EXIT;	
				menuSelected = selection;
				break;

			case EXIT:	
				run = 0;
				break;

			default:		
				printf("invalid menu selection\n");
				break;
		}
	}

 	return 0;
}


// function implementations:
MenuItem PrintMainMenu( void )
{
	MenuItem selection = MAIN_MENU;
	printf("\n***********************************\n");
	printf("Main Menu\n");
	printf("***********************************\n\n");
	printf("Select from the following options:\n");
	printf("%d - NumStat\n", NUMSTAT);
	printf("%d - Cubic\n", CUBIC);
	printf("%d - Factorial\n", FACTORIAL);
	printf("%d - NchooseK\n", NCHOOSEK);
	printf("%d - PrintBinary\n", PRINTBINARY);
	printf("%d - Exit\n", EXIT);
	printf("--> ");
	scanf("%d", (int*)&selection);
	return selection;
}	

//-----------------------------------------------------------------
long int ComputeCubic( long int x ){
	return x*x*x;
}
//-----------------------------------------------------------------
long long nChooseK( long long n, long long k )
{
	long long facn( long long n )
	{
		long long facn = 1;
		for ( long long i = 2; i <= n; i= i+1)
			facn = facn * i;
		return facn;
	}
	long long fack( long long k )
	{
		long long fack = 1;
		for ( long long i = 2; i <= k; i= i+1)
			fack = fack * i;
		return fack;
	}
	long long facnk( long long n, long long k )
	{
		long long facnk = 1;
		for ( long long i = 2; i <= (n-k); i= i+1)
			facnk = facnk * i;
		return facnk;
	}
	long long nk = facn(n)/(fack(k)*facnk(n, k));
	return nk;
}
//-----------------------------------------------------------------
MenuItem numstatMenu( void )
{
	MenuItem selection = NUMSTAT;
	float value1 = 0, value2 = 0, valuemin = 0, valuemax = 0, sum = 0, abs = 0, product = 0, ratio = 0;
	
	printf("\n***********************************\n");
	printf("NUMSTAT\n");
	printf("***********************************\n\n");
	
	printf("usage: please write in the following format : \n'val1' and then press enter and then 'val2' \n");
	printf("val1 --> ");
	scanf("%f", &value1);
	printf("val2 --> ");
	scanf("%f", &value2);

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
	
	int decision = 0;
	printf("to get back to MAIN_MENU write : '1' to Exit '0'\n");
	scanf("%d", &decision);
	if (decision == 1) 
	selection = MAIN_MENU;
	else selection = EXIT;	
	return selection;
}
//-----------------------------------------------------------------
long int Factorial ( long n )
{
	long result = 0;
	if ( n >= 1 )
	{
		result = n*Factorial(n-1);
	}
	else
	{
		result = 1;
	}
	return result;
}
//-------------------------------------------------------------------
long long PrintBinary(int n )
{
	long long bin = 0;
	int rem, i =1;
	while( n!= 0)
	{
	rem = n % 2;
	n = n / 2;
	bin = bin + rem * i;
	i = i * 10;
	}
return bin;
}
