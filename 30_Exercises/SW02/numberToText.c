#include <stdio.h>

int main( int argc, char* argv[] )
{
	int readValue = 0;
	printf("\n--------------- \nEnter a number between (including) 0 and 9 to display the number as text. Enter 10 to stop the program.\n\nYour number: ");
	scanf("%d", &readValue);
if ( readValue == 10){
	printf("\n--------------- \nThank you. Good bye.\n--------------- \n");
	return 0;
	}
	
	else{
	while( readValue != 10 ){
		if ( readValue >10){
		printf("\n--------------- \n invalid -> try again\n--------------- \n\nNew number: ");
		scanf("%d", &readValue);
		}
		else if ( readValue <0){
		printf("\n--------------- \n invalid -> try again\n--------------- \n\nNew number: ");
		scanf("%d", &readValue);
		}
		else{	
		switch(readValue){
		case 0:
			printf("\n--------------- \n");
			printf("0 as text is ‘zero’\n" );
			printf("--------------- \n\n");
			break;		
		case 1:
			printf("\n--------------- \n");
			printf("1 as text is ‘one’\n" );
			printf("--------------- \n\n");
			break;
		case 2:
			printf("\n--------------- \n");
			printf("2 as text is ‘two’\n");
			printf("--------------- \n\n");
			break;
		case 3:
			printf("\n--------------- \n");
			printf("3 as text is ‘three’\n" );
			printf("--------------- \n\n");
			break;
		case 4:
			printf("\n--------------- \n");
			printf("4 as text is ‘four’\n" );
			printf("--------------- \n\n");
			break;
		case 5:
			printf("\n--------------- \n");
			printf("5 as text is ‘five’\n" );
			printf("--------------- \n\n");
			break;
		case 6:
			printf("\n--------------- \n");
			printf("6 as text is ‘six’\n" );
			printf("--------------- \n\n");
			break;
		case 7:
			printf("\n--------------- \n");
			printf("7 as text is ‘seven’\n" );
			printf("--------------- \n\n");
			break;
		case 8:
			printf("\n--------------- \n");
			printf("8 as text is ‘eight’\n" );
			printf("--------------- \n\n");
			break;
		case 9:
			printf("\n--------------- \n");
			printf("9 as text is ‘nine’\n" );
			printf("--------------- \n\n");
			break;
		}
		printf("--------------- \nEnter a number between (including) 0 and 9 to display the number as text. Enter 10 to stop the program.\n\nYour number: ");
		scanf("%d", &readValue);

		}
		}
}
	printf("\n--------------- \n Thank you.Good bye.\n--------------- \n");
	

	return 0;
}
